//To find the greatest number among given numbers.
#include <stdio.h>

int main(){
    int num1,num2;
    int scan_check;

    printf("Enter the values of two numbers(using spaces): ");
    scan_check = scanf("%d %d", &num1 , &num2);

    if(scan_check != 2){
        printf("Error! please enter valid two numbers.\n");
        return 1;
    }

    else if(num1 > num2){
        printf("%d is the greatest.\n", num1);
    }

    else if(num2 > num1){
    printf("%d is the greatest.\n", num2);
    }

    else{
        printf("Both numbers are equal.\n");
    }
    return 0;
}