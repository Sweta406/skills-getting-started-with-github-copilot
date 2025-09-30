# Exercise 1: Basic Calculator Functions 🧮

Learn to write fundamental programming functions with GitHub Copilot assistance.

## 🎯 Objectives

By completing this exercise, you will:
- ✅ Practice writing clear prompts for mathematical functions
- ✅ Learn to handle edge cases and input validation
- ✅ Understand how to test AI-generated code
- ✅ Build confidence with basic Copilot workflow

## 📋 Requirements

Create a calculator module with the following functions:
- Basic arithmetic operations (add, subtract, multiply, divide)
- Input validation and error handling
- Support for decimal numbers
- Clear documentation and examples

## 💡 Getting Started

### Step 1: Setup
1. Create a new file: `calculator.js`
2. Ensure Copilot is active (green status in VS Code)
3. Start with clear, descriptive comments

### Step 2: Basic Addition Function
Type this comment and see what Copilot suggests:

```javascript
// Function to add two numbers with input validation
// Parameters: a (number), b (number)
// Returns: sum of a and b (number)
// Throws error if inputs are not numbers
```

**Expected AI Suggestion:**
```javascript
function add(a, b) {
    if (typeof a !== 'number' || typeof b !== 'number') {
        throw new Error('Both parameters must be numbers');
    }
    return a + b;
}
```

### Step 3: Continue with Other Operations
Add similar functions for subtraction, multiplication, and division:

```javascript
// Function to subtract second number from first number
// Parameters: a (number), b (number)
// Returns: difference of a and b (number)
// Throws error if inputs are not numbers

// Function to multiply two numbers
// Parameters: a (number), b (number)  
// Returns: product of a and b (number)
// Throws error if inputs are not numbers

// Function to divide first number by second number
// Parameters: a (number), b (number)
// Returns: quotient of a divided by b (number)
// Throws error if inputs are not numbers or if b is zero
```

## 🧪 Testing Your Functions

### Create Test Cases
Add this comment to generate test code:

```javascript
// Test cases for calculator functions
// Include positive numbers, negative numbers, decimals, and edge cases
```

**Example Test Implementation:**
```javascript
// Test cases for calculator functions
console.log('=== Addition Tests ===');
console.log('add(5, 3):', add(5, 3)); // Expected: 8
console.log('add(-2, 7):', add(-2, 7)); // Expected: 5
console.log('add(0.1, 0.2):', add(0.1, 0.2)); // Expected: 0.3

console.log('=== Subtraction Tests ===');
console.log('subtract(10, 4):', subtract(10, 4)); // Expected: 6
console.log('subtract(-5, -3):', subtract(-5, -3)); // Expected: -2

console.log('=== Multiplication Tests ===');
console.log('multiply(6, 7):', multiply(6, 7)); // Expected: 42
console.log('multiply(-3, 4):', multiply(-3, 4)); // Expected: -12

console.log('=== Division Tests ===');
console.log('divide(15, 3):', divide(15, 3)); // Expected: 5
console.log('divide(7, 2):', divide(7, 2)); // Expected: 3.5

// Error handling tests
try {
    console.log('divide(10, 0):', divide(10, 0));
} catch (error) {
    console.log('Division by zero error:', error.message);
}
```

## ✅ Acceptance Criteria

Your calculator should pass these tests:

### Basic Functionality
- [ ] ✅ `add(5, 3)` returns `8`
- [ ] ✅ `subtract(10, 4)` returns `6`
- [ ] ✅ `multiply(6, 7)` returns `42`
- [ ] ✅ `divide(15, 3)` returns `5`

### Edge Cases
- [ ] ✅ `add(0.1, 0.2)` returns approximately `0.3`
- [ ] ✅ `subtract(-5, -3)` returns `-2`
- [ ] ✅ `multiply(-3, 4)` returns `-12`
- [ ] ✅ `divide(7, 2)` returns `3.5`

### Error Handling
- [ ] ✅ `add("5", 3)` throws an error
- [ ] ✅ `divide(10, 0)` throws an error
- [ ] ✅ Functions handle `null` and `undefined` inputs appropriately

## 🚀 Bonus Challenges

Once you complete the basic requirements, try these extensions:

