//To print numbers from 1 to n using do while loop.
#include <stdio.h>

int main(){
    int n;
    int i = 1;
    int scan_check;

    printf("Enter the value of n: ");
    scan_check = scanf("%d", &n);

    if(scan_check != 1 || n <= 0){
        printf("Error! please enter a valid number.\n");
        return 1;
    }

    printf("Counting numbers from 1 to %d:\n", n);

    do{
        printf("%d ", i);
        i++;
    }while(i <= n);
    printf("\n");

    return 0;
}