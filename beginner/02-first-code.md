# Lesson 2: Your First AI Code 🚀

Time to write your first code with GitHub Copilot! This hands-on lesson will guide you through creating actual programs.

## 🎯 Learning Goals

By the end of this lesson, you'll have:
- ✅ Written your first function with Copilot assistance
- ✅ Learned to evaluate and improve AI suggestions
- ✅ Practiced accepting, modifying, and rejecting suggestions
- ✅ Created working code examples

## 🛠️ Setup for This Lesson

1. Open VS Code
2. Create a new folder: `copilot-practice`
3. Create a new file: `first-steps.js`
4. Ensure Copilot is active (green checkmark in status bar)

## 🏁 Exercise 1: Hello World Enhanced

Let's start with a classic, but make it interesting!

### Step 1: Basic Greeting
Type this comment and see what Copilot suggests:

```javascript
// Function to create a personalized greeting message
```

**Expected Output:**
```javascript
// Function to create a personalized greeting message
function createGreeting(name) {
    return `Hello, ${name}! Welcome to our application.`;
}
```

### Step 2: Test Your Function
Add this comment and let Copilot help:

```javascript
// Test the greeting function with different names
```

**Likely Suggestion:**
```javascript
// Test the greeting function with different names
console.log(createGreeting("Alice"));
console.log(createGreeting("Bob"));
console.log(createGreeting("Charlie"));
```

