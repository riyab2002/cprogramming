#include<stdio.h>
Void main()
{
Int first,second,*p,*q,sum;
Print("enter the numbers =");
scanf("%d%d",&first,&second);
p=&first;
q=&second;
sum=*p+*q;
printf("the sum of natural numbers are =%d",sum);
}
