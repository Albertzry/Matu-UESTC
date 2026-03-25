#include<stdio.h>
int main(){
	char s[300];
	int N=0,num=0;
	s[0]=32;
	do
	{
		N++;
		s[N]=getchar();
		if(s[N-1]==32&&s[N]!=32&&s[N]!=10) num++;
	}while(s[N]!=10);
	printf("%d",num);
	return 0;
}
