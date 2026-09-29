#include <stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);

    int p=1;
    int a=m;

    for(int i=1;i<=n;i++)
       {
        for(int j=1;j<=m;j++)
           {
             if(i%2!=0)
               {
                printf("#");
               }
             else{
                if(j==a){
                    printf("#");
                }
                else{
                    printf(".");
                }
                
             }  
             
           }
           if(i%2==0){
           int t=p;
           p=a;
           a=t;
           
           }
           printf("\n");
       }
    return 0;
}