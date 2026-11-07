//To find the smallest number among three given numbers
#include <stdio.h>

int main(){
    int num1,num2,num3;
    int scan_check;

    printf("enter three integers(separated by spaces): ");
    scan_check = scanf("%d %d %d", &num1, &num2, &num3);

    if(scan_check != 3){
        printf("Error! please enter valid numbers.\n");
        return 1;
    }
    else if(num1 <= num2 && num1 <= num3){
        printf("%d is the smallest number.\n",num1);
    }
    else if(num2 <= num1 && num2 <= num3){
        printf("%d is the smallest number.\n",num2);
    }
    else{
        printf("%d is the smallest number.\n",num3);
    }
    return 0;
}