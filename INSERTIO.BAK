#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int i,j,m,temp,a[40];
   printf("enter no of ele. you want to insert");
    scanf("%d",&m);
    printf("enter array ele.\n");
      for(i=0;i<m;i++)
     {
       scanf("%d",&a[i]);
     }
    for(i=1;i<m;i++)
 {
    for(j=i;j>0;j--)
  {
  if(a[j]<a[j-1])
  {
    temp=a[j];
    a[j]=a[j-1];
    a[j-1]=temp;
  }
 }
}
   printf("shorted list is:");
  for(i=0;i<m;i++)
  {
   printf("%d\n",a[i]);
  }
getch();
}