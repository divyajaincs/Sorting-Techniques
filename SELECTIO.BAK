#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,m,temp,a[40],min,pos;
printf("enter no of ele. you want to insert");
scanf("%d",&m);
printf("enter array ele.\n");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<m;i++)
{
pos=i;
for(j=i+1;j<m;j++)
{
if(a[pos]>a[j])
{
pos=j;
temp=a[i];
a[i]=a[pos];
a[pos]=temp;
}
}
/*if(pos!=i)
{
temp=a[i];
a[i]=a[pos];
a[pos]=temp;
} */
}
printf("shorted list is:");
for(i=0;i<m;i++)
{
printf("%d\n",a[i]);
}
 getch();
}