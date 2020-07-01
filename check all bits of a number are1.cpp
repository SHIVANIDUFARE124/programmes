#include<stdio.h>
#include<conio.h>
int main()
{
	int num,flag=1,temp;
	printf("enter number to know whether all bits of number are one\n");
	scanf("%d",&num);
	temp=num;
	while(num>1)
	{
		if(num%2==0)
		{
			flag=0;
			break;
		}
		else
		{
			num/=2;
		}
	}
	if(flag==1)
	printf("%d have all bits as 1\n",temp);
	else
	printf("%d doesn't have all bits as 1\n",temp);
}
