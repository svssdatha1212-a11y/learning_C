//To check whether the given number is divisible by 5 or not.
#include <stdio.h>

int main(){
    int num;
    int scan_check;

    printf("Enter a valid number: ");
    scan_check = scanf("%d", &num);

    if(scan_check != 1 ){
        printf("Error! please enter a valid number.\n");
        return 1;
    }

    if(num % 5 == 0){
        printf("%d is divisible by 5.\n", num);
    }

    else{
        printf("%d is not divisible by 5.\n", num);
    }
    return 0;
}