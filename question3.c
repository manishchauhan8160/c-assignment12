#include<stdio.h>
void printodd(int);
int main()
{
int x;
printf("enter the number");
scanf("%d",&x);
printodd(x);
return 0;
}
void printodd(int n)
{
if(n>1)
printn(n-1);
printf("%d",2*n-1);
}
