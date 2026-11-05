//To calculate area of circle
#include <stdio.h>
#define PI 3.14159

int main(){
    float radius,area;
    int scan_check;

    printf("enter the radius of the circle: ");
    scan_check = scanf("%f", &radius);
    
    if(scan_check != 1 || radius < 0){
        printf("Error!please enter a valid number.\n");
        return 1;
    }
    else{
        area = PI * radius * radius;
        printf("Area of the circle is %.2f\n",area);
    }
    return 0;
}