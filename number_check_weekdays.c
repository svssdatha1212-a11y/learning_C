//To check the day by giving the number of the day(1-7).
/*,monday=1,tuesday=2,wednesday=3,thursday=4,friday=5,saturday=6,sunday=7*/
#include <stdio.h>

int main(){
    int day;
    int scan_check;

    printf("Enter the number(range = 1 to 7): ");
    scan_check = scanf("%d", &day);

    if(scan_check != 1){
        printf("Invalid input.\n");
        return 1;
    }

    switch(day){
        case 1:
        printf("Monday\n");
        break;

        case 2:
        printf("Tuesday\n");
        break;

        case 3:
        printf("Wednesday\n");
        break;

        case 4:
        printf("Thursday\n");
        break;

        case 5:
        printf("Friday\n");
        break;

        case 6:
        printf("Saturday\n");
        break;

        case 7:
        printf("Sunday\n");
        break;
    
         default:
         printf("Invalid choice!\n");
    }
return 0;
}