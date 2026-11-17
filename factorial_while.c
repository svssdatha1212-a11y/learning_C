//To find the factorial of a number from 0 to 20
#include <stdio.h>

int main(){
    int number;
    long long factorial = 1;
    int i = 1;
    int scan_check;

    printf("Enter a number from 0 to 20: ");
    scan_check = scanf("%d", &number);

    if (scan_check != 1 || number < 0 || number > 20) {
        printf("Please enter a whole number from 0 to 20.\n");
        return 1;
    }

    while (i <= number) {
        factorial *= i;
        i++;
    }

    printf("%d! = %llu\n", number, factorial);

    return 0;
}