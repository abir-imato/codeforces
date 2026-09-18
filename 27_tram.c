#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int a,b,s=0,t=0;

    while(n>0){
        scanf("%d %d",&a,&b);
        int u=(s-a)+b;
        s=u;
        if(u>t){
            t=u;
        }
        n--;
    }

    printf("%d",t);

    return 0;
}