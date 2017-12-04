#include<stdio.h>
void swap(int*,int*);
int sort(int [], int);
int found(int, int[], int);
void input(int [], int);
int main(void)
{
	int n;
	scanf("%d", &n);
	int mat[n], key;
	input(mat, n);
	sort(mat, n);
	printf("what number do you want to find?\n");
	scanf("%d", &key);
	key = found(key, mat, n);
	if(key == -1)
        return 0;
	printf("Found!");
	printf("The key is at matrix[%d]",key);

	return 0;
}
void swap(int *a, int *b)
{
	*a = *a + *b - (*b = *a);
}
void input(int a[], int n){
    int i=0;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}
int sort(int a[], int n)
{
	int i, j, min;
	for(i=0;i<n;i++){
		min = a[i];
		for(j=i;j<n;j++)
			if(a[j]<min)
				swap(&a[j], &a[i]);
	}
}
int found(int key, int a[], int n)
{
	int i;
	for(i=0;i<n;i++)
		if(key == a[i])
			return i;
	printf("not found");
	return -1;
}
