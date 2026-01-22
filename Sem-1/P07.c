#include<stdio.h>
int main()
{
    int age ;
    printf("enter your age:");
    scanf("%d",&age);
    if(age<=12)
    {


        printf("you are eligible for free entry\n");
        printf("enjoy....");
    }
    else if(age>=13 && age<=17)
    {

        printf("your entry ticket is 70 rs.");
    }
    else if(age>=18 && age<=60)
    {


        printf("your entry ticket is 150 rs.");
    }
    else if(age>=61)
    {

        printf("your entry ticket is 140 rs.");
    }

    printf("Name : Vaghasiya Rudra Hiteshbhai\n");
    printf("Id   : 25CE129\n");
    printf("Batch: C-2\n");


}

