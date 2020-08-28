#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	printf("enter the first string");
	gets(str1);
	printf("enter the second string");
	gets(str2);
	if(strcmp(str1,str2)==0)
	printf("both string are equal");
	else
	printf("string are not equal");
	return 0;
}
