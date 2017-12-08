#include <stdio.h>
#include <string.h>
void catStr(char *, char *);
int main(void)
{
	char a[100] = "Hello!";
	char b[] = "Mr.zhao";
	printf("a:%s\n",a);
	printf("b:%s\n",b);
	catStr(a,b);
	printf("a+b:%s",a);
	
	return 0;
}
void catStr(char *a, char *b)
{
	int i=0;
	int j=strlen(a);
	for(i=0;i<strlen(b);i++)
		*(a+j+i)=*(b+i);
}
