#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("/home/ttt/Desktop/sample.txt","w");
	fprintf(fp,"welcome to the spoken-tutorial\n");
	fprintf(fp,"this is an test example\n");
	fclose(fp);
	return 0;
}

