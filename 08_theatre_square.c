#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c;
    
    scanf("%lf %lf %lf",&a,&b,&c);

    long long p=ceil(a/c);
    long long q=ceil(b/c);

    long long z =p*q;

    printf("%lld",z);
    return 0;
}