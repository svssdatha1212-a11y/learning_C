//TO check whether the given number is a palindrome or not.
#include <stdio.h>

int main(){
    int n,reversed = 0,remainder,original;
    int scan_check;

    printf("Enter an integer: ");
    scan_check = scanf("%d", &n);

    if (scan_check != 1 || n < 0){
        printf("Error! please enter a positive integer.\n");
        return 1;
    }
    original = n;

    while(n != 0){
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if(original == reversed){
        printf("%d is a palindrome\n", original);
    }
    else{
        printf("%d is not a palindrome\n", original);
    }
    return 0;
}