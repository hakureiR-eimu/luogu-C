#include<stdio.h>
#include<stdlib.h>
int diceGame(int randSeed);
int diceGame(int randSeed){
	srand(randSeed);
	int x,y,z;
	x = rand();
	y = rand();
	x=x%6+1;
	y=y%6+1;
	z=x+y;
	return z;
}
int main(){
	int input,fina,x,y,t;
	scanf("%d",&input);
	x=diceGame(input);
	if ((x-7)*(x-11)==0) printf("Round 1:  Score:%d  Success!",x);
	else {
		y=x;
		t=2;
		printf("Next rounds: Score %d:Success, Score 7:Failed, others:Continue",x);
		do{
		y=diceGame(y);
		if (y==x) {printf("Round %d:  Score:%d  Success!",t,x);
			
		}
		if (y==t){printf("Round %d:  Score:7  Failed!",t);
		
		}
		t++;	
		}
		
	}
	printf("%d",x);
	return 0;
}
