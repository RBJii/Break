/*To reverse a string from nth place :*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[200],b[20],temp;
	int n,len,i,j;
	scanf("%s",a);
	scanf("%d",&n);
	len=strlen(a);
	for(i=n-1,j=len-1;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	printf("%s\n",a);
	return 0;
}
