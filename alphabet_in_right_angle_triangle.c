//To print alphabets in right angle triangle.
#include <stdio.h>

int main(){
    int i,j,n;
    int scan_check;

    printf("Enter the value of n(65-90): ");
    scan_check = scanf("%d", &n);

    if(scan_check != 1 || n < 65 || n > 90){
        printf("Error! please enter a valid number.\n");
        return 1;
    }

    for(i = 65; i <= n; i++){
        for(j = 65; j <= i; j++){
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}