#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int num=0;
	int a,b;
	int c;
	for (a=1,b=1;num<n;num++){
		printf("%10.d",a);
		c=a;
		a=b;
		b=c+a;
		if ((num+1)%8==0) printf("\n");
		
	}
	return 0;
}
