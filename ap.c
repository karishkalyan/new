#include<stdio.h>
voidmain()
{
int n,a,d,value,sum=0,i;
printf("\n enter the no of terms:");
scanf("%d",&n);
printf("\n enter the frst term anddifference:");
scanf("%d,%d",&a,&d);
value=a;
printf("\n the AP series is....");
value=a;
for(i=0;i<=terms;i++)
{
printf("%d",value);
sum=sum+value;
value=value+difference;
}
printf("\n the AP of %d terms is %d",terms,value);
getch();
} 
