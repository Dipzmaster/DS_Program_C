#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("D://file//raj1.txt","r");
	if(fp==NULL)
	{
		printf("\n cannot create file");
	}
	fseek(fp,-1,SEEK_END);
	ch=fgetc(fp);
	printf("%c",ch);
	fseek(fp,-1,SEEK_CUR);
	fseek(fp,-1,SEEK_CUR);
	ch=fgetc(fp);
	printf("%c",ch);
	fseek(fp,3,SEEK_SET);
	ch=fgetc(fp);
	printf("%c",ch);
	return;
}
