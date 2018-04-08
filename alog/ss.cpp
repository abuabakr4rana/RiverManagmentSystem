#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int min(int*,int,int,int );
void main()
{
clrscr();
int a[]={77,33,44,11,88,22,66,55};
int k,n,loc,temp;
n=8;
for(k=0;k<=n-1;k++)
{
loc=min(a,k,n,loc);
temp=*(a+k);
*(a+k)=*(a+loc);
*(a+loc)=temp;

for(int d=0;d<8;d++)

printf("%d ",*(a+d));
printf("\n\n");
}
getch();
}
int min(int* a,int k,int n,int loc)
{
int *min;
min=&a[k];
loc=k;
for(int j=k+1;j<n;j++)
{
if(*min>a[j])
{
min=&a[j];
loc=j;
}}
return loc;
}
