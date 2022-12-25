#include<stdio.h>
int main()
{
int x;
printf("enter the number");
scanf("%d",&x);
dtob(x);
}
void dtob(int n)
{
if(n>0)
{
printf("%d",n%2);
dtob(n/2);
}
}
