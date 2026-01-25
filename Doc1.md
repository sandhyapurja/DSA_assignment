#largest text **DSA Assignment 2 – Question 1**
#largest text **Balanced Parentheses Program (Using Stack in C)**

📌#slightly smaller **About the Program**

This program checks whether a given mathematical expression contains balanced parentheses or not. It supports multiple types of brackets:

() — Parentheses

{} — Curly braces

[] — Square brackets

The program uses a stack data structure to track opening brackets and ensure that each one matches a corresponding closing bracket.

🔹 Data Structures Used
Name	Purpose
stack[]	Array to store opening brackets while scanning through the expression
top	Integer that indicates the current top index of the stack
🔹 Functions Implemented
1️⃣ push(char ch)

Adds an opening bracket onto the stack.

2️⃣ pop()

Removes and returns the top element from the stack.

3️⃣ isBalanced(char expr[])

Traverses the expression and checks for balanced brackets using the stack.
Returns:

true — if the expression is balanced

false — if the expression is not balanced

🔹 main() Function Overview

Prompts user to enter a mathematical expression.

Removes any trailing newline (from fgets()).

Calls isBalanced() to verify parentheses.

Prints the result:

Balanced Parentheses

Not Balanced Parentheses

📄 Example Output
Input Expression	Output
a + (b - c) * (d	Not Balanced
m + [a - b * (c + d * {m)]	Not Balanced
a + (b - c)	Balanced
