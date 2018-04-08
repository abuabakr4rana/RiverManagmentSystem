#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#define true 1
void newname();
void list();
void del();
struct prs
{
char name[40];
int agnumb;
double height;
struct prs *ptrnext;
};
struct prs *ptrfirst,*ptrthis,*ptrnew,*ptrdel1,*ptrdel2;
void main()
{
clrscr();
char ch;
ptrfirst=(struct prs*)NULL;
while(true)
{
printf("\nType\n 'e' to enter new agent");
printf("\n 'l' to list all the agents");
printf("\n 'q' to quit");
printf("\n 'd' to delete any record\n");
ch=getche();
switch(ch)
{
case'e':
newname();
break;
case'l':
list();
break;
case'd':
del();
break;
case 'q' :
exit(0);
default:
puts("wrong");
}}
getch();
}
void newname()
{
char numstr[81];
ptrnew=(struct prs*)malloc(sizeof(struct prs));
if(ptrfirst==NULL)
ptrfirst=ptrthis=ptrnew;
else
{
ptrthis=ptrfirst;
while(ptrthis->ptrnext!=NULL)
ptrthis=ptrthis->ptrnext;
ptrthis->ptrnext=ptrnew;
ptrthis=ptrnew;
}
printf("\nEnter name");
gets(ptrthis->name);
printf("\nEnter number");
gets(numstr);
ptrthis->agnumb=atoi(numstr);
printf("\nEnter height\n");
gets(numstr);
ptrthis->height=atof(numstr);
ptrthis->ptrnext=(struct prs*)NULL;
}
void list()
{
int n=0;
if(ptrfirst==(struct prs *)NULL)
printf("\nEmpty list.");
else{
ptrthis=ptrfirst;
do
{ n++;
printf("\nStructure no.%d",n);
printf("\nName:%s\n",ptrthis->name);
printf("Number:%d",ptrthis->agnumb);
printf("\nHeight:%d",ptrthis->height);
ptrthis=ptrthis->ptrnext;
}
while(ptrthis!=(struct prs*)NULL);
} }
void del()
{
int n,b=0;
if(ptrfirst==(struct prs *)NULL)
printf("\nEmpty list.");
else
{
printf("\nEnter structure no. to delete");
scanf("%d",&n);
if(n==1)
{
ptrfirst=ptrfirst->ptrnext;

}
else
{
for(int a=1;a<n;a++)
{
  if(a==1)
  ptrdel1=ptrfirst;
  else
  ptrdel1=ptrdel1->ptrnext;
}
 for(a=1;a<=n+1;a++)
 {
 if(a==1)
{ ptrdel2=ptrfirst;
 b++;}
 else
 {
 if(ptrdel2->ptrnext!=NULL)
{ ptrdel2=ptrdel2->ptrnext;
 b++;}

 }}
if(ptrdel2->ptrnext==NULL&&b==n)
{ ptrthis=ptrdel1;
 ptrthis->ptrnext=NULL;}
else
 ptrdel1->ptrnext=ptrdel2;
 }

 printf("\nSTRUCTURE DELETED");
 }}