#include<stdio.h>
int main()
{


 int choice;
 int wamount,tamount=5000;

 while(1)
 {


    printf("press 1 for withdraw amount :\n press 2 for exit :");
    scanf("%d",&choice);
switch(choice)
{



case 1:
    printf("enter amount:");
scanf("%d",&wamount);
    if(wamount<=tamount)
{


    tamount=tamount-wamount;
    printf("your avaliable balance is:%d",tamount);

}
else
{
    printf("you don't have sufficient amount");
}
break ;
case 2 :
    printf("you are exit");

    return 1;
break;
    default :
        printf("invalid choice");
        break;
}
 }
 }




























