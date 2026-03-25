#include<stdio.h>
void my_strcpy(char * destination,char * source)
{
	if(destination==NULL||source==NULL) 
	{
		printf("error");
		return;
	}
	int i;
	for(i=0;*(source+i)!=' '&&*(source+i)!='\0';i++)
		*(destination+i)=*(source+i);
	*(destination+i)=' ';
}
int main()
{
	char s[100]={"ab c"},d[100];
	my_strcpy(d,s);
	puts(d);
	return 0;
}
