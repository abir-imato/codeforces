#include <stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);

    for(int i=1;i<=m;i++)
       {
         if(n%10==0)
           {
            n=n/10;
           }
         else{
            n=n-1;
         }  
       }

       printf("%d",n);
    return 0;
}