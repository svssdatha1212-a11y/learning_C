//To print the numbers from 1 to n using while loop
#include <stdio.h>

int main(){
    int n;
    int i = 1; // Intialization outside the loop
    int scan_check;

    printf("Enter the limit (n): ");
    scan_check = scanf("%d", &n);

    if(scan_check != 1 || n <= 0){
        printf("Error! please give a valid positive number.\n");
        return 1;
    }
    printf("COunting from 1 to %d: \n", n);

    //while loop excution
    while (i <= n){
        printf("%d ", i);
        i ++; //increment to prevent an infinite loop.
    }
    printf("\n");

    return 0;
}