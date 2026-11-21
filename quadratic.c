//To check whether the given quadratic equation has real or equal or distinct roots.
#include <stdio.h>

int main()
{
	int a, b, c;
	float discriminant;
	int scan_check;

	printf("Enter the values of a, b, c(using spaces): ");
	scan_check = scanf("%d %d %d", &a, &b, &c);
	
	if(scan_check != 3 || a == 0){
		printf("Error! please enter a valid input.\n");
		return 1;
	}

	discriminant = b * b - 4 * a * c;
	
	if(discriminant >= 0){
		if(discriminant == 0){
			printf("The roots are equal.\n");
		}
		else{
			printf("The roots are distinct.\n");
		}
	}
	else{
		printf("The roots are imaginary.\n");
	}
	return 0;
}