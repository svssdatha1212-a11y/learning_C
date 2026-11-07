//To find the grade for given marks
#include <stdio.h>

int main(){
    int score;
    int scan_check;

    printf("enter the student's score(0 - 100): ");
    scan_check = scanf("%d", &score);

    //check for valid input and valid score range.
    if (scan_check != 1 || score <0 || score > 100){
        printf("Error! please enter a valid number(0 - 100).\n");
        return 1;

    //Grade evaluating using an else if chain.
    }
    else if(score >= 90){
        printf("Grade: A\n");
    }
    else if(score >= 80){
        printf("Grade: B\n");
    }
    else if(score >= 70){
        printf("Grade: C\n");
    }
    else if(score >= 60){
        printf("Grade: D\n");
    }
    else if(score >= 40){
        printf("Grade: E\n");
    }
    else{
        printf("Grade: F,you are fail.\n");
    }
    return 0;
}