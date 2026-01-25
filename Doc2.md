# ** DSA Assignment 2 – Question 2**
# **Program: Infix to Postfix Conversion and Evaluation Using C Language **
## 📌 About the Program

This C program takes a mathematical expression in infix form, converts it into postfix notation, and then evaluates the resulting postfix expression to produce the final result. It supports:

✔ Multi-digit operands
✔ Arithmetic operators (+, -, *, /, etc.)
✔ Parentheses for grouping (( and ))

To handle both conversion and evaluation correctly, it uses the stack data structure — a core concept in data structures for managing LIFO (Last In First Out) operations.

## 📚 (a) Data Structures Used

The primary data structure used is a stack.

### Operator stack (character stack):
Used during infix-to-postfix conversion to temporarily hold operators and parentheses based on precedence and associativity.

### Operand stack (integer stack):
Used during postfix evaluation to store multi-digit operands and intermediate results, following LIFO order.

Stacks are crucial because they help preserve correct evaluation order, keeping track of operator precedence and parentheses.

## 🔧 (b) Functions Implemented
### 1️⃣ push()

Inserts an element (operator or operand) at the top of the stack.

### 2️⃣ pop()

Removes and returns the top element from the stack.

### 3️⃣ precedence()

Returns the precedence of an operator (e.g., * and / have higher precedence than + and -). This helps enforce correct conversion order.

### 4️⃣ infixToPostfix()

Converts the given infix expression to postfix form by scanning the expression and using the stack to manage operators and parentheses. Operands are output directly, and operators are pushed or popped based on precedence rules.

### 5️⃣ evaluatePostfix()

Evaluates the postfix expression using a stack:

Push operands onto the stack as they appear

When an operator is found, pop the required number of operands, apply the operator, and push the result back

Final result remains on the stack after processing the entire postfix expression.

##  (c) Overview of main()

Prompts the user to enter an infix expression.

Calls infixToPostfix() to convert the expression.

Displays the converted postfix expression.

Calls evaluatePostfix() to compute the final result.

Prints the evaluated result of the expression
