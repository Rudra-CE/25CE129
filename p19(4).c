
#include<stdio.h>
int main()
{
    int i,j,n,s;

    printf("enter number you want to make pattern(0to9):\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(s=1; s<=n-i; s++)
            printf(" ");
        for(j=1; j<=i; j++)
            printf("%c",'A'+j-1);
        for(j=i-1; j>=1; j--)
            printf("%c",'A'+j-1);
             printf("\n");
    }
    for(i=n-1; i>=1; i--)
 {
        for(s=1; s<=n-i; s++)
            printf(" ");
        for(j=1; j<=i; j++)
            printf("%c",'A'+j-1);
        for(j=i-1; j>=1; j--)
            printf("%c",'A'+j-1);
              printf("\n");
    }

printf("Name : Vaghasiya Rudra Hiteshbhai\n");
    printf("Id   : 25CE129\n");
    printf("Batch: C-2\n");
return 0;
}

