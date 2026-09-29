#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld",&n);

    int a,b,c;

    for(int i=1;i<=n;i++)
       {
         scanf("%d %d %d",&a,&b,&c);

         
        if( a+b==c || b+c==a || c+a==b)
          {
            printf("YES\n");
          }
        else{
            printf("NO\n");
        }  
           
       }
    return 0;
}