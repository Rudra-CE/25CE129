#include<stdio.h>
int main()
{
    int i,j,n;

    printf("enter number you want to make pattern:\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n*2-1; j++)
        {
            if (j==i || j==n*2-i)
                printf("%d",j);
            else if(i==1)
                printf("%d",j);
            else
                printf(" ");

        }
        printf("\n");
    }
    return 0;
}
