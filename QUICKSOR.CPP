#include<iostream.h>
#include<conio.h>
void quicksort(int a[10],int p,int r);
int partition(int a[10],int p,int r);
void main()
{
clrscr();
int a[10],i,p,q,r;
p=0;
cout<<"enter no of ele in arrray" ;
cin>>r;
for(i=0;i<r;i++)
{
cin>>a[i];
}
quicksort(a,p,r);
for(i=0;i<r;i++)
{
cout<<a[i]<<"\t";
}
getch();
}
void quicksort(int a[10],int p,int r)
{
int q;
if(p<r)
{
q=partition(a,p,r);
quicksort(a,p,q-1);
quicksort(a,q+1,r);
}
}
int partition(int a[10],int p,int r)
{
 int x,j,i,temp;
 x=a[r];
 i=p-1;
 for(j=p;j<r;j++)
 {
 if(a[j]<=x)
 {
 i=i+1;
 temp=a[j];
 a[j]=a[i];
 a[i]=temp;
 }
 }
 temp=a[r];
 a[r]=a[i+1];
 a[i+1]=temp;
 return i+1;
 }