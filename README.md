# skills-getting-started-with-github-copilot
Exercise: Get started using GitHub Copilot

## Data Monitoring System

This repository contains a C program that implements a data monitoring system with the following features:

### Requirements Implemented

1. **Data Storage Conditions**: Data "y" is stored only when:
   - Variable "x" is not equal to 0 (x != 0)
   - Variable "z" is greater than 4 (z > 4)

2. **Internal Buffer**: Data "y" is stored in an internal buffer until specific conditions are met

3. **Data Replacement**: When variable "s" is greater than 2 (s > 2), the latest data "y" in the buffer is replaced with new information

4. **Maximum Value Tracking**: The program continuously tracks and evaluates the maximum value of data "y"

### Files

- `data_monitor.c` - Main C program implementing the data monitoring system
- `Makefile` - Build configuration for compiling the program
- `.gitignore` - Git ignore file to exclude compiled binaries

### How to Build and Run

```bash
# Compile the program
make

# Run the program
make run

# Or run directly
./data_monitor

# Clean compiled files
make clean
```

### Program Features

- **DataBuffer Structure**: Manages an array of integer data with size tracking and maximum value caching
- **Conditional Storage**: Only stores data when both conditions (x != 0 and z > 4) are satisfied
- **Dynamic Replacement**: Replaces the most recent buffer entry when s > 2
- **Maximum Value Calculation**: Efficiently tracks and recalculates maximum values
- **Comprehensive Testing**: Includes test cases demonstrating all functionality

### Example Output

The program demonstrates:
1. Storing data under valid conditions
2. Rejecting data under invalid conditions  
3. Monitoring variable 's' and replacing data when s > 2
4. Calculating and displaying the maximum value of stored data

The maximum value evaluation is performed continuously, ensuring the system always knows the peak value among all stored data points.
