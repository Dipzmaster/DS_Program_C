#include<stdio.h>
int main()
{
	FILE *fp,*fp1;
	
	char ch;
	fp=fopen("D://file/spaces.txt","r");
	if(fp==NULL)
	{
		printf("file not found\n");
	}
	fp1=fopen("D://file//space1.txt","w");
	
		ch=fgetc(fp);
		
		while(ch!=EOF)
		{
			if(ch==' ')
			{
				fputc(ch,fp1);
				while(ch==' ')
				{
					ch=fgetc(fp);
				}
				fputc(ch,fp1);
			}
			else
			{
				fputc(ch,fp1);
			}
		ch=fgetc(fp);	
		}

}
