#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "stack.h"

int evaluateLeftToRight(const char* expression) {
    int result = 0;
    int current = 0;
    char operation = '+';

    for (int i = 0; expression[i] != '\0'; i++) {
        if (expression[i] >= '0' && expression[i] <= '9') {
            current = expression[i] - '0';
            while (expression[i + 1] >= '0' && expression[i + 1] <= '9') {
                current = current * 10 + (expression[++i] - '0');
            }
            if (operation == '+') {
                result += current;
            } else if (operation == '-') {
                result -= current;
            } else if (operation == '*') {
                result *= current;
            } else if (operation == '/') {
                result /= current;
            }
        } else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/') {
            operation = expression[i];
        }
    }

    return result;
}

int isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/';
}

int priority(char op) {
    if (op == '+' || op == '-') {
        return 1;
    } else if (op == '*' || op == '/') {
        return 2;
    }
    return 0;
}

void shuntingYard(const char* infix, char* postfix) {
    Stack s;
    initStack(&s);
    int j = 0;

    for (int i = 0; infix[i] != '\0'; i++) {
        if (infix[i] >= '0' && infix[i] <= '9') {
            postfix[j++] = infix[i];
            while (infix[i + 1] >= '0' && infix[i + 1] <= '9') {
                postfix[j++] = infix[++i];
            }
            postfix[j++] = ' ';
        } else if (isOperator(infix[i])) {
            while (!isEmpty(&s) && priority(infix[i]) <= priority(s.data[s.top])) {
                postfix[j++] = pop(&s);
                postfix[j++] = ' ';
            }
            push(&s, infix[i]);
        }
    }

    while (!isEmpty(&s)) {
        postfix[j++] = pop(&s);
        postfix[j++] = ' ';
    }
    postfix[j] = '\0';
}

int evaluatePostfix(const char* postfix) {
    Stack s;
    initStack(&s);
    int i = 0;

    while (postfix[i] != '\0') {
        if (postfix[i] >= '0' && postfix[i] <= '9') {
            int num = 0;
            while (postfix[i] >= '0' && postfix[i] <= '9') {
                num = num * 10 + (postfix[i] - '0');
                i++;
            }
            push(&s, num);
        } else if (isOperator(postfix[i])) {
            int val2 = pop(&s);
            int val1 = pop(&s);
            switch (postfix[i]) {
                case '+': push(&s, val1 + val2); break;
                case '-': push(&s, val1 - val2); break;
                case '*': push(&s, val1 * val2); break;
                case '/': push(&s, val1 / val2); break;
            }
            i++;
        } else {
            i++;
        }
    }

    return pop(&s);
}

int main() {
    const char* expression = "3+2*2";
    char postfix[100];

    int resultLeftExpression = evaluateLeftToRight(expression);
    printf("Result Left to Right: %d\n", resultLeftExpression);

    shuntingYard(expression, postfix);
    printf("Postfix: %s\n", postfix);

    int resultPostFix = evaluatePostfix(postfix);
    printf("Result Postfix: %d\n", resultPostFix);

    return 0;
}