#include<stdio.h>
#include<stdlib.h>
int main(){

int n=200,new;


int *str=(char*)calloc(n,n*sizeof(char));

printf("Enter the summery:");
fgets(str,200,stdin);
printf("Enter the number if you want to resize : ");
scanf("%d",&new);
if(new!=0 && new>n){
    str=realloc(str,new);
}
puts(str);
free(str);
    printf("Name : Vaghasiya Rudra Hiteshbhai\n");
    printf("Id   : 25CE129\n");
    printf("Batch: C-2\n");
return 0;




}
