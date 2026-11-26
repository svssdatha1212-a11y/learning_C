//To print the * in the shape of reversed right angle triangle.
#include <stdio.h>

int main(){
	int i,j,n;
	int scan_check;
	printf("Enter the value of n: ");
	scan_check = scanf("%d", &n);
	
	if(scan_check != 1 || n < 0){
		printf("invalid input.\n");
		return 1;
	}
	
	for(i = n;i >= 1;i--){
		for(j = 1; j<= i; j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}