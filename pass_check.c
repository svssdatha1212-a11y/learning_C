//To check the password is corrct or not
#include <stdio.h>

int main(){
    int correct_pin = 1342;
    int entered_pin,scan_check;

    printf("Enter the pin: ");
    scan_check = scanf("%d", &entered_pin);

    if(scan_check != 1){
        printf("Error! please enter a valid pin number.\n");
        return 1;
    }
    else if(entered_pin != correct_pin){
        printf("Incorrect! please enter the correct pin.\n");
    }
    else{
        printf("Unlocked!\n");
    }
    return 0;
}