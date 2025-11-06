#include<stdio.h>

int main()
{
    int n,i,j,*p;
 printf("enter the number of item:");
    scanf("%d",&n);
    if(n==0)
    {
        printf("invalid item");
        return 0;
    }

    float item[n];
    for(i=0;i<n;i++)
    {
        printf("enter the price of %d day :",i+1);
        scanf("%f",&item[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("the price of %d day is %f\n",i+1,item[i]);
    }
     for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(item[i]>item[j])
            {
                float temp = item[i];
                item[i] = item[j];
               item[j] = temp;
            }
        }
    }

printf("---------------your price as ascendeing order---------------\n");
printf("the price of item as ascendeing order is:");

for(i=0;i<n;i++)
{
          printf("%f\t",item[i]);

}
printf("\n");2
printf("NAME:VAGHASIYA RUDRA HITESHBHAI\n");
printf("ID : 25CE129");
 return 0;

}




