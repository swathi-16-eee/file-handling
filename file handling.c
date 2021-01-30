#include<stdio.h>
#include<conio.h>
main()
{
	FILE *fp;
	char ch;
	int i,pos;
	fp=fopen("newfile.txt","r");
	if(fp==NULL)
	{
		printf("File does not exist...");
	}
	fseek(fp,0,SEEK_END);
	pos=ftell(fp);
	i=0;
	while(i<pos)
	{
		i++;
		fseek(fp,-i,SEEK_END);
		ch=fgetc(fp);
		printf("%c",ch);
		}    
	fclose(fp);
}
