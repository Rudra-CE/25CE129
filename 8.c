#include<stdio.h>
int main()
{
    int age;

    printf("enter your age :");
    scanf("%d", &age);

    if(age>0)
    {
        printf("you are eligible to open your savings account\n");

        if(age<=18)
        {
            printf("you are not eligible to open you savings account.");



            if(age>=60)
            {
                printf("you are not eligible to open you savings account.");


            }




        }
         else
                printf("you are eligible to open your Regular Savings.");








    }
    else
    {
        printf("invalid age");
    }

    return 0;
}

