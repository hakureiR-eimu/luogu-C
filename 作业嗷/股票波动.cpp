#include <stdio.h>
#include <math.h>
int main(){
int x,n,max=0,i=0;
int num[100];

char ch;
scanf("%d",&n);
getchar();
while ((ch=getchar())!='\n'){
	scanf("%d",&num[i++]);
}
for (x=1;x<n;x++){
	if ((num[x+1]-num[x])>=0){
		if ((num[x+1]-num[x])>=max) max=num[x+1]-num[x];
	} 
	else {
		if ((num[x]-num[x+1])>=max) max=(num[x]-num[x+1]);
	}
}
printf("%d",max);
return 0;
}
