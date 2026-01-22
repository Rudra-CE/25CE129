#include<stdio.h>
void main()

{
    int i,n,cp=0,cn=0,co=0,ce=0;
    int arry[4];
    for(i=0; i<5; i++)
    {


        printf("enter integer arry[%d] :",i);
        scanf("%d",&arry[i]);

        if(arry[i]<0)
        {
            cn++;
        }
        else
        {


            cp++;
        }
        if(arry[i]%2==0)
        {


            ce++;
        }
        else
        {


            co++;
        }


    }
    printf("total of negative number : %d\n",cn);
    printf("total of positive number : %d\n",cp);
    printf("total of odd number : %d\n",co);
    printf("total of even number : %d\n",ce);
    printf("Name : Vaghasiya Rudra Hiteshbhai\n");
    printf("Id   : 25CE129\n");
    printf("Batch: C-2\n");
}

