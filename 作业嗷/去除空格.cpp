#include <stdlib.h>
#include <stdio.h>
int main()
{
    char c;
    while((c=getchar())!=EOF)
    {
        if(c==' ')
        {
            putchar(c);
            while((c=getchar())==' ')
                                     ;
        }
        if(c!=EOF)
            putchar(c);
    }
    return 0;
}
