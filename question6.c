#include<stdio.h>
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
printeven(n);
}
void printeven(int x)
{
if(x>=1)
printf("%d",2*x);
printeven(x-1);
}
