//To store and print numbers from 1 to n using array
#include <stdio.h>

int main(){
    int n,i;
    int arr[100];
    int scan_check;

    printf("Enter the value of n(1-100): ");
    scan_check = scanf("%d", &n);

    if(scan_check != 1 || n < 0 || n > 100){
        printf("Error! please enter a valid number.\n");
        return 1;
    }

    for(i = 0; i < n; i++){
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}