#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,m;
	cout<<"enter the number";
	cin>>n;
	while(n>0)
	{
		m=n%10;
		sum=sum+m;
		n=n/10;
	}
	cout<<"the sum of digit"<<sum<<m;
	return 0;
}
