#include <stdio.h>
#include <math.h> 
int main()
{
	int n;
	scanf("%d",&n);
	int x,y,z,e;
	int flag=0;

    int i,j,a[10000];
    for (a[0]=0,a[1]=1,i=2;i<10000;i++)
        a[i]=1;           /*1代表不是合数*/
    for (i=2;i<5000;i++){
        if(a[i]==1){
            for (j=i*i;j<10000;j+=i) a[j]=0;     /*0 合数*/
        }
    }

	for (x=pow(10,n-1);x<pow(10,n);x++){
	
		if (a[x]==0) {
		y=x/10;
		if (a[y]==0) {
			z=y/10;
			if (a[z]==0) {
				e=z/10;
				if (a[e]==0) printf("%d ",x);
			}
		}	
	}
}
    return 0;
}
