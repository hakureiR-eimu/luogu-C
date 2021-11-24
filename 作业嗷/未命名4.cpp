#include <stdio.h>
#include <ctype.h>
#define AXIS 40
int main(){
	char c,c1,c2,top;
	int i;
	c = getchar();
	top = isupper(c)?'A':(islower(c)?'a':'\0');
	if (top){
		for(c1 = top ; c1<=c; c1++){
			for(j=1; j<=AXIS-2*(c1-top);j++)
				putchar(' ');
			for(c2=top;c2<=c1;c2++)
				printf("%2c",c2);
			for(c2=c1-1;c2>=top;c2--)
				printf("%2c",c2);
			printf("\n");
				
		}
		
	}
	return 0;
}
