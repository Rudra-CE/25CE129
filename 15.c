#include<stdio.h>
int main()
{
    int sec;
    printf("enter the number in seconds for countdown :");
    scanf("%d",&sec);
    if(sec>0)
    {
        while(sec>0)
        {

        printf("countdown: %d\n",sec);
        sleep(1);
        sec--;
        }




    printf("countdown completed");
    }
else
{


    printf("invalid number");
}
return 0;
}























