//To find the sum of elements in an array.
#include <stdio.h>

int main(){
    int n, sum = 0;
    int arr[50];
    int scan_check;

    printf("Enter the number of elements(1 - 50): ");
    scan_check = scanf("%d", &n);

    if(scan_check != 1 || n <= 0 || n > 50){
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter %d numbers: \n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("The sum of the array elements is %d\n", sum);

    return 0;
}