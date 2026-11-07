//To find the given number is even or odd
#include <stdio.h>

int main(){
    int number,scan_check;

    printf("enter an integer: ");
    scan_check = scanf("%d", &number);

    if(scan_check != 1){
        printf("Error! please enter a valid number.\n");
        return 1;
    }
    else if(number % 2 == 0){
        printf("%d is an even number.\n",number);
    }
    else{
        printf("%d is an odd number.\n",number);
    }
    return 0;
}