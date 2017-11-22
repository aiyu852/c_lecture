/*
* main.c - find m&n's common divisor and common multiply
*/
#include <stdio.h>

/*
* max - find the maxmum number from given two arguments
* @a:   the given argument
* @b:   the given argument
* return value: the maxmun number a
* min - find the minimum number from given two arguments
* return value: the minimum number b
*/

int max(int, int);
int min(int, int);
int main(void)
{
	int m, n, i, j;
	scanf("%d%d",&m, &n);
	
	if(m<=0||n<=0)
		return -1;
	else{
		for(i=max(m,n);;i++)
			if(i%m==0&&i%n==0)
				break;
		for(j=min(m,n);;j--)
			if(m%j==0&&n%j==0)
				break;
	}
	printf("Common multiple:%d\nCommon divisor:\t%d",i, j);
	return 0;
}

int max(int a, int b)
{
	if(a<b)
		a=a+b-(b=a);
	return a;
}

int min(int a, int b)
{
	if(b>a)
		b=a+b-(a=b);
	return b;
}
