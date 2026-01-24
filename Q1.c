#include <stdio.h>
#include <string.h>


#define MAX_SIZE 100

typedef struct {
    char items[MAX_SIZE];
    int top;
} Stack;

void initStack(Stack *s) {
    s->top = -1;
}

bool isEmpty(Stack *s) {
    return s->top == -1;
}

bool isFull(Stack *s) {
    return s->top == MAX_SIZE - 1;
}

void push(Stack *s, char c) {
    if (!isFull(s)) {
        s->items[++(s->top)] = c;
    }
}

char pop(Stack *s) {
    if (!isEmpty(s)) {
        return s->items[(s->top)--];
    }
    return '\0';
}

char peek(Stack *s) {
    if (!isEmpty(s)) {
        return s->items[s->top];
    }
    return '\0';
}

bool isOpening(char c) {
    return (c == '(' || c == '[' || c == '{');
}

bool isClosing(char c) {
    return (c == ')' || c == ']' || c == '}');
}

bool isMatching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}');
}

bool checkBalanced(char *expression) {
    Stack s;
    initStack(&s);
    
    for (int i = 0; expression[i] != '\0'; i++) {
        char current = expression[i];
        
        if (isOpening(current)) {
            push(&s, current);
        }
        else if (isClosing(current)) {
            if (isEmpty(&s)) {
                return false;
            }
            char top = pop(&s);
            if (!isMatching(top, current)) {
                return false;
            }
        }
    }
    
    return isEmpty(&s);
}

int main() {
    char *testExpressions[] = {
        "a + (b - c) * (d)",
        "m + [a - b * (c + d * {m})]",
        "a + (b - c)"
    };
    
    printf("Checking if parentheses are balanced...\n");
    printf("--------------------------------------------------\n");
    
    for (int i = 0; i < 3; i++) {
        bool result = checkBalanced(testExpressions[i]);
        printf("\n%s\n", testExpressions[i]);
        printf("   --> %s\n", result ? "Balanced!" : "Not Balanced");
    }
    
    printf("\n--------------------------------------------------\n");
    printf("Some more examples:\n");
    printf("--------------------------------------------------\n");
    
    char *moreTests[] = {
        "((a + b))",
        "(a + b))",
        "((a + b)",
        "{[()]}",
        "{[(])}",
        "a + b",
        "()",
        ")("
    };
    
    for (int i = 0; i < 8; i++) {
        bool result = checkBalanced(moreTests[i]);
        printf("%s %s\n", result ? "✓" : "✗", moreTests[i]);
    }
    
    return 0;
}