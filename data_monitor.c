#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

#define BUFFER_SIZE 100

typedef struct {
    int data[BUFFER_SIZE];
    int count;
    int max_value;
} DataBuffer;

// Initialize the data buffer
void init_buffer(DataBuffer* buffer) {
    buffer->count = 0;
    buffer->max_value = INT_MIN;
}

// Store data y in the buffer when conditions are met
bool store_data(DataBuffer* buffer, int x, int y, int z) {
    // Check conditions: x != 0 and z > 4
    if (x != 0 && z > 4) {
        if (buffer->count < BUFFER_SIZE) {
            buffer->data[buffer->count] = y;
            buffer->count++;
            
            // Update maximum value
            if (y > buffer->max_value) {
                buffer->max_value = y;
            }
            
            printf("Data stored: y = %d (conditions met: x = %d, z = %d)\n", y, x, z);
            return true;
        } else {
            printf("Buffer full, cannot store more data\n");
            return false;
        }
    } else {
        printf("Conditions not met for storing data (x = %d, z = %d)\n", x, z);
        return false;
    }
}

// Replace data y with latest information when s > 2
void replace_latest_data(DataBuffer* buffer, int y, int s) {
    if (s > 2 && buffer->count > 0) {
        // Replace the most recent data with new y value
        int old_value = buffer->data[buffer->count - 1];
        buffer->data[buffer->count - 1] = y;
        
        printf("Data replaced: old value = %d, new value = %d (s = %d > 2)\n", 
               old_value, y, s);
        
        // Recalculate maximum value
        buffer->max_value = INT_MIN;
        for (int i = 0; i < buffer->count; i++) {
            if (buffer->data[i] > buffer->max_value) {
                buffer->max_value = buffer->data[i];
            }
        }
    } else if (s <= 2) {
        printf("s = %d <= 2, no replacement needed\n", s);
    } else {
        printf("No data in buffer to replace\n");
    }
}

// Get the maximum value of data y
int get_max_value(DataBuffer* buffer) {
    if (buffer->count == 0) {
        printf("No data in buffer\n");
        return INT_MIN;
    }
    return buffer->max_value;
}

// Print buffer contents for debugging
void print_buffer(DataBuffer* buffer) {
    printf("Buffer contents (%d items): ", buffer->count);
    for (int i = 0; i < buffer->count; i++) {
        printf("%d ", buffer->data[i]);
    }
    printf("\nCurrent maximum value: %d\n", buffer->max_value);
}

int main() {
    DataBuffer buffer;
    init_buffer(&buffer);
    
    printf("=== Data Monitoring System ===\n\n");
    
    // Test case 1: Valid conditions (x != 0, z > 4)
    printf("Test 1: Valid conditions\n");
    store_data(&buffer, 5, 10, 7);  // x=5, y=10, z=7
    store_data(&buffer, 3, 15, 5);  // x=3, y=15, z=5
    store_data(&buffer, 1, 8, 6);   // x=1, y=8, z=6
    print_buffer(&buffer);
    printf("\n");
    
    // Test case 2: Invalid conditions
    printf("Test 2: Invalid conditions\n");
    store_data(&buffer, 0, 20, 5);  // x=0 (invalid)
    store_data(&buffer, 2, 25, 3);  // z=3 (invalid)
    store_data(&buffer, 0, 30, 2);  // both invalid
    print_buffer(&buffer);
    printf("\n");
    
    // Test case 3: Monitor variable s and replace data
    printf("Test 3: Monitor variable s\n");
    int s = 1;
    printf("s = %d\n", s);
    replace_latest_data(&buffer, 12, s);
    
    s = 3;
    printf("s = %d\n", s);
    replace_latest_data(&buffer, 12, s);
    print_buffer(&buffer);
    printf("\n");
    
    // Test case 4: Add more data and test replacement again
    printf("Test 4: Add more data and test replacement\n");
    store_data(&buffer, 4, 22, 8);  // Add new data
    print_buffer(&buffer);
    
    s = 5;
    printf("s = %d\n", s);
    replace_latest_data(&buffer, 35, s);
    print_buffer(&buffer);
    printf("\n");
    
    // Final result
    printf("=== Final Results ===\n");
    printf("Maximum value of data y: %d\n", get_max_value(&buffer));
    
    return 0;
}