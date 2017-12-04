#include<stdio.h>
int main(void)
{
	int n;
	printf("Please input a number >2&<10\n");
	scanf("%d",&n);
	int i, j, k, minn, maxx, a, b;
	int matrix[n][n];
	int temp;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	minn=matrix[0][0];
	maxx=matrix[0][0];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(matrix[i][j]<minn){
				a=i;
				minn=matrix[i][j];
			}
			if(matrix[i][j]>maxx){
				b=i;
				maxx=matrix[i][j];
			}
		}
	}
	i=a;
	k=b;
	for(j=0;j<n;j++){
        temp = matrix[i][j];
		matrix[i][j]=matrix[k][j];
		matrix[k][j]=temp;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",matrix[i][j]);
			if(j==n-1)
				printf("\n");
		}
	}
}
