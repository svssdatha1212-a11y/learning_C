//Keep looping while a number is positive
#include <stdio.h>

int main(){
    int number;
    int scan_check;

    printf("Enter a positive number: ");
    scan_check = scanf("%d", &number);

    if(scan_check != 1 || number <= 0){
        printf("Invalid number.Type a positive integer.\n");
        return 1;
    }

    while (number > 0){
        printf("%d\n", number);
        number--; //changes the value.
    }
    return 0;
}