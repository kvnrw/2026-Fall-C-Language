#include <stdio.h>

int main(void){
    int  num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch(op){
        case '+':
            printf("Result: %d\n", num1 + num2); break;
        case '-':
            printf("Result: %d\n", num1 - num2); break;
        case '*':
            printf("Result: %d\n", num1 * num2); break;
        case '/':
            printf("Result: %d\n", num1 / num2); break;
        default:
            printf("Please enter a valid operator.\n");
    }

    return 0;
}
