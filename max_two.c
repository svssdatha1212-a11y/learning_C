//To check the biggest numbers among two given numbers
#include <stdio.h>

int main(){
    double num1,num2;
    int scan_check;

    printf("Enter the values of num1,num2(using spaces): ");
    scan_check = scanf("%lf %lf", &num1, &num2);

    if(scan_check != 2){
        printf("Error! please enter valid numbers.\n");
    }
    else if(num1 > num2){
        printf("%.2lf is greater than %.2lf.\n", num1, num2);
    }
    else if(num2 > num1){
        printf("%.2lf is greater than %.2lf.\n", num2, num1);
    }
    else{
        printf("Both numbers are equal.\n");
    }
    return 0;
}