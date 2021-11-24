#include<stdio.h>
#include<math.h>
int sushu(int x);
int sushu(int x){
	int a,b=0;
	for (a=2;a<x;a++){
		if (x%a==0) b++;
	}
	if (b==0) return 1;
	else return 0;
}
int main(){
	long m;
	scanf("%d",&m);
	int a,i,b;
	for (i=2;(pow(2,i)-1)<=m;i++){
		b=pow(2,i)-1;
		if (sushu(pow(2,i)-1)) printf("M(%d)=%d\n",i,b);	
	}
	
	return 0;
}
