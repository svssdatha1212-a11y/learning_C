//To find the area of the triangle
#include <stdio.h>

int main(){
    float base,height,area;
    int scan_check;

    printf("Enter the values of base and height of the triangle: ");
    scan_check = scanf("%f %f", &base, &height);

    if(scan_check != 2 || base < 0 || height < 0){
        printf("Error!please enter the positive numbers of base and height.\n");
        return 1;
    }
    else{
        area = 0.5 * base * height;
        printf("The area of the triangle is %.2f\n",area);
    }
    return 0;
}