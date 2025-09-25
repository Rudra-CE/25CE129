#include<stdio.h>

int main()
{
    int i,j,k,p,q;
    printf("enter the size of vertically :");
    scanf("%d",&p);
      printf("enter the size of horizontally :");
    scanf("%d",&q);
    printf("multiplication table(%d X %d) :\n",p,q);

    for(i=1;i<=p;i++)
    {
        for(j=1;j<=q;j++)
        {
            k=i*j;
            printf("%3d  ",k);
        }
        printf("\n");
    }
}
