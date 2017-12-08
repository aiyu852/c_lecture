#include<stdio.h>
#define NUM 11
void swap(int*, int*);
void sort(int*, int);
int main(void)
{
	int a[NUM] = {1,1,2,3,5,6,7,8,9};
	int b = 0;

	scanf("%d",&b);
	a[NUM-1]=b;
	sort(a, 10);
	for(b=0;b<NUM;b++)
		printf("%d",a[b]);
	
	return 0;
}
void sort(int *a, int n)
{
	int i=0, j=0;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(a[j]>a[j+1])
				swap(a+j,a+j+1);
}
void swap(int *a, int *b)
{
	*a = *a + *b - (*b = *a);
}
