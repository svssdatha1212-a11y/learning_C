//To check the given triangle is isosceles or not.
#include <stdio.h>

int main(){
	int x,y,z;
    int scan_check;
	printf("enter the values of x,y,z(using spaces): ");
	scan_check = scanf(" %d %d %d", &x,&y,&z);
	
    if(scan_check != 3 || x <= 0 || y <= 0 || z <= 0 || x + y <= z || y + z <= x || x + z <= y){
        printf("Error! please enter valid input numbers.\n");
        return 1;
    }
	else if (x == y || y == z || z == x){
		printf("it is a isosceles triangle.\n");
	}
	else{
		printf("it is not an isosceles triangle.\n");
	}
	return 0;
}