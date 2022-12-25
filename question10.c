#include<stdio.h>
int main()
{
int x;
printf("enter the number");
scanf("%d",&x);
reverse(x);
}
void reverse(int n)
{
if(n>0)
{
printf("%d",n%10);
reverse(n/10);
}
}
