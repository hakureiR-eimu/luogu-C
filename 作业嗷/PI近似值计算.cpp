#include <stdio.h>
int main(){
    int sign=1,n=1;
    double sum=0,e,an;
    scanf("%f",&e);
    do{
	an =1.0/n;
	n +=2;
	sum += an*sign;
    sign = -sign;
	}
    while (an>=e);
    printf("%.6f",sum*4);



    return 0;
}

