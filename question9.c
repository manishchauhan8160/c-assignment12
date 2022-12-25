#include<stdio.h>
int main()
{
int x;
printf("enter the number");
scanf("%d",&x);
dto(x);
}
void dto(int n)
{
if(n>0)
{
dto(n/8);
printf("%d",n%8);
}
}
