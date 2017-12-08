#include <stdio.h>

void swap(int *,int *);
void sort(int *, int);
int main(void)
{
	int a[3];
	int i;
	for(i=0;i<3;i++)
		scanf("%d",a+i);
	sort(a, 3);
	
	return 0;
}
void sort(int *a, int n)
{
	int i=0,j=0;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(a[j]<=a[j+1]&&(j+1)<n)
				swap(a+j,a+j+1);
	for(i=0;i<n;i++)
		printf("%d\t",*(a+i));
}
void swap(int *a, int *b)
{
    int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
