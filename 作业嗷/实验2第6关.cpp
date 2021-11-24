#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int cal(int x);
int main(){
    int n;
    int m =0;
    int t = 0;
    char ch;
    while ((n=getchar())!=EOF){
        ch[m]=n;
        m++;
    }
    for (;t<m;t++)

    return 0;
}
int cal(int x)
{
    int a,b,c,d;
    char str[10000];
    itoa(x,str,2);
    int num=atoi(str);
    a=num%(2**8);
    num=num/(2**8);
    
}
