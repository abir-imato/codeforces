#include <stdio.h>

int main()
{
    float n,m;
    scanf("%f",&n);
    float sum=0;

    for(int i=1;i<=n;i++)
       {
         scanf("%f",&m);
         sum =sum + (m/100);
       }

    float s=sum / n;
    
    printf("%f",s*100);
    return 0;
}