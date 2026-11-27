//To print the numbers (form2) in the form of the triangle.
#include <stdio.h>

int main(){
    int i,j,n;
    int scan_check;

    printf("Enter the value of n: ");
    scan_check = scanf("%d", &n);

    if(scan_check != 1 || n <= 0){
        printf("Invalid input.\n");
        return 1;
    }

    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}