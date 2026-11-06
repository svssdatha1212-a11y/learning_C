//To check the given number is positive,negative or zero
#include <stdio.h>

int main(){
    int number,scan_check;

    printf("Enter an integer: ");
    scan_check = scanf("%d", &number);

    if(scan_check != 1){
        printf("Error! please enter a valid number\n");
        return 1;
    }
    else if(number > 0){
        printf("%d is a positive number.\n",number);
    }
    else if(number < 0){
        printf("%d is a negative number.\n",number);
    }
    else{
        printf("The number is equal to zero.\n");
    }
    return 0;
}