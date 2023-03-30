#include <stdio.h>
#include <math.h>

double add(double num1, double num2) {
    double result = num1 + num2;
    printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
    return result;
}
double subtract(double num1, double num2) {
    double result = num1 - num2;
    printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
    return result;
}
double multiply(double num1, double num2) {
    double result = num1 * num2;
    printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
    return result;
}
double divide(double num1, double num2) {
    double result;
    if(num2 == 0) {
        printf("Error: Cannot divide by zero\n");
        return 0;
    }
    result = num1 / num2;
    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
    return result;
}
double findSquareRoot(double num1) {
    double result;
    if(num1 < 0) {
        printf("Error: Number entered is negative\n");
        return 0;
    }
    result = sqrt(num1);
    printf("sqrt(%.2lf) = %.2lf\n", num1, result);
    return result;
}
double findPower(double num1, double num2) {
    double result = pow(num1, num2);
    printf("%.2lf^%.2lf = %.2lf\n", num1, num2, result);
    return result;
}

int main() {
    char choice;
    double num1, num2, result;
    
    printf("Enter the operation symbol you want to perform:\n");
    printf("[+] Addition\n");
    printf("[-] Subtraction\n");
    printf("[*] Multiplication\n");
    printf("[/] Division\n");
    printf("[s] Square Root\n");
    printf("[^] Power\n");
    printf("[%] Modulus\n");
    scanf("%c", &choice);


    switch(choice) {
        case '+':
            printf("Enter two numbers to add:\n");
            scanf("%lf %lf", &num1, &num2);
            result = add(num1, num2);
            break;
        case '-':
            printf("Enter two numbers to subtract:\n");
            scanf("%lf %lf", &num1, &num2);
            result = subtract(num1, num2);
            break;
        case '*':
            printf("Enter two numbers to multiply:\n");
            scanf("%lf %lf", &num1, &num2);
            result = multiply(num1, num2);
            break;
        case '/':
            printf("Enter two numbers to divide:\n");
            scanf("%lf %lf", &num1, &num2);
            result = divide(num1, num2);
            break;
        case 's':
            printf("Enter a number to find square root:\n");
            scanf("%lf", &num1);
            result = findSquareRoot(num1);
            break;
        case '^':
            printf("Enter a number and its power:\n");
            scanf("%lf %lf", &num1, &num2);
            result = findPower(num1, num2);
            break;
     }  
    return 0;  
}