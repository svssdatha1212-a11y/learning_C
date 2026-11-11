//To calculate the sum of 1 to n numbers using for loop.
#include <stdio.h>

int main(){
    int n, i;
    int sum = 0;
    int scan_check;

    printf("Enter a positive integer: ");
    scan_check = scanf("%d", &n);

    if(scan_check != 1 || n <= 0){
        printf("Error! please enter a valid positive number.\n");
        return 1;
    }

    for(i = 1; i <= n; i++){
        sum += i;
    }

    printf("The sum of numbers from 1 to %d is : %d\n", n , sum);
    return 0;
}