#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char stack[100];
int top = -1;

void push(char c) { stack[++top] = c; }
char pop() { return stack[top--]; }
char peek() { return stack[top]; }
int isEmpty() { return top == -1; }

int precedence(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return 0;
}

void infixToPostfix(char *infix, char *postfix) {
    int j = 0;
    for (int i = 0; infix[i]; i++) {
        char c = infix[i];
        
        if (isalnum(c)) {
            postfix[j++] = c;
        }
        else if (c == '(') {
            push(c);
        }
        else if (c == ')') {
            while (!isEmpty() && peek() != '(')
                postfix[j++] = pop();
            pop();
        }
        else if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^') {
            while (!isEmpty() && precedence(peek()) >= precedence(c))
                postfix[j++] = pop();
            push(c);
        }
    }
    
    while (!isEmpty())
        postfix[j++] = pop();
    
    postfix[j] = '\0';
}

int evaluate(char *postfix) {
    int stack[100], top = -1;
    
    for (int i = 0; postfix[i]; i++) {
        char c = postfix[i];
        
        if (isdigit(c)) {
            stack[++top] = c - '0';
        }
        else {
            int b = stack[top--];
            int a = stack[top--];
            
            if (c == '+') stack[++top] = a + b;
            else if (c == '-') stack[++top] = a - b;
            else if (c == '*') stack[++top] = a * b;
            else if (c == '/') stack[++top] = a / b;
        }
    }
    
    return stack[top];
}

int main() {
    char infix[100], postfix[100];
    
    printf("Infix to Postfix\n\n");
    
    char *tests[] = {"a+b*c", "(a+b)*c", "2+3*4", "(2+3)*4"};
    
    for (int i = 0; i < 4; i++) {
        top = -1;
        infixToPostfix(tests[i], postfix);
        printf("%s  ->  %s", tests[i], postfix);
        
        if (isdigit(tests[i][0]))
            printf("  =  %d", evaluate(postfix));
        
        printf("\n");
    }
    
    printf("\nYour turn: ");
    scanf("%s", infix);
    
    top = -1;
    infixToPostfix(infix, postfix);
    printf("Postfix: %s\n", postfix);
    
    if (isdigit(infix[0]))
        printf("Result: %d\n", evaluate(postfix));
    
    return 0;
}