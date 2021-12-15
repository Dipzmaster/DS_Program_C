#include<stdio.h>
void main()
{
	int i=0,x;
	char *str=(char*)malloc(sizeof(char));
	printf("\n enter string \n");
	gets(str);
	x=strlen(str);
	printf("%d",x);
	while(str[i]!='\0')
	{
		if(str[i]=='\t')
		printf("\b");
		printf("%c\t",str[i]);
		++i;
	}
	
}
