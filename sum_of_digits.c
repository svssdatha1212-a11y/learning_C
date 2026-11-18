//This program takes a non-negative integer and calculates the sum of all individual digits.
#include <stdio.h>

int main(){
    int n, original, remainder, sum = 0;
    int scan_check;

    printf("Enter a non-negative integer: ");
    scan_check = scanf("%d", &n);

    if(scan_check != 1 || n < 0){
        printf("Error! please enter a valid positive number.\n");
        return 1;
    }

    original = n;

    while(original != 0){
        remainder = original % 10;
        sum += remainder;
        original /= 10;
    }

    printf("Sum of the digits of %d = %d\n", n, sum);

    return 0;
}