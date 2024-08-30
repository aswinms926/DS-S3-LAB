#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int top = -1;
int stack[MAX];   

void push(int x) {
    if (top >= MAX - 1) {
        printf("Stack overflow\n");
        exit(1);
    }
    stack[++top] = x;
}

int pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        exit(1);
    }
    return stack[top--];
}

int main() {
    char exp[100];
    int num1, num2, result;
    char *a;

    printf("Enter the postfix expression: ");
    fgets(exp, sizeof(exp), stdin);
    exp[strcspn(exp, "\n")] = '\0';   

    a = exp;
    
    while (*a != '\0') {
        if (isdigit(*a)) {   
            int num = 0;
            while (isdigit(*a)) {
                num = num * 10 + (*a - '0');   
                a++;
            }
            push(num);
            continue;   
        } else if (*a == ' ') {
            a++;   
            continue;
        } else {   
            num2 = pop();
            num1 = pop();
            
            switch (*a) {
                case '+':
                    result = num1 + num2;
                    break;
                case '-':
                    result = num1 - num2;
                    break;
                case '*':
                    result = num1 * num2;
                    break;
                case '/':
                    if (num2 == 0) {
                        printf("Division by zero error\n");
                        exit(1);
                    }
                    result = num1 / num2;
                    break;
                default:
                    printf("Invalid operator\n");
                    exit(1);
            }
            
            push(result);   
        }
        a++;
    }
    
     printf("Result of postfix evaluation: %d\n", pop());
    
    return 0;
}
