//To calculate the factorial of the given number using for loop.
#include <stdio.h>

int main(){
    int n,i;
    long long int factorial = 1;
    int scan_check;

    printf("Enter a positive integer: ");
    scan_check = scanf("%d", &n);

    if(scan_check != 1 || n < 0){
        printf("Error! please enter a valid positive integer.\n");
        return 1;
    }
    //for loop to multiply numbers from 1 to n.
    for (i = 1;i <= n;i++){
        factorial *= i;
    }

    printf("The factorial of the given positive integer %d is : %lld\n", n, factorial);

    return 0;
}