#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *file;
	char c;
	file=fopen("shivani.txt","r");
	while(1)
	{
		if(file==NULL)
		{
			printf("File not Found\n");
			exit(0);
		}
		else
		{
			c=fgetc(file);
			if(c==EOF)
			{
				break;
			}
			printf("%c",c);
		}
	}
	fclose(file);
}
