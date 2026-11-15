// Program: Compare numbers from 1 to 100 with 50
/* Aim: To check whether each number from 1 to 100 is
   less than, equal to, or greater than 50 using for loop and if-else */
#include <stdio.h>

int main(){
    int i;

    for(i = 1; i <= 100; i++){
        if(i < 50){
            printf("%d is less than 50.\n", i);
        }

        else if(i == 50){
            printf("%d is equal to 50.\n", i);
        }

        else{
            printf("%d is greater than 50.\n", i);
        }
    }
    return 0;
}