//To find the area of the rectangle
#include <stdio.h>

int main(){
    float length,width,area;
    int scan_check;

    printf("enter the value of length and width of the rectangle: ");
    scan_check = scanf("%F %F", &length, &width);

    if(scan_check != 2 || length < 0 || width < 0){
        printf("Error!please enter a valid positive numbers for length and width\n");
        return 1;
    }
    else{
        area = length * width;
        printf("The area of the rectangle is %.2f\n",area);
    }
    return 0;
}