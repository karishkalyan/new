#include<stdio.h>
void main()
{
int digit,sum=0,num,result;
printf("\n enter the num:");
scanf("%d",&num);
result=num;
while(num!=0)
{
digit=num%10;
sum=sum+digit*digit*digit;
num=num/10;
}
if(result==sum)
{
printf("\nyes");
else
printf("\n no");
}
getch();
}
