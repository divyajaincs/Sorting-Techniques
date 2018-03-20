#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void Merge_sort(int a[],int l,int r);
void Merge(int a[],int l,int m,int r);
void main()
{
 clrscr();
 int a[10],n,i,l,r,p=0;
 cout<<"enter no of ele :" ;
 cin>>n;

for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
Merge_sort(a,p,n);
cout<<"sorted array is:";
for(i=0;i<n;i++)
{
cout<<a[i]<<endl;
}
getch();
}
void Merge_sort(int a[],int l,int r)
{
int mid;
if(l<r)
{
mid=(l+r)/2;
Merge_sort(a,l,mid);
Merge_sort(a,mid+1,r);
Merge(a,l,mid,r);
}
}
void Merge(int a[],int l,int m,int r)
{
int i=0,k,j=0,n1,n2;
n1=(m-l+1);
n2=(r-m);
int* a1= new int[n1];
int* a2=new int[n2];
for(i=0;i<=n1;i++)
{
 a1[i]=a[l+i];
 }
 for(j=0;j<=n2;j++)
 {
 a2[j]=a[m+1+j];
 }
 i=0,j=0,k=l;
 while(i<n1&&j<n2)
 {
 if(a1[i]<=a2[j])
 {
  a[k]=a1[i];
   i++;
  }
 else
 {
 a[k]=a2[j];
  j++;
  }
  k++;
 }
 while(i<n1)
 {
 a[k]=a1[i];
 i++;
 k++;
 }
  while(j<n2)
 {
 a[k]=a2[j];
 j++;
 k++;
 }
 delete a1,a2;

  }