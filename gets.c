/*# Break
If U Think Possible,Nothing is Impossible. Let's BREAK Everything..!!
*/
/* Program for getting the sentence as a input,without using gets() */
#include<stdio.h>
#include<string.h>
int main()
{
	int i=-1,j=0,g,k,l=0,m=0;
	char a[100],b[10][10];
	do
	{	
	  i++;
	  scanf("%c",&a[i]);
	
	}while(a[i]!='\n');
	a[i]=0;
	printf("%s\n",a);
	return 0;
}
