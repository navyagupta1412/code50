#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error! Division by zero.\n");
        return 0.0;
    }
}

int main() {
    float num1, num2, result;
    char operator;
    float (*operation)(float, float);  

    while (1) {
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator);  

                switch (operator) {
            case '+':
                operation = add;
                break;
            case '-':
                operation = subtract;
                break;
            case '*':
                operation = multiply;
                break;
            case '/':
                operation = divide;
                break;
            default:
                printf("Invalid operator!\n");
                continue;
        }

        
        result = operation(num1, num2);
        printf("Result: %.2f\n", result);
    }

    return 0;
}
