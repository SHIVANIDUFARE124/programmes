#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,D,y,y1,x1,x2;
	cout<<"enter the three number";
	cin>>a>>b>>c;
	y=pow(b,2);
	D=y-4*a*c;
	y1=pow(D,0.2);
	x1=(-b+y1)/2*a;
	x2=(-b-y1)/2*a;
	cout<<"x1="<<x1<<endl;
	cout<<"x2="<<x2<<endl;
	return 0;
}
