#include<stdio.h>
#include<conio.h>
void main()
{
	int a[6]={2,3,5,9,10,15};
	int b[6]={11,12,16,17,49,53};
	int c[12];
	int na=0,nb=0,ptr=0,r=6,s=6;

	while( na<=r && nb<=s )
	{
	if( a[na]< b[nb] )
	{
		c[ptr]=a[na];
		ptr=ptr+1;
		na=na+1;
		}
	else
	{
		c[ptr]=b[nb];
		ptr=ptr+1;
		nb=nb+1;
		}
	}

	    if( na>r )
	    {
		for( int k=0;k<s-nb;k++ )
		{
			c[ptr]=b[nb+k];
			}
			}
	    else
	    {
		for(int k=0;k<r-na;k++ )
		{
			c[ptr+k]=a[na+k];
			}
			}
	       printf("\tTHE RESULT IS\n\n\n\n." );
	       for( int i=0;i<12;i++ )
	       {
			printf(" %d  ",c[i] );
			}
			getch();
			}