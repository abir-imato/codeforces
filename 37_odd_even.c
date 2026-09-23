#include <stdio.h>

int main()
{
    long long n,k,m,a;

    scanf("%lld %lld",&n,&k);

    if(n%2!=0){
       m=(n/2)+1;
    }
    else{
        m=n/2;
    }

    if(k>m)
      {
        a=k-m;
        printf("%lld",2*a);
      }
    else{
        printf("%lld",(2*k)-1);
    }  
    return 0;
}