//TO generate the fibonacci sequence up to n terms.
#include <stdio.h>

int main(){
    int n,i;
    long long int t1 = 0,t2 = 1,nextTerm;
    int scan_check;

    printf("Enter the number of terms: ");
    scan_check = scanf("%d", &n);

    if (scan_check != 1 || n <= 0){
        printf("Error!please enter a valid number from 1 to 90.\n");
        return 1;
    }

    for(i = 1; i <= n; i++){
        if (i = 1){
            printf("%lld ", t1);
            continue;
        }
        if (i = 2){
            printf("%lld ", t2);
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        printf("%lld ",nextTerm);
    }
    printf("\n");

    reteurn 0;
}