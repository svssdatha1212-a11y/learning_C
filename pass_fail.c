//TO check whether a student is pass or fail.
#include <stdio.h>

int main(){
    int marks;
    int scan_check;

    printf("Enter your marks: ");
    scan_check = scanf("%d", &marks);

    if(scan_check != 1 || marks < 0 || marks > 100){
        printf("Error! please enter valid marks.\n");
        return 1;
    }
    else if(marks >= 40){
        printf("Congratulations! you are passed.\n");
    }
    else{
        printf("You are failed.Better luck next time.\n");
    }
    return 0;
}