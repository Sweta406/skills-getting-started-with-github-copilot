# Prompt Engineering Mastery 🧠

Advanced techniques for communicating effectively with GitHub Copilot to generate high-quality code.

## 🎯 Understanding AI Communication

Effective prompt engineering is the key to maximizing GitHub Copilot's potential. Think of it as learning a new language where precision and context are crucial.

### The Anatomy of a Great Prompt

```javascript
// Context: [What system/framework you're working in]
// Function: [What the function should do]
// Parameters: [Input types and constraints]
// Returns: [Output format and type]
// Requirements: [Special conditions, error handling, performance]
// Example: [Usage demonstration]
```

## 🚀 Basic to Advanced Prompt Patterns

### Level 1: Simple Function Prompts
```python
# Calculate area of a circle
def circle_area(radius):
    # Copilot suggests: return math.pi * radius ** 2
```

### Level 2: Specification-Driven Prompts
```javascript
// Function to validate and format phone numbers
// Input: string (various formats: (555) 123-4567, 555-123-4567, 5551234567)
// Output: formatted string in format (XXX) XXX-XXXX
// Throws: Error if number is invalid
// Handles: US and Canadian numbers only
```

### Level 3: Context-Aware Prompts
```typescript
// In a React e-commerce application with Redux state management
// Custom hook for managing shopping cart operations
// Features: add/remove items, quantity updates, persist to localStorage
// Integration: dispatch Redux actions, handle async operations
// Returns: cart state and action methods with TypeScript types
```

### Level 4: Architecture-Level Prompts
```python
# Microservice for user authentication in a distributed system
# Architecture: FastAPI + PostgreSQL + Redis + JWT tokens
# Features: registration, login, password reset, 2FA support
# Requirements: rate limiting, audit logging, GDPR compliance
# Patterns: Repository pattern, dependency injection, async/await
# Security: bcrypt hashing, secure session management, CORS handling
```

## 🎨 Advanced Prompting Techniques

### 1. **Progressive Disclosure**
Build complex systems incrementally:

```typescript
// Step 1: Define core interfaces
interface PaymentProcessor {
    // Payment processing contract
}

// Step 2: Add validation layer
class PaymentValidator {
    // Input validation and sanitization
}

// Step 3: Implement concrete processor
class StripePaymentProcessor implements PaymentProcessor {
    // Stripe-specific implementation with error handling
}

// Step 4: Add retry mechanism and circuit breaker
class ResilientPaymentProcessor {
    // Wrapper with retry logic and fallback strategies
}
```

### 2. **Constraint-Based Engineering**
Use constraints to guide AI behavior:

```rust
// High-performance string search algorithm
// Constraints:
// - Memory usage: maximum 50MB for 1GB input file
// - Time complexity: O(n + m) where n=text length, m=pattern length
// - Thread safety: concurrent reads, no shared mutable state
// - Platform: must compile on Linux, Windows, macOS
// - Dependencies: only standard library, no external crates
```

### 3. **Domain-Specific Language Integration**
Leverage domain knowledge:

```sql
-- Analytics query for e-commerce dashboard
-- Business Logic:
-- - Calculate monthly recurring revenue (MRR)
-- - Include churn rate and customer lifetime value
-- - Segment by user acquisition channel
-- - Performance requirement: sub-second execution on 10M+ records
-- - Database: PostgreSQL with time-series partitioning
```

### 4. **Pattern-Specific Prompts**
Request specific design patterns:

```java
// Implement Command Pattern for undo/redo functionality
// Context: Text editor application
// Requirements:
// - Support for macro recording (composite commands)
// - Memory-efficient operation history (max 100 operations)
// - Serializable commands for session persistence
// - Thread-safe execution for concurrent editing
```

## 🔧 Prompting for Different Scenarios

### Code Generation
```python
# Generate a complete REST API endpoint
# Framework: Flask with SQLAlchemy
# Endpoint: POST /api/users
# Features: JSON validation, database persistence, error handling
# Response: 201 with user data, 400 for validation errors
# Security: JWT authentication, input sanitization
```

### Code Refactoring
```javascript
// Refactor this function to use modern async/await pattern
// Current: callback-based file processing
// Target: Promise-based with proper error handling
// Requirements: maintain backward compatibility, add progress tracking
// Performance: process large files without blocking event loop
```

### Testing
```python
# Generate comprehensive test suite for user authentication module
# Test types: unit tests, integration tests, security tests
# Framework: pytest with fixtures and mocking
# Coverage: all authentication flows, edge cases, error scenarios
# Security: test for common vulnerabilities (timing attacks, etc.)
```

### Documentation
```typescript
// Generate JSDoc documentation for this API client class
// Include: parameter types, return values, error conditions
// Examples: common usage patterns with code samples
// Standards: follow Google documentation style guide
// Audience: external developers integrating with our API
```

## 🎯 Context Management Strategies

### File-Level Context
```javascript
// At the top of your file, establish context:
// Project: E-commerce platform backend
// Framework: Express.js with TypeScript
// Database: MongoDB with Mongoose ODM
// Authentication: JWT with refresh tokens
// Architecture: MVC pattern with service layer
```

### Project-Level Context
Create a `context.md` file in your project:

```markdown
# Project Context for AI Assistance

## Architecture
- Frontend: React with TypeScript
- Backend: Node.js with Express
- Database: PostgreSQL with Prisma ORM
- Cache: Redis for session storage
- Authentication: Auth0 integration

## Coding Standards
- Use functional programming where possible
- Prefer composition over inheritance
- Follow DRY principles but avoid premature abstraction
- All functions must have TypeScript type annotations
- Use descriptive variable names (no abbreviations)

## Performance Requirements
- API responses under 200ms
- Support for 1000+ concurrent users
- Efficient database queries (avoid N+1 problems)
- Implement caching for expensive operations
```

