#include<stdio.h>
int main()
{

    float amount,discount,tamount,famount;

    printf("enter your amount:");
    scanf("%f",&amount);

    if(amount<1000)
    {
        printf("no discount is applied\n");
    }
    else if(amount>=1000 && amount<=5000)
    {
        printf("you are eligible for 10 %% discount\n");
        discount=(amount*0.1);
        printf("your discount is :%f\n",discount);
        famount=(amount-discount);
        printf("your final amount is :%f\n",famount);


    }

    else
    {
        printf("you are eligible for 20 %% discount\n");
        discount=(amount*0.2);
        printf("your discount is :%f\n",discount);
        famount=(amount-discount);
        printf("your final amount is :%f\n",famount);

    }


printf("Name : Vaghasiya Rudra Hiteshbhai\n");
    printf("Id   : 25CE129\n");
    printf("Batch: C-2\n");

    return 0;
}