### Challenge 1: Advanced Operations
```javascript
// Function to calculate power (a raised to the power of b)
// Function to calculate square root
// Function to calculate percentage
```

### Challenge 2: Calculator Object
```javascript
// Create a Calculator class with methods for all operations
// Include memory functions (store, recall, clear)
```

### Challenge 3: Expression Parser
```javascript
// Function to evaluate mathematical expressions from strings
// Example: evaluate("2 + 3 * 4") should return 14
```

## 📝 Complete Example

Here's what your finished `calculator.js` might look like:

```javascript
// ===== BASIC CALCULATOR FUNCTIONS =====

// Function to add two numbers with input validation
function add(a, b) {
    if (typeof a !== 'number' || typeof b !== 'number') {
        throw new Error('Both parameters must be numbers');
    }
    return a + b;
}

// Function to subtract second number from first number
function subtract(a, b) {
    if (typeof a !== 'number' || typeof b !== 'number') {
        throw new Error('Both parameters must be numbers');
    }
    return a - b;
}

// Function to multiply two numbers
function multiply(a, b) {
    if (typeof a !== 'number' || typeof b !== 'number') {
        throw new Error('Both parameters must be numbers');
    }
    return a * b;
}

// Function to divide first number by second number
function divide(a, b) {
    if (typeof a !== 'number' || typeof b !== 'number') {
        throw new Error('Both parameters must be numbers');
    }
    if (b === 0) {
        throw new Error('Division by zero is not allowed');
    }
    return a / b;
}

// ===== TESTING =====

// Test all functions with various inputs
console.log('=== Calculator Tests ===');
console.log('5 + 3 =', add(5, 3));
console.log('10 - 4 =', subtract(10, 4));
console.log('6 × 7 =', multiply(6, 7));
console.log('15 ÷ 3 =', divide(15, 3));

// Test edge cases
console.log('0.1 + 0.2 =', add(0.1, 0.2));
console.log('-5 - (-3) =', subtract(-5, -3));

// Test error handling
try {
    divide(10, 0);
} catch (error) {
    console.log('Error caught:', error.message);
}
```

## 🎓 Learning Points

### What You Should Learn
1. **Clear Prompting** - Specific comments generate better code
2. **Input Validation** - Always validate function parameters
3. **Error Handling** - Anticipate and handle edge cases
4. **Testing** - Verify your code works with various inputs

### Common Copilot Patterns
- AI often suggests comprehensive error handling
- Generated code usually follows best practices
- Multiple suggestions may offer different approaches
- Comments influence the style and completeness of suggestions

## 🔄 Iteration Practice

Try rewriting your functions with different prompt styles:

### Minimalist Prompt
```javascript
// Add two numbers
```

### Detailed Prompt
```javascript
// Function to safely add two numeric values
// Validates input types and handles edge cases
// Returns precise sum or throws descriptive error
```

### Functional Style Prompt
```javascript
// Pure function for addition with immutable parameters
// No side effects, deterministic output
```

Notice how different prompts generate different implementations!

## 📋 Self-Assessment

Rate yourself on these skills:

### Prompt Writing (1-5)
- [ ] Can write clear, specific function descriptions
- [ ] Include parameter and return value information  
- [ ] Specify error handling requirements
- [ ] Provide context for complex requirements

### Code Review (1-5)
- [ ] Identify when AI suggestions need modification
- [ ] Recognize missing edge case handling
- [ ] Spot potential security or performance issues
- [ ] Verify code matches the intended requirements

### Testing (1-5)
- [ ] Create comprehensive test cases
- [ ] Test both success and failure scenarios
- [ ] Validate edge cases and boundary conditions
- [ ] Use debugging tools effectively

## 🎉 Completion

Congratulations! You've completed your first structured exercise with GitHub Copilot. 

### What's Next?
- **Review**: Look back at your prompts and see which generated the best code
- **Experiment**: Try the bonus challenges or create your own functions
- **Practice**: Apply these techniques to other mathematical problems
- **Advance**: Move on to [Exercise 2: String Utilities](./exercise-02.md)

---

**Reflection Question:** Which prompt style worked best for you, and why? Understanding your preferences will help improve your future AI-assisted development!