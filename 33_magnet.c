#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int m;
    int magnet = 0;
    int count=0;

    for(int i=1;i <= n ;i++)
       {
         scanf("%d",&m);
         if(magnet != m)
           {
            count++;
            magnet=m;
           }
       }

       printf("%d",count);
    return 0;
}