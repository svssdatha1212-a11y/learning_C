//This program checks whether the sum of the cubes of its digits equals to number itself.
/*An armstrong number(narcissistic number) is equal to the sum of its  own digits each 
raised to the power of the total number of digits.*/
#include <stdio.h>

int main(){
    int n,original,remainder,result = 0;
    int scan_check;

    printf("Enter a 3-digit number: ");
    scan_check = scanf("%d", &n);

    if(scan_check != 1 || n < 100 || n > 999){
        printf("Error! please enter a valid number.\n");
        return 1;
    }

    original = n;

    while (original != 0){
        remainder = original % 10;
        result += remainder * remainder * remainder;
        original /= 10;
    }
    if (result == n){
        printf("%d is an armstrong number.\n", n);
    }
    else{
        printf("%d is not an armstrong number.\n", n);
    }
    return 0;
}