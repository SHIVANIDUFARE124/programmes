#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("enter the two number:");
	scanf("%d%d",&a,&b);
	printf("before swapping a=%d is b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping a=%d is b=%d",a,b);
	return 0;
}
