//Fahrenheit to Celsius conversion
#include <stdio.h>

int main(){
    float fahrenheit,celsius;
    int scan_check;

    printf("enter the temperature in fahrenheit: ");
    scan_check = scanf("%f", &fahrenheit);
    
    if(scan_check != 1){
        printf("Error,please enter a valid number\n");
    }
    else {
        celsius = (fahrenheit - 32)*5/9;
        printf("%.2f in fahrenheit is equal to %.2f in celsius\n",fahrenheit,celsius);
    }
    return 0;
}