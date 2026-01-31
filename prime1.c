#include <stdio.h>
int main ()
{ 
int n,i,count;
printf("enter a number:\n");
scanf("%d",&n);
count=0;
for(i=1;i<=n;i++)
{
if(n%i==0)
{
count++;
}
}

if(count==2)
{
printf("prime no\n");
}
else
{
printf("not prime\n");
}
}

