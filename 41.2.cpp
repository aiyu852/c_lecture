#include<stdio.h>
int main(void)
{
	int a[10]={'a','c','d'},i;
	char b;
	scanf(" %c", &b);
	for(i=0;i<10;i++)
	{
	    if(a[i]==b){
			printf("The place is a[%d]\n",i);
			return 0;
	    }
    }
	printf("Not exsist");
    return 0;
}
