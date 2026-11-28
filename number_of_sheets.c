//To print the number of sheets of paper needed for N pages(printing 2 pages per sheet)
#include <stdio.h>

int main(){
    int n, sheets;
    int scan_check;
    
    //Read the positive integer representing the number off pages
    printf("Enter the number of pages: ");
    scan_check = scanf("%d", &n);

    if(scan_check != 1 || n < 0){
        printf("Invalid input.\n");
        return 1;
    }

    //Calculate minimum sheets of paper needed(2 pages per sheet)
    sheets = (n + 1)/ 2;

    printf("%d\n", sheets);

    return 0;
}