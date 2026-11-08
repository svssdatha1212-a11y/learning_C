//To check the three given side lengths can form a valid triangle
#include <stdio.h>

int main(){
    int side1,side2,side3;
    int scan_check;

    printf("Enter the three lengths of the triangle(using spaces): ");
    scan_check = scanf("%d %d %d", &side1, &side2, &side3);

    if(scan_check != 3 || side1 < 0 || side2 < 0 || side3 < 0){
        printf("Error! please enter valid positive integers.\n");
        return 1;
    }
    else if((side1 + side2 > side3) && (side2 + side3 > side1) && (side3 + side1 > side2)){
        printf("The given side lengths can form a valid triangle.\n");
    }
    else{
        printf("The given side lengths cannot form a valid triangle.\n");
    }
    return 0;
}