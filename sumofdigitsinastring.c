#include<stdio.h>
Int main()
{ 
char str[100];
Int i,sum=0;
printf("Enter the string:\n");
gets(str);
for(i=0;str[i]!='\0';i++)
{
if((str[i]>='0')&&(str[i]<='9'))
{
sum += (str[i ] - '0');
}
}
printf("sum of all digits:\n%d",sum);
return 0;
}
