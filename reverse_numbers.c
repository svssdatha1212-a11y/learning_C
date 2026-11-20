//To reverse the digits of a given integer.
#include <stdio.h>

int main(){
    int n, remainder, original, reversed = 0;
    int scan_check;

    printf("Enter the number: ");
    scan_check = scanf("%d", &n);

    if (scan_check != 1 || n < 0){
        printf("Error! please enter a valid number.\n");
        return 1;
    }

    original = n;

    while (original != 0){
        remainder = original % 10;
        reversed = reversed * 10 + remainder;
        original /= 10;  ///shrinks original down to zero.
    }

    printf("Reversed number of %d = %d", n, reversed);

    return 0;
}