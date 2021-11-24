#include <stdio.h>
int main(){
	int n,y,a,b,c;
	scanf("%d",&n);
	for (y=1;y<=n;y++){
		for (a=1;a<y;a++){
			if (y==a*a){
				
				for (b=1;b<y;b++){
					for (c=1;c<y;c++){
						if (y==b*b*10+c*c){
							printf("%d=%d*%d=%d*%d*10+%d*%d\n",y,a,a,b,b,c,c);
							goto nex;
							
						} 
					}
				}
			}
		
		}
	nex:
		continue;
		
		
	}
	
	return 0;
} 
