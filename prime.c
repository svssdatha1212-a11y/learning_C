//To check the given number is prime or not
#include <stdio.h>

int main(){
    int num,i,isPrime = 1;
    int scan_check;

    printf("Enter a positive integer: ");
    scan_check = scanf("%d", &num);

    if((scan_check != 1) || (num <= 0)){
        printf("Error! please enter a valid positive integer.\n");
        return 1;
    }
    
    if(num == 1){
        isPrime = 0;
    }else{
        //check for factors from 2 upto the square root of the number.
        for(i = 2;i*i <= num;i++){
            if (num % i == 0){
                isPrime = 0;//it's a factor so it is not a prime number.
                break;
            }
        }
    }

    if (isPrime){
        printf("%d is a prime number.\n",num);
    }
    else{
        printf("%d is not a prime number.\n",num);
    }

    return 0;
}