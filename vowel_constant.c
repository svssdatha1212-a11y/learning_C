//To check the given letter is vowel or consonant.
#include <stdio.h>

int main(){
    char ch;
    int scan_check;

    printf("Enter an alphabet: ");
    scan_check = scanf(" %c", &ch);

    if((scan_check ! = 1) || !((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))){
        printf("Error! please enter a valid alphabet.\n");
        return 1;
    }

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'
    || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        printf("It is a vowel.\n");
    }
    
    else{
        printf("It is a consonant.\n");
    }

    return 0;
}