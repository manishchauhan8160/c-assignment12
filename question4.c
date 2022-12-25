#include<stdio.h>
int main()
{
int x;
printf("enter the number");
scanf("%d",&x);
printodd(x);
}
void printodd(int n)
{
if(n>=1){
printf("%d",2*n-1);
printodd(n-1);
}
}
