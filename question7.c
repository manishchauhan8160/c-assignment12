#include<stdio.h>
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
printsquare(n);
}
void printsquare(int x)
{
if(x>1)
printsquare(x-1);
printf("%d",x*x);
}
