#include<stdio.h>
void main()
{
    int i,n,asum=0,esum=0,missing ;
    printf("enter your array size :");
    scanf("%d",&n);

    int arr[n-1];

    for(i=0; i<n-1; i++)
    {


        printf("the array[%d]= ",i);
        scanf("%d",&arr[i]);
        asum=asum+arr[i];
    }
    esum=n*(n+1)/2;

    missing=esum-asum;
    printf("missing value is :%d",missing);
printf("Name : Vaghasiya Rudra Hiteshbhai\n");
    printf("Id   : 25CE129\n");
    printf("Batch: C-2\n");
}





