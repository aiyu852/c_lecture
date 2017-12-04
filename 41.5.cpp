#include<stdio.h>
void Input(int [4][5], int, int);
void compute(int [4][5], int, int);
void output(int [4][5], int, int);
int main(void)
{
	int mat[4][5];
	Input(mat, 3, 4);
	compute(mat, 3, 4);
	output(mat, 4, 5);
	return 0;
}
void Input(int a[4][5], int c, int d)
{
	int i, j;
	for(i=0;i<c;i++)
		for(j=0;j<d;j++)
			scanf("%d", &a[i][j]);
}
void compute(int a[4][5], int c, int d)
{
	int i, j, sum=0;
	for(i=0;i<c;i++)
		for(j=0;j<d;j++){
			sum+=a[i][j];
			if(j==d-1){
				a[i][d] = sum;
				sum=0;
			}
		}
	for(j=0;j<d;j++)
		for(i=0;i<c;i++){
			sum+=a[i][j];
			if(i==c-1){
				a[c][j] = sum/c;
				sum=0;
			}
		}
    a[3][4]=0;
}
void output(int a[4][5], int c, int d)
{
    int i ,j;
    for(i=0;i<c;i++)
		for(j=0;j<d;j++){
			printf("%d ",a[i][j]);
			if(j==d-1)
				printf("\n");
		}
}
