#include<stdio.h>
int main()
{
    char arry[5][10];
    int row,seat,rseat;
    int i,j;
    for(i=0; i<5; i++)
    {
        for(j=0; j<10; j++)
        {
            arry[i][j]='0';
        }
    }
    printf("enter the number of seat you want to reserved:");
    scanf("%d",&rseat);
    for(i=1;i<=rseat;i++)
    {
        printf("enter row and seat number for reserved seat :%d",i);
        scanf("%d %d",&row,&seat);
        if(row>0 && row<=5 && seat>0 && seat<=10)
        {
            arry[row-1][seat-1] ='x';
       }

       else
       {
           printf("invalid row and seat number.please enter a valid one\n");
           i--;
       }
    }
printf("seating chars : \n");


    for(i=0; i<5; i++)
    {

         printf("row %d :",i+1);
                for(j=0; j<10; j++)

        {
            printf("%c ",arry[i][j]);
        }
        printf("\n");
    }
    printf("Name : Vaghasiya Rudra Hiteshbhai\n");
    printf("Id   : 25CE129\n");
    printf("Batch: C-2\n");
return 0;
}






