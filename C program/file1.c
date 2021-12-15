#include<stdio.h>
#include<stdlib.h>
int main()
{
	long int fsize,i=0;
	FILE *fp;
	char ch,*str;
	fp=fopen("D://file//raj.txt","r");
	if(fp==NULL)
	{
		fprintf(stderr,"Cannot open file");
	}
	fseek(fp,0,SEEK_END);
	fsize=ftell(fp);
	fseek(fp,0,SEEK_SET);
	str=(char*)malloc(sizeof(char));
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)	
		break;
		str[i+1]=ch;
	}
	str[i]='\0';
	printf("%s",str);
	fclose(fp);
	remove("D://file//raj.txt");
	str=strrev(str);
	
	fp=fopen("D://file//raj1.txt","w+");
	fputs(str,fp);
	fclose(fp);
	free(str);
	str=NULL;

}
