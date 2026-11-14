//To check whether the user is eligible to vote or not.
#include <stdio.h>

int main(){
    int age;
    int scan_check;

    printf("Enter your age: ");
    scan_check = scanf("%d", age);

    if(scan_check != 1 || age < 0){
        printf("Error! please enter a valid number.\n");
        return 1;
    }

    else if(age >= 18){
        printf("You are eligible for vote.\n");
    }

    else {
        printf("You are not eligible for vote.\n");
    }
    return 0;
}