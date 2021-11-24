#include<stdio.h>
int digit(long n,int k);
int digit(long n,int k){
	int num1,num2,m,nn;
	for (num1=0,m=n;m!=0;num1++){
	m=m/10;
	}
	for (num2=0;num2<k-1;num2++){
		n=n/10;
	}
	nn=n%10;
	if(k>num1) return -1;
	else return nn;
}
int main(){
	int k;
	long n;
	scanf("%d%d",&n,&k);
	printf("%d",digit(n,k));
	
	return 0;
}

