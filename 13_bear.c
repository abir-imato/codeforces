#include <stdio.h>

int main()
{
    int a,b,c;

    scanf("%d %d", &a, &b);


    for( int i=1;a<=b;i++)
       {
        a=a*3;
        b=b*2;
        c=i;
       }
       printf("%d",c);
    return 0;
}