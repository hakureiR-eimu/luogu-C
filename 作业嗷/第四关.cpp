

#include<stdio.h>

int main(void)
 {
double value1,value2;
char  op;
 printf("Type in an expression:");

scanf("%lf%c%lf",&value1&op&value2);
if(op=='+')
printf("=%.2f\n",value1+value2);

else if(op=='-')

printf("=%.2f\n",value1-value2);

else if(op=='*')
printf("=%.2f\n",value1*value2);
else if(op=='/')
printf("=%.2f\n",value1/value2);
else
printf("Unknown opterator\n");
return 0;

 

}  
