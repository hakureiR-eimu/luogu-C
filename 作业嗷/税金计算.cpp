#include <stdio.h>
int main(){
int x,a,b,c,d,e,earn=0;
scanf("%d",&x);
if (x<1000) printf("0");
else if (x>=1000&&x<2000) {
x=0.05*(x-1000);
printf("%d",x);
}
else if (x>=2000&&x<3000) {
x=0.05*1000+0.1*(x-2000);
printf("%d",x);
}
else if (x>=3000&&x<4000) {
x=0.05*1000+0.1*1000+0.15*(x-3000);
printf("%d",x);
}
else if (x>=4000&&x<5000) {
x=0.05*1000+0.1*1000+0.15*1000+0.2*(x-4000);
printf("%d",x);
}
else {x=0.05*1000+0.1*1000+0.15*1000+0.2*1000+0.25*(x-5000);
printf("%d",x);
}
return 0;
}
