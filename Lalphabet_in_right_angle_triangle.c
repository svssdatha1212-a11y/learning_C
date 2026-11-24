//To print lower case alphabets in right angle triangle.
#include <stdio.h>

int main(){
    int i,j,n;
    int scan_check;

    printf("Enter the value of n(97-122): ");
    scan_check = scanf("%d", &n);

    if(scan_check != 1 || n < 97 || n > 122){
        printf("Error! please enter a valid number.\n");
        return 1;
    }

    for(i = 97; i <= n; i++){
        for(j = 97; j <= i; j++){
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}