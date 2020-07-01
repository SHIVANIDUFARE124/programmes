#include<iostream>
using namespace std;
int main()
{
	float num1,num2;
	int choice;
	while(1)
	{
		cout<<"enter two numbers";
		cin>>num1>>num2;
		cout<<"\n1.add,2.subtract,3.multiply,4.divide,0.exit\n";
		cin>>choice;
			switch(choice)
			{
				case 0:
					exit(0);
					case 1:
						cout<<num1+num2;
						break;
						case 2:
							cout<<num1-num2;
							break;
							case 3:
								cout<<num1*num2;
								break;
								case 4:
									cout<<num1/num2;
									break;
									default:
										cout<<"wrong choice";
								
			}
		}
}
