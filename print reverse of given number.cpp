#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,rev=0,x;
	printf("enter the number");
	scanf("%d",&n);
	i=n;
	while(n>0)
	{
		x=n%10;
		rev=rev*10+x;
		n=n/10;
	}
	printf("the reverse of %d is %d\n",i,rev);
}
