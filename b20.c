#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i;
clrscr();
printf("Enter the multiplacation table\n");
scanf("%d",&a);
for(i=1;i<=10;i++)
{
b=a*i;
printf("%d * %d=%d\n",i,a,b);
}
getch();
}
