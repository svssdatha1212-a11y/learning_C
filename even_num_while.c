//To print all even numbers upto n using a while loop.
#include <stdio.h>

int main(){
    int n;
    int i = 1;
    int scan_check;

    printf("enter the upper limit n: ");
    scan_check = scanf("%d", &n);

    if (scan_check != 1 || n <= 0){
        printf("Error! please enter a valid positive number.\n");
        return 1;
    }

    printf("---even numbers between 1 and %d---\n", n);

    while (i <= n){
        if(i % 2 == 0){
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");

    return 0;
}