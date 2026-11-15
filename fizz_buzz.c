// Program: FizzBuzz using for loop and if-else-if ladder
/*Aim: To print numbers from 1 to 20, replacing multiples of 3 with Fizz,
multiples of 5 with Buzz, and multiples of both with FizzBuzz */
#include <stdio.h>

int main(){
    int i;

    for(i = 1; i <= 20; i++){
        if(i % 3 == 0 && i % 5 == 0 ){
            printf("FizzBuzz\n");
        }
        else if(i % 3 == 0){
            printf("Fizz\n");
        }
        else if(i % 5 == 0){
            printf("Buzz\n");
        }
        else{
            printf("%d\n", i);
        }
    }
    return 0;
}