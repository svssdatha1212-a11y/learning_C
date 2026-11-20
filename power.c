//To calculate the power of a number.
#include <stdio.h>

int main(){
    int base, exponent;
    long long result = 1;
    int scan_check;

    printf("Enter base value and non - negative exponent(using spaces): ");
    scan_check = scanf("%d %d", &base, &exponent);

    if(scan_check != 2 || exponent < 0){
        printf("Error! please enter valid integers.\n");
        return 1;
    }

    for(int i = 0; i < exponent; i++){
        result *= base;
    }

    printf("%d is raised to power of %d = %lld\n", base, exponent, result);

    return 0;
}