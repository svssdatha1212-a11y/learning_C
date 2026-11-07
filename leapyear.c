//To find the leap year
#include <stdio.h>

int main(){
    int year;
    int scan_check;

    printf("Enter a year: ");
    scan_check = scanf("%d", &year);

    if(scan_check != 1){
        printf("Error! please enter a valid year.\n");
        return 1;
    }
    else if((year %4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        printf("%d is a leap year.\n",year);
    }
    else{
        printf("%d is not a leap year.\n",year);
    }
    return 0;
}