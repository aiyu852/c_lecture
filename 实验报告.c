
/*
#include <stdio.h>
#include <math.h>

int main(void)
{
    int i=1,j,n;
    float pi, sum=0.0;
    for(j=1;j<=4;j++){
        scanf("%d",&n);
        for(i=1;i<=n;i++)
            sum+=1.0/pow(i,2.0);
        pi = sqrt(6.0*sum);
        printf("n=%d,pi=%.6f\n", n, pi);
        sum=0.0;
    }
    return 0;
}
*/
/*
#include <stdio.h>
#include <math.h>
int main(void)
{
    int i=0, n=0;
    float pi, sum=0;

    for(i=1;;i++){
        sum+=1.0/pow(i,2.0);
        n++;
        if((1.0/pow(i-1,2.0)-1.0/pow(i,2.0))<=0.000001)
            break;
    }
    pi = sqrt(6.0*sum);
    printf("%d\n%.5f",n, pi);
    return 0;
}

*/

/*
#include <stdio.h>
#include <math.h>
double abss(double , double );
int main(void)
{
    long n=0, i=0;
    double pi, sum=0.0;

    for(i=1;;i+=4){
        n++;
        sum = sum + 1.0/i -1.0/(i+2);
        if(abss(4.0*sum,3.1415926535)<0.00000001)break;
    }
    pi = 4.0*sum;
    printf("n= %lu\npi=%.10f",n, pi);
    return 0;
}
double abss(double  i, double  j){
    double temp;
    if((i - j)<=0){
        temp = i;
        i = j;
        j = temp;
    }
    return i-j;
}
*/
/*
#include <stdio.h>
#include <math.h>

double abss(double , double );
int main(void){
    long n=0, i=0;
    double pi, sum=0.0;

    for(i=1;;i++){
        n++;
        sum += 1.0/pow(i,2.0);
        if(abss(sqrt(6.0*sum),3.1415926535)<0.00000001)break;
    }
    pi = sqrt(6.0*sum);
    printf("n= %lu\npi=%.10f",n, pi);
    return 0;
}
double abss(double  i, double  j){
    double temp;
    if((i - j)<=0){
        temp = i;
        i = j;
        j = temp;
    }
    return i-j;
}
*/
