#include<stdio.h>
#include<conio.h>
void main()
{
int n,count=0;
scanf("%d",&n);
while(n>0)
{
n=n/10;
count=count+1;
}
printf("%d",count);
}
