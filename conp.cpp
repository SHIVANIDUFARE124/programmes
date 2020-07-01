#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int binary,temp,i,inc=0,decimal=0;
	printf("enter the binary number to convert decimal number:");
	scanf("%d",&binary);
	temp=binary;
	while(temp!=0)
	{
		i=temp%10;
		decimal=decimal+(i*pow(2,inc));
		temp=temp/10;
		inc++;
	}
	printf("the decimal of given number of %d is %d",binary,dec);
}
