/*# Break
If U Think Possible,Nothing is Impossible. Let's BREAK Everything..!!
*/
/* Program to find the Character @ given position in a sentence*/

#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j=1,k=0,d;
	char a[50];
	gets(a);
	printf("%d",strlen(a));
	scanf("%d%d",&n,&d);

		for(i=0;i<strlen(a);i++)
		{
			if(a[i]==' ')
			{
				j++;
				k=0;
			}
			else
			k++;
			if(j==n&&k==d)
			printf("%c\n",a[i]);
		}	
		
	return 0;
}

	
