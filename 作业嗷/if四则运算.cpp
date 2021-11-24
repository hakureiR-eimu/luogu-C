#include <stdio.h>
int main(){
    int a,b;
    float d;
    char c;
    scanf("%d %d %c",&a,&b,&c);

    if (c=='+') {
        d=a+b+0.0;
        printf("%.1f",d);
    }
    if (c=='-'){
        d=a-b+0.0;
        printf("%.1f",d);
    }
    if (c=='*'){
        d=a*b;
        printf("%.1f",d);
    }
    if (c=='/'){
        d=a/b;
        printf("%.1f",d);
    }
    return 0;
}
