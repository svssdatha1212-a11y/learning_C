//To check a triangle is valid based on its three angles.
#include <stdio.h>

int main(){
    float angle1,angle2,angle3,sum;
    int scan_check;

    printf("Enter three angles(using spaces): ");
    scan_check = scanf("%f %f %f", &angle1, &angle2, &angle3);

    if(scan_check != 3){
        printf("Error! please enter valid numbers.\n");
        return 1;
    }
    //In triangle sum of interior angles is 180.
    sum = angle1 + angle2 + angle3;

    if(angle1 > 0 && angle2 > 0 && angle3 > 0 && (sum == 180)){
        printf("The triangle is valid.\n");
    }
    else{
        printf("The triangle is invalid.\n");
    }
    return 0;
}