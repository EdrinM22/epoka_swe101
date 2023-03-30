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

int main() {
    char choice;
    double num1, num2, result;
    
    printf("Enter the operation symbol you want to perform:\n");
    printf("[+] Addition\n");
    printf("[-] Subtraction\n");
    printf("[*] Multiplication\n");
    printf("[/] Division\n");
    printf("[s]Square Root\n");
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

     }  
    return 0;  
}