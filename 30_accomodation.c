#include <stdio.h>

int main()
{
    int n,p,q;
    scanf("%d",&n);

    int seat=0;

    for(int i=1;i<=n;i++)
       {
         scanf("%d %d",&p,&q);
         if((q-p)>=2)
           {
            seat = seat + 1;  
           }
       }

    printf("%d", seat);

    return 0;
}