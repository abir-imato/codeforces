#include <stdio.h>

int main()
{
   long long n;
   scanf("%lld",&n);

   for(int i=1;i<=n;i++)
      {
        long long a,b;
        scanf("%lld %lld",&a,&b);

        long long r=a % b;
        long long c;

        if(r==0)
          {
            c=0;
          }
        else{
            c=b-r;
        }  

      printf("%lld\n",c);

      }
    return 0;
}