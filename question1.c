#include<stdio.h>
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
printn(n);
}
void printn(int n)
{
if(n>1)
printn(n-1);
printf("%d",n);
}
