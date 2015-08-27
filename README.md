# Break
If U Think Possible,Nothing is Impossible. Let's BREAK Everything..!!

/*Problem : Insect War

Earth is now infested by Predators. These predators are of Insect species. These insects are trying to overcome human beings on earth. However since they are very small in size, they are failing to overpower humans. But now, one kind of insect is getting bigger in size in a very strange way. 

Initially there are 2 categories of insects. In first category each insect has size 'x' and second 'y'. 

Initially there are infinite numbers of insect of each category. 

An insect with size 's' can eat any other insect of size less than 's' in one minute. After eating, it's size will increase and it will mutate into an insect of another category of another size. E.g. If there is an insect of size 's' and it eats an insect of size 'w', where w < s. Then the new category insect will be of size s+w. 

Irrespective of its category, any bigger sized insect can eat at most 1 other insect of smaller size, in 1 minute. 

But there is one exception. Categories of insect with largest size can eat at most 2 insect in 1 minute. As noted previously, all others can eat only 1 insect in that minute. 

Refer example for more details. 

Humans are ready for the war. But they need just one help from you. They need to know the maximum size the insect can grow to, within t minutes. 

Input Format: 

First line contains total number of test cases, denoted by N 
Next N lines, contain a tuple <x, y, t> containing 3 values delimited by space, where

x denotes the size of each insect in first category.
y denotes the size of each insect in second category.
t denotes the time in minutes.

Output Format: 

For each test case print one integer which denotes the maximum size of the insect after t minutes. As this number can be very large, print its remainder after dividing it by 1000000007. 

Constraints:
1. 1<= x < y <= 10000000 (10 million)

2. 2*x <= y

3. 1<= t <= 1000000000000 (1 trillion)


Sample Input and Output

SNo.	Input	Output
1	
2
2 5 2
3 7 2

23
33


Explanation: 

Test Case 1: initially there are insects of size 2 and 5. 
After 1 minute, there will be insects of sizes : ( 2, 5, 7, 9 ) 
Initially, insects of size 5 are the largest.

If it eats insect of size '2' then it will become a new insect of size '7'.
If it eats two insects of size 2, then it will become a new insect of size 9 (5 + 2 + 2 = 9).
After 2 minutes, there will be insects of size: 
(2, 5, 7, 9, 11, 12, 13, 14, 16, 18, 19, 21, 23) 

So, after 2 minutes, the maximum size of insect is 23. 


Input Format: 

First line contains total number of test cases, denoted by N 
Next N lines, contain a tuple <x, y, t> containing 3 values delimited by space, where

x denotes the size of each insect in first category.
y denotes the size of each insect in second category.
t denotes the time in minutes.

Output Format: 

For each test case print one integer which denotes the maximum size of the insect after t minutes. As this number can be very large, print its remainder after dividing it by 1000000007. 

Constraints:
1. 1<= x < y <= 10000000 (10 million)

2. 2*x <= y

3. 1<= t <= 1000000000000 (1 trillion)


Sample Input and Output

SNo.	Input	Output
1	
2
2 5 2
3 7 2

23
33


Explanation: 

Test Case 1: initially there are insects of size 2 and 5. 
After 1 minute, there will be insects of sizes : ( 2, 5, 7, 9 ) 
Initially, insects of size 5 are the largest.

If it eats insect of size '2' then it will become a new insect of size '7'.
If it eats two insects of size 2, then it will become a new insect of size 9 (5 + 2 + 2 = 9).
After 2 minutes, there will be insects of size: 
(2, 5, 7, 9, 11, 12, 13, 14, 16, 18, 19, 21, 23) 

So, after 2 minutes, the maximum size of insect is 23. */


PROGRAM :

#include <stdio.h>
int main() {
	int n,k=0,ii,iii,temp,a2[50],a1[50],i,size,j,ok,d,c,l,po,count=0,count1=0,siz;
	char sp;
	scanf("%d",&n);
	for(iii=0;iii<n;iii++)
	{
	ii=0;
	scanf("%d%c%d%c%d",&a2[ii],&sp,&a2[ii++],&sp,&siz);
	if(a2[k]>a2[k+1])
	{
		temp=a2[k];
		a2[k]=a2[k+1];
		a2[k+1]=temp;	
	}
	ok=ii;
	count=ii+1;
	
	for(i=0;i<siz;i++)
	{
		po=ii;
		
		for(k=po;k>=count-ok-1;k--)
		{
			for(l=k;l>0;l--)
			{
				a2[++ii]=a2[k]+a2[k-l];
				
				
			}
			for(l=k;l>0;l--)
			{
				a2[++ii]=a2[k]+(2*(a2[k-l]));
				
				
			}
		}
		count=ii;
		ok=po;
}
	size=ii+1;
   
	for(i=0;i<size;i++)
	{
		for(d=0;d<count1;d++)
      {
         if(a2[i]==a1[d])
            break;
      }
      if(d==count1)
      {
         a1[count1] = a2[i];
         count1++;
      }
	}
	for(i=0;i<count1;i++)
	{
		for(j=i+1;j<count1;j++)
		{
			if(a1[i]>a1[j])
			{
				temp=a1[i];
				a1[i]=a1[j];
				a1[j]=temp;
			}
		}
	}
	printf("%d\n",a1[count1-1]);
	}
	
	return 0;
}






