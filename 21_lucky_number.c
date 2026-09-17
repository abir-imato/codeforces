
#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld",&n);

    int m;
    int count =0;

    for(int i=1;n>0;i++)
      {
        m=n%10;
        n=n/10;
        if(m==4 || m==7)
          {
            count++;
          }
      }

    if(count ==4 || count == 7 )
      {
        printf("YES");
      }  

    else{
        printf("NO");
    }  


    return 0;
}