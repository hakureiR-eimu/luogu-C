#include<stdio.h>
int main()
{
	int i,x,flag=0;
//	printf("本程序判断合数，请输入大于1的整数，以Ctrl+Z结束\n");
	while(scanf("%d",&x)!=EOF){
		if (x==2) printf("%d是合数\n",x);
		
		else {
		i=2;
		do {
			if(x%i==0){
				flag=1;
			}
			i++;
		}while(i<=x-1);
		

		if(flag==1) printf("%d是合数\n",x);
		else printf("%d不是合数\n",x); 
		flag = 0;
	}
}
	return 0;
}
