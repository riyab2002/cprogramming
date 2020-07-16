#include<stdio.h>
#include <stdlib.h>
Int fact(int)
Int main()
{
Int num;
Printf("enter number: ");
Scanf("%d",&num);
printf("%d!=%d",num,fact(num));
Return 0;
}
Int fact(int n)
{
If(n<2)
Return n;
Return n*fact (n-1);
}
