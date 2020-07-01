#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int main()
{
	int a[100],len,i,j,k;
	char rom[100];
	cout<<"enter the roman numeral:\n";
	cin>>rom;
	len=strlen(rom);
	for(i=0;i<len;i++)
	{
		if(rom[i]=='I')
		a[i]=1;
		else if(rom[i]=='v')
		a[i]=5;
		else if(rom[i]=='X')
		a[i]=10;
		else if(rom[i]=='L')
		a[i]=50;
		else if(rom[i]=='C')
		a[i]=100;
		else if(rom[i]=='D')
		a[i]=500;
		else if(rom[i]=='M')
		a[i]=1000;
		else
		{
			cout<<"\nInvalid value";
			exit (0);
		}
		
		
}
	k=a[len-1];
	for(i=len-1;i>0;i--)
	{
		if(a[i]>a[i-1])
		k=k-a[i-1];
		else if(a[i]==a[i-1]||a[i]<a[i-1])
		k=k+a[i-1];
	}
	cout<<"its decimal equivalent=";
	cout<<k;
	return 0;
}
