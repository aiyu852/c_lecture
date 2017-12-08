#include <stdio.h>
void upCopy(char*, char*);
int main(void)
{
	char a[10];
    char p[] = "HelLo";
    upCopy(a, p);

    return 0;
}
void upCopy(char * nw, char * old)
{
	int i=0,j=0;
	printf("%s",old);
	for(i=0;;i++){
		if(old[i]=='\0')
			break;
		if(old[i]>='A'&&old[i]<='Z'){
			*(nw+j) = old[i];
			j++;
		}

	}
	printf("\n%s",nw);
}
