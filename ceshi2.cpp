/*
*
*main2.c    -find the sum of prime number less 1000
*
*/
#include <stdio.h>
int isprime(int);
int main(void)
{
	int i, sum;
	sum = 0;
	for(i=2;i<1000;i++)
		if(isprime(i)){
			printf("%d+",i);
			sum+=i;
		}
	printf("=%d",sum);
}
int isprime(int a){
	int i=2;
	for(;i<a;i++){
		if(a%i==0)
			return 0;
	}
	return 1;
}
