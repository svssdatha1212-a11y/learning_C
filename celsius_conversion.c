//Celsius to Fahrenheit conversion
#include <stdio.h>

int main(){
    float celsius,fahrenheit;
    int scan_check;

    printf("Enter the temperature in celsius: ");
    scan_check = scanf("%f", &celsius);

    if(scan_check !=1){
        printf("Error,please enter a valid number\n");
    }
    else{
        fahrenheit = (celsius*9/5) + 32;
        printf("%.2f in celsius is equal to %.2f in fahrehiet\n",celsius,fahrenheit);
    }
    return 0;
}