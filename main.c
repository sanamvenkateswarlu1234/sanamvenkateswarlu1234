#include "def.h"
#include "login.h"
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
	login();
    int num,i;
    do{
    system("cls");
    printf("\n\n\n");
   printf("====================================== WELCOME TO TRAIN RESERVATION SYSTEM ======================================\n\n\n");
    printf("\t\t\t\t\t[1]=> View Bus List\n");
    printf("\n");
    printf("\t\t\t\t\t[2]=> Book Tickets\n");
    printf("\n");
    printf("\t\t\t\t\t[3]=> Cancel Booking\n");
    printf("\n");
    printf("\t\t\t\t\t[4]=> Bus Status Board\n");
    printf("\n");
    printf("\t\t\t\t\t[5]=> Exit\n\n");
    printf("===============================================================================================================\n\n");
    printf("\t\t\tEnter Your Choice:: ");
    scanf("%d",&num);
    switch(num)
    {
    case 1:
        train();
        break;
    case 2:
        booking();
        break;
    case 3:
        cancle();
        break;
    case 4:
        status();
        break;
    }
getch();
    }while(num != 5);
    system("CLS");
    printf("\t----------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\tThank You For Using This System\t\t\t\t\t\t\n");
    printf("\t----------------------------------------------------------------------------------------------------------\n");
    getch();
    return 0;
}
