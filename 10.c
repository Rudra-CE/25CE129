#include<stdio.h>

int main()
{
    int choice;
    int total=0;

    printf("welcome to foodies restaurant (established in 2002)");
    printf("give your order form below menu\n");
    while(1)
    {


        printf("\nmenu:\n");
        printf("enter 1 for burger-150 rs.\n");
        printf("enter 2 for pizza-200 rs.\n");
        printf("enter 3 for pasta-120 rs.\n");
        printf("enter 4 for sandwich-100 rs.\n");
        printf("enter 5 for franch fries-80 rs.\n");
    printf("enter 0 for after finishing the ordering of items.\n");

    switch(choice)
    {


    case 1:
        total=total+150;
    printf("your order is burger \n you payment is : %d",total);
    break;
     case 2:
        total=total+200;
    printf("your order is pizza \n you payment is : %d",total);
    break;
     case 3:
        total=total+120;
    printf("your order is pasta \n you payment is : %d",total);
    break;
     case 4:
        total=total+100;
    printf("your order is sandwich \n you payment is : %d",total);
    break;
     case 5:
        total=total+80;
    printf("your order is burger \n you payment is : %d",total);
    break;
     case 0:
    printf("  your final payable amount is : %d");
    break;
    default :
    printf("invalid choice. plese enter valid choice");

    }

    return 0;
}
























}
