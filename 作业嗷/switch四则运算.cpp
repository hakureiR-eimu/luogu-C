#include <stdio.h>
int main(){
int a,b;
char c;
float d;
scanf("%d %d %c",&a,&b,&c);
switch (c){
    case '+':printf("%.1f",a+b);
    case '-':printf("%.1f",a-b);
    case '*':printf("%.1f",a*b);
    case '/':printf("%.1f",a/b);

}


return 0;
}

