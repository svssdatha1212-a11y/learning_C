//To print the * in the shape of pyramid.
#include <stdio.h>

int main(){
    int i, j, space, n;
    int scan_check;

    printf("Enter the value of n: ");
    scan_check = scanf("%d", &n);

    if(scan_check != 1 || n <= 0){
        printf("Invalid input.\n");
        return 1;
    }

    for(i = 1; i <= n; i++){
        for(space = 1; space <= n - i; space++){
            printf("  ");
        }
        for(j = 1; j <= (2 * i - 1); j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}