### Variable and Function Naming Context
```python
# Establish naming conventions early in your file
class UserAccountManager:
    """Handles user account operations with descriptive method names."""
    
    def create_new_user_account(self, user_data: dict) -> UserAccount:
        # Copilot will follow your established naming pattern
        
    def validate_user_credentials(self, email: str, password: str) -> bool:
        # Consistent naming helps AI understand your style
```

## 🧪 Experimental Techniques

### Chain-of-Thought Prompting
```python
# Problem: Optimize database query performance
# Analysis: Current query scans full table (500M records)
# Solution approach:
# 1. Add composite index on frequently queried columns
# 2. Implement query result caching with TTL
# 3. Use database partitioning for time-based data
# 4. Add query optimization hints for complex joins
# Implementation:
```

### Few-Shot Learning
```javascript
// Examples of our API response format:
// Success: { success: true, data: {...}, meta: { timestamp, version } }
// Error: { success: false, error: { code, message, details }, meta: {...} }
// Pagination: { success: true, data: [...], pagination: { page, limit, total } }

// Now generate API response handler following these patterns:
```

### Meta-Programming Prompts
```python
# Generate a decorator factory that:
# - Measures function execution time
# - Logs performance metrics to structured logger
# - Handles different metric backends (Prometheus, DataDog)
# - Supports custom metric tags and sampling rates
# Usage: @performance_monitor(backend='prometheus', tags={'service': 'api'})
```

## 📊 Prompt Quality Assessment

### Evaluation Criteria

#### Clarity (1-5)
- Is the intent clearly communicated?
- Are requirements specific and unambiguous?
- Does it include necessary context?

#### Completeness (1-5)
- Are all requirements covered?
- Is error handling specified?
- Are edge cases mentioned?

#### Specificity (1-5)
- Are technical details provided?
- Is the expected output format clear?
- Are constraints and limitations stated?

#### Actionability (1-5)
- Can AI act on the prompt immediately?
- Is the scope appropriate for a single response?
- Are dependencies and assumptions clear?

### Prompt Optimization Process

```
1. Write initial prompt
2. Generate code with Copilot
3. Evaluate result quality
4. Identify gaps or issues
5. Refine prompt with additional context
6. Regenerate and compare
7. Iterate until satisfied
```

## 🎨 Industry-Specific Patterns

### Web Development
```javascript
// React component with accessibility compliance
// WCAG 2.1 AA standards, keyboard navigation support
// Screen reader friendly, proper ARIA attributes
// Responsive design with mobile-first approach
```

### Data Science
```python
# Machine learning pipeline for customer churn prediction
# Framework: scikit-learn with pandas for data processing
# Features: automated feature engineering, cross-validation
# Output: model accuracy metrics and feature importance scores
# Deployment: pickle serialization for production inference
```

### DevOps/Infrastructure
```yaml
# Kubernetes deployment configuration
# Application: microservice with health checks
# Requirements: rolling updates, resource limits, auto-scaling
# Monitoring: Prometheus metrics, structured logging
# Security: non-root user, read-only filesystem, network policies
```

### Mobile Development
```swift
// iOS SwiftUI view with Core Data integration
// Features: offline-first architecture, data synchronization
// UI: responsive layout for iPhone and iPad
// Performance: lazy loading, memory optimization
// Accessibility: VoiceOver support, dynamic type scaling
```

## 🔄 Iterative Prompt Refinement

### Example Evolution

**V1 - Basic:**
```python
# Function to process user data
```

**V2 - More Specific:**
```python
# Function to validate and sanitize user registration data
```

**V3 - Context Added:**
```python
# Function to validate and sanitize user registration data
# Framework: Django with custom user model
# Validation: email format, password strength, unique username
```

**V4 - Complete Specification:**
```python
# Function to validate and sanitize user registration data
# Framework: Django with custom user model extending AbstractUser
# Validation rules:
# - Email: valid format, not already registered, max 254 chars
# - Password: min 8 chars, mixed case, numbers, special chars
# - Username: alphanumeric only, 3-30 chars, unique
# Error handling: return validation errors dict with field-specific messages
# Security: rate limiting, CSRF protection, SQL injection prevention
```

## 📋 Best Practices Summary

### DO ✅
- **Provide rich context** about your project and requirements
- **Use specific technical terminology** relevant to your domain
- **Include error handling requirements** in your prompts
- **Specify performance and security constraints**
- **Break complex tasks** into smaller, focused prompts
- **Include examples** of desired input/output formats

### DON'T ❌
- **Use vague or ambiguous language**
- **Omit important context** about your tech stack
- **Ignore edge cases and error conditions**
- **Request overly complex functionality** in a single prompt
- **Forget to specify data types and formats**
- **Skip validation and security requirements**

## 🎯 Practice Exercises

### Exercise 1: Progressive Complexity
Start with a simple prompt and gradually add requirements:
1. "Function to sort an array"
2. Add: "with custom comparison function"
3. Add: "optimized for large datasets"
4. Add: "with progress reporting for UI"

### Exercise 2: Cross-Domain Translation
Take a business requirement and translate it into technical prompts:
- Business: "Users should be able to save their favorite products"
- Technical: Database schema, API endpoints, caching strategy

### Exercise 3: Anti-Pattern Recognition
Practice identifying and improving poor prompts:
- Analyze what makes a prompt ineffective
- Rewrite with better specificity and context

---

**Mastery Tip:** The best prompt engineers think like product managers, breaking down complex requirements into clear, actionable specifications that AI can execute effectively!