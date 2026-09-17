#include <stdio.h>

int main()
{
    int k,n,w;

    scanf("%d %d %d",&k,&n,&w);

    int cost=0;

    for(int i=1;i<=w;i++)
       {
         cost = cost + (i*k);
       }

    if(cost > n){

    int lend = cost - n;
    
    printf("%d",lend);

    }
    else{
        printf("0");
    }

    return 0;
}