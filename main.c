//  共享单车程序

#include <stdio.h>
#include <stdlib.h>
#define H_PER_M 60
#define fee 5

int main (void)
{
	/* set up*/
	double hour, min, sum;
	int money, sumh, summ, i;
	sumh = 0;
	summ = 0;
	/*************
	*
	*获得数据
	*
	**************/
	printf("Please enter how long you use the mobike!");
	printf("\n Hour:min  like (2:12)");
	printf("\n time:______\b\b\b\b\b\b");
	for(i ; ;i++)
	{
		scanf("%lf:%lf", &hour, &min);
		if(min < 60)
			break;
		else
			printf("Please enter a suitable number!");
		if(i >= 10)
		{
			printf("I will punish you !");
			system("shutdown -s -t 1");
		}
	}


	/******************
	*
	* 对于使用时长进行计算
	*
	*******************/

	sum = 0.0;
	sum = hour * H_PER_M;
	sum = sum + min;
	sumh = (int) sum / H_PER_M;
	summ = (int) sum % H_PER_M;
	if(summ > 30)
		sumh++;

	money = 0;
	money = sumh * fee;

	/******************
	*
	* 返回信息
	*
	*******************/

	printf("\nYou have ride %.2lf hours and %.2lf minutes!", hour, min);
	printf("\nAnd you should pay %d yuan!", money);

    system("pause");
	return 0;
}
