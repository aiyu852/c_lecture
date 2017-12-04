#include <stdio.h>

void catStr(char [], char []);
int lenStr(char []);

int main(void)
{
	char str1[20], str2[20];
	scanf("%s%s",str1, str2);
    printf("str1:%s\tstr:=%s\n",str1, str2);
	printf("str1=%d\tstr2=%d\n",lenStr(str1), lenStr(str2));
	catStr(str1, str2);
	return 0;
}

void catStr(char str1[], char str2[])
{
	int n = 0, i = 0, j = 0;
	n = lenStr(str1)+lenStr(str2)+1;
	char str3[n];
	for(i=0;i<lenStr(str1);i++)
		str3[i]=str1[i];
	for(j=0;j<=lenStr(str2);j++)
		str3[i+j]=str2[j];
	printf("str3:%s", str3);
	printf("\nstr3=%d", lenStr(str3));
}

int lenStr(char str1[]){
	int i = 0;
	while(str1[i]!=0)
		i++;
	return i;
}
