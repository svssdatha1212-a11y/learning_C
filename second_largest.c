//To find the second largest number among three integers.
#include <stdio.h>

int main(){
    int a, b, c, scan_check;

    printf("Enter three integers(using spaces): ");
    scan_check = scanf("%d %d %d", &a, &b, &c);

    if(scan_check != 3){
        printf("Error! please enter valid input.\n");
        return 1;
    }

    if ((a >= b && a <= c) || (a <= b && a >= c)){
        printf("The second largest number is %d\n", a);
    }

    else if((b >= a && b <= c) || (b <= a && b>= c)){
        printf("The second largest number is %d\n", b);
    }
    else{
        printf("The second largest number is %d\n", c);
    }

    return 0;
}