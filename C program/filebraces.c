#include<stdio.h>
int main()
{
	FILE *fp;
	int count1=0,count2=0;
	char ch;
	fp=fopen("D://file//braces.txt","r");
	if(fp==NULL)
	{
		printf("file not found\n");
	}
	while(1)
	{
	ch=fgetc(fp);
	if(ch==EOF)
	break;
	else if(ch=='(')
	count1++;
	else if(ch==')')
	count2++;
	}	
	if(count1==count2)
	{
		printf("braces are complete");
	}
	else
	{
		printf("\n bracses not match");
	}
}
