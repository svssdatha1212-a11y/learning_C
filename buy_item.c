//TO know whether we can purchase the item or not.
#include <stdio.h>

int main(){
	int money = 1000;
	int cost, needed;
    int scan_check;
    
	printf("enter the cost of the item: ");
	scan_check = scanf("%d", &cost);

    if(scan_check != 1 || cost < 0){
        printf("Error! please enter a valid number.\n");
        return 1;
    }

	if (cost <= money){
		printf("you can buy this item!\n");
	}
	else {
	    needed = cost - money;
		printf("you can't buy this item.you need %d more rupees to buy this item.\n",needed);
	}
	return 0;
}