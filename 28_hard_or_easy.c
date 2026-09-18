#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int a,b=0,c=0;

    for(int i=1;i<=n;i++)
       {
        scanf("%d",&a);
        if(a==0)
          {
            b=0;
          }
        else{
            c=1;
        }  
       }

    if(b==0 && c==0){
        printf("EASY");
    }   
    else{
        printf("HARD");
    }
    return 0;
}