#include<stdio.h>
int main()
{
int n,t,rev,d;
printf("enter the number\n");
scanf("%d",&n);
t=n;
rev=0;
while(n!=0)
{
d=n%10;
rev=(rev*10)+d;
n=n/10;
}
if(t==rev)
{
printf("it is palindrome\n");
}
else
{
printf("it is not palindrome\n");
}
}
