#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld",&n);
    
    long long m= n/2;

    long long total=0;

    if(n % 2 != 0)
      {
        total = m -n;
      }
      else{
        total = m;
      }

    printf("%lld",total);  

    return 0;
}