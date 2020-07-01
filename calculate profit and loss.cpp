#include<iostream>
using namespace std;
int main()
{
	float sp,cp,profit,loss;
	cout<<"enter cost price\n";
	cin>>cp;
	cout<<"enter selling price\n";
	cin>>sp;
	if(sp>cp)
	{
		profit=sp-cp;
		cout<<"profit of"<<profit<<"rupee";
	}
	else
	{
		loss=cp-sp;
		cout<<"loss of"<<loss<<"rupee";
	}
}
