//Simple calculator program
#include <stdio.h>

int main(){
    char operator;
    double num1,num2,result;
    int scan_check;

    printf("Enter the operator(+,-,*,/): ");
    scanf(" %c", &operator);

    printf("Enter the values of num1 and num2: ");
    scan_check = scanf("%lf %lf", &num1, &num2);

    if(scan_check != 2){
        printf("please enter the valid numbers.\n");
        return 1;
    }
    
    switch(operator){
        case '+':
             result = num1 + num2;
             printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
             break;

        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            if(num2 == 0){
                printf("Division by zero is not possible.\n");
            }
            else{
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
            break;

        default:
            printf("Error! Invalid operator.\n");
            break;
    }
    return 0;
}