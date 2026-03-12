#include <stdio.h>
#include <stdlib.h>
#include "customer.h"


int main()
{
    int choice;
	
	
	
    do
    {
		//system("cls"); 
        printf("\n==============================");
        printf("\n        BILLING SYSTEM");
        printf("\n==============================");
        printf("\n1. Customer");
        printf("\n2. Invoice");
        printf("\n3. Reports");
        printf("\n4. Exit");
        printf("\n------------------------------");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
		customer_menu();
            break;

        case 2:
            //invoice();
			printf("\n1. invoice ");
            break;

        case 3:
            //reports();
			printf("\n1. reports");
            break;
        case 4:
			exit(0);
        default:
            printf("\nInvalid choice! Please try again.\n");
        }
    }while(choice!=4);

    return 0;
}