#include <stdio.h>

int main()
{
    long long n, a;
    scanf("%lld", &n);

    long long pre = 0;
    int tc = 0;
    int max_tc = 0;

    for(int i = 1; i <= n; i++)
    {
        scanf("%lld", &a);

        
        if(pre <= a)
        {
            tc = tc + 1;
        }
        else
        {
            tc = 1; 
        }

        
        if(tc > max_tc)
        {
            max_tc = tc;
        }

        pre = a; 
    }

    printf("%d\n", max_tc);

    return 0;
}