### Step 3: Run and Verify
1. Save your file
2. Open terminal in VS Code (`Ctrl+` `)
3. Run: `node first-steps.js`
4. Verify output shows personalized greetings

## 🎯 Exercise 2: Working with Numbers

### Mathematical Functions
Create a new section in your file:

```javascript
// Function to calculate the area of a rectangle
```

**Watch for suggestions like:**
```javascript
function calculateRectangleArea(width, height) {
    return width * height;
}
```

### Add Input Validation
```javascript
// Function to calculate rectangle area with input validation
```

**Copilot might suggest:**
```javascript
function calculateRectangleAreaSafe(width, height) {
    if (width <= 0 || height <= 0) {
        throw new Error("Width and height must be positive numbers");
    }
    return width * height;
}
```

### Test Edge Cases
```javascript
// Test rectangle area calculation with various inputs
```

## 📊 Exercise 3: Data Processing

### Working with Arrays
```javascript
// Function to find the average of an array of numbers
```

**Expected suggestion:**
```javascript
function calculateAverage(numbers) {
    if (numbers.length === 0) {
        return 0;
    }
    const sum = numbers.reduce((acc, num) => acc + num, 0);
    return sum / numbers.length;
}
```

### Processing Real Data
```javascript
// Function to filter out negative numbers from an array
```

**Possible output:**
```javascript
function filterPositiveNumbers(numbers) {
    return numbers.filter(num => num > 0);
}
```

## 🎨 Exercise 4: String Manipulation

### Text Processing
```javascript
// Function to capitalize the first letter of each word
```

**Copilot suggestion:**
```javascript
function capitalizeWords(str) {
    return str.split(' ')
              .map(word => word.charAt(0).toUpperCase() + word.slice(1))
              .join(' ');
}
```

### Input Sanitization
```javascript
// Function to clean and format user input
```

## 🔍 Evaluating AI Suggestions

### ✅ Good Suggestions Checklist

When Copilot provides a suggestion, ask yourself:

1. **Correctness**: Does the code do what the comment describes?
2. **Syntax**: Is the syntax correct for the language?
3. **Edge Cases**: Does it handle empty inputs, null values, etc.?
4. **Performance**: Is it reasonably efficient?
5. **Readability**: Is the code easy to understand?

### 🔧 Improving Suggestions

Sometimes you need to modify suggestions:

**Original Copilot Suggestion:**
```javascript
function findMax(arr) {
    return Math.max(...arr);
}
```

**Your Improved Version:**
```javascript
function findMax(arr) {
    if (!arr || arr.length === 0) {
        return null; // Handle empty array
    }
    return Math.max(...arr);
}
```

## 🎭 Exercise 5: Real-World Example

Let's create a simple user management system:

```javascript
// User object constructor function
```

**Copilot might suggest:**
```javascript
function User(name, email, age) {
    this.name = name;
    this.email = email;
    this.age = age;
    this.createdAt = new Date();
}
```

### Add User Methods
```javascript
// Method to validate user email format
```

```javascript
// Method to check if user is adult (18+)
```

```javascript
// Method to get user display name
```

## 📋 Complete Example

Here's what your `first-steps.js` file might look like:

```javascript
// ===== PERSONALIZED GREETINGS =====

// Function to create a personalized greeting message
function createGreeting(name) {
    return `Hello, ${name}! Welcome to our application.`;
}

// Test the greeting function with different names
console.log(createGreeting("Alice"));
console.log(createGreeting("Bob"));

// ===== MATHEMATICAL CALCULATIONS =====

// Function to calculate rectangle area with input validation
function calculateRectangleAreaSafe(width, height) {
    if (width <= 0 || height <= 0) {
        throw new Error("Width and height must be positive numbers");
    }
    return width * height;
}

// Test rectangle area calculation
console.log("Rectangle area:", calculateRectangleAreaSafe(5, 3));

// ===== DATA PROCESSING =====

// Function to find the average of an array of numbers
function calculateAverage(numbers) {
    if (numbers.length === 0) {
        return 0;
    }
    const sum = numbers.reduce((acc, num) => acc + num, 0);
    return sum / numbers.length;
}

// Test average calculation
const testNumbers = [1, 2, 3, 4, 5];
console.log("Average:", calculateAverage(testNumbers));

// ===== STRING MANIPULATION =====

// Function to capitalize the first letter of each word
function capitalizeWords(str) {
    return str.split(' ')
              .map(word => word.charAt(0).toUpperCase() + word.slice(1))
              .join(' ');
}

// Test string capitalization
console.log(capitalizeWords("hello world from copilot"));
```

## 🎯 Interactive Challenges

Try these on your own:

### Challenge 1: Password Validator
```javascript
// Function to check if password meets security requirements
// Requirements: at least 8 characters, contains uppercase, lowercase, and number
```

### Challenge 2: Shopping Cart
```javascript
// Function to calculate total price of items in shopping cart
// Include tax calculation (8.5%)
```

### Challenge 3: Date Formatter
```javascript
// Function to format date as "Month Day, Year"
// Example: "January 15, 2024"
```

## 🔄 Iteration Practice

### Start with Simple Comment
```javascript
// Function to sort array
```

### Make It More Specific
```javascript
// Function to sort array of numbers in ascending order
```

### Add Requirements
```javascript
// Function to sort array of numbers in ascending order
// Handle empty arrays and non-numeric values
```

### Specify Return Behavior
```javascript
// Function to sort array of numbers in ascending order
// Handle empty arrays and non-numeric values
// Return new array without modifying original
```

## 📊 Learning Assessment

Check your understanding:

### Self-Test Questions
1. Can you write a comment that generates the code you want?
2. Do you review suggestions before accepting them?
3. Can you identify potential issues in generated code?
4. Are you comfortable testing your code?
5. Can you modify suggestions to better fit your needs?

### Practical Test
Create these functions using only comments and Copilot suggestions:

```javascript
// 1. Function to check if a string is a palindrome

// 2. Function to convert Celsius to Fahrenheit

// 3. Function to count vowels in a string

// 4. Function to generate random number between min and max

// 5. Function to format phone number as (XXX) XXX-XXXX
```

## 🏆 Success Indicators

You're ready for the next lesson when you can:
- ✅ Write effective comments that generate useful code
- ✅ Quickly evaluate whether a suggestion is good or needs work
- ✅ Modify suggestions to improve them
- ✅ Test your code to ensure it works correctly
- ✅ Feel comfortable with the basic Copilot workflow

## 🎉 Congratulations!

You've successfully written your first AI-assisted code! You should now understand:
- How to craft comments that generate good suggestions
- The importance of reviewing and testing AI-generated code
- Basic patterns for common programming tasks

## 🔄 What's Next?

Ready to learn more advanced prompting techniques?
Continue to: [Lesson 3: Basic Prompting](./03-basic-prompting.md) →

---

**Practice Tip:** Try recreating these examples from memory tomorrow. This will help solidify your learning!