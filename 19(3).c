#include<stdio.h>
int main()
{
    int i,j,n,s;

    printf("enter number you want to make pattern(0to9):\n");
    scanf("%d",&n);
    for(i=n; i>=1; i--)
    {
        for(s=0; s<n-i; s++)
            printf(" ");
        for(j=i; j>=1; j--)
            printf("%d",j);
        for(j=2; j<=i; j++)
            printf("%d",j);
             printf("\n");
    }
    for(i=2; i<=n; i++)
 {
        for(s=0; s<n-i; s++)
            printf(" ");
        for(j=i; j>=1; j--)
            printf("%d",j);
        for(j=2; j<=i; j++)
            printf("%d",j);
              printf("\n");
    }


return 0;
}
