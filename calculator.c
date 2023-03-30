#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;

    printf("Enter the operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square Root\n");
    printf("6. Power\n");
    scanf("%d", &choice);

    // addition
    if(choice == 1) {
        printf("Enter two numbers to add:\n");
        scanf("%lf %lf", &num1, &num2);
        result = num1 + num2;
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
    }
    // subtraction
    else if(choice == 2) {
        printf("Enter two numbers to subtract:\n");
        scanf("%lf %lf", &num1, &num2);
        result = num1 - num2;
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
    }
    // multiplication
    else if(choice == 3) {
        printf("Enter two numbers to multiply:\n");
        scanf("%lf %lf", &num1, &num2);
        result = num1 * num2;
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
    }
    // division
    else if(choice == 4) {
        printf("Enter two numbers to divide:\n");
        scanf("%lf %lf", &num1, &num2);
        //checking if divisor is 0
        if(num2 == 0) {
            printf("Error: Cannot divide by zero\n");
            return 0;
        }
        result = num1 / num2;
        printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
    }
    // square root
    else if(choice == 5) {
        printf("Enter a number to find its square root:\n");
        scanf("%lf", &num1);
        //checking if number is negative
        if(num1 < 0) {
            printf("Error: Number is negative\n");
            return 0;
        }
        result = sqrt(num1);
        printf("sqrt(%.2lf) = %.2lf\n", num1, result);
    }
    // power
    else if(choice == 6) {
        printf("Enter a number and its power:\n");
        scanf("%lf %lf", &num1, &num2);
        result = pow(num1, num2);
        printf("%.2lf^%.2lf = %.2lf\n", num1, num2, result);
    }
    // invalid choice
    else {
        printf("Error: Invalid choice\n");
    }

    return 0;
}
