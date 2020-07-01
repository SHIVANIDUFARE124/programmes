#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void printRandoms(int lower,int upper,int count)
{
	int i;
	for(i=0;i < count;i++)
	{
		int num=(rand()%
		(upper-lower+1))+lower;
		printf("%d",num);
	}
}
int main()
{
	int lower=5,upper=7,cout=1;
	srand(time(0));
	printRandoms(lower,upper,cout);
	return 0;
}
