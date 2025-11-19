#include<stdio.h>
int main()
{


 float w,h ,b;

 printf("enter your weight(in kg) :");
 scanf("%f",&w );

 printf("enter your height(in meter) :");
 scanf("%f",&h );

 if(w<=0)
 {
      printf("invalid weight \n");
  return 1;
 }


 if(h<=0)
 {
      printf("invalid height\n");
  return 1;
 }

 b=w/(h*h);
 printf("your bmi is :%.2f \n",b);


 if(b<18.5)
 {
      printf("you are in under weight");
 }
 else
     if(b>=18.5 && b<=24.9)
 {
      printf("you are in normal weight");

 }else
 if(b>=25 && b<=29.9)
     {
      printf("you are in over weight");

 }else
 if(b>=30)
 {
      printf("you are in obesity");

 }
 printf("Name : Vaghasiya Rudra Hiteshbhai\n");
    printf("Id   : 25CE129\n");
    printf("Batch: C-2\n");

}

