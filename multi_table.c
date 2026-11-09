//To generate a multiplication table of the given number.
#include <stdio.h>

int main(){
    int num,i,product;
    int scan_check;

    printf("Enter a number: ");
    scan_check = scanf("%d", &num);

    if(scan_check != 1){
        printf("Error! please enter a valid number.\n");
        return 1;
    }

    printf("\n---Multiplication table of %d---\n", num);

    for (i =1; i <= 10; i++){
        product = num*i;
        printf("%d * %d = %d\n", num, i, product);
    }
    return 0;
}