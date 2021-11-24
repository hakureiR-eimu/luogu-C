#include<stdio.h>
#define CHANGE 1

int main(void)
{
#if CHANGE==1
char ch;
char x;
while ((ch=getchar())!=EOF){
    if (getchar()>=65&&getchar()<=90){
	x=ch+32;
	putchar(x);
	} 
    else if (getchar()>=97&&getchar()<=122) {
	x=ch-32;
	putchar(x);
	}
    else putchar(ch);
}

#endif



return 0;
}
