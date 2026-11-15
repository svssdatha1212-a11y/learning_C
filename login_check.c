// To login with your ID and age.
#include <stdio.h>

int main(){
    int age, ID;
    int scan_check;

    printf("Enter your age: ");
    scan_check = scanf("%d", &age);

    if(scan_check != 1 || age < 0){
        printf("Please enter a valid number.\n");
        return 1;
    }

    if(age >= 18){
        printf("Do you have an ID (1 = yes, 0 = no): ");
        scan_check = scanf("%d", &ID);

        if(scan_check != 1){
            printf("Invalid input for ID.\n");
            return 1;
        }

        if(ID == 1){
            printf("Access granted.\n");
        }
        else if(ID == 0){
            printf("Access denied.\n");
        }
        else{
            printf("You must enter either 1 or 0.\n");
        }
    }
    else{
        printf("Your age must be 18 or more to login.\n");
    }
    return 0;
}