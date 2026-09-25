#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n+1];
for (int i = 0; i <= n; i++) {
    arr[i] = 0;
}

    int ok=1;

    
    int p;
    scanf("%d",&p);
    for(int i=1;i<=p;i++)
       {
       int x;
       scanf("%d",&x);
       arr[x]=1;
       }

    int q;
    scanf("%d",&q);
    for(int i=1;i<=q;i++)
       {
        int y;
        scanf("%d",&y);
        arr[y]=1;
       }   

    for(int i=1;i<=n;i++)
       {
        if(arr[i]==1)
          {
            ok = 1;
          }
        else{
            ok = 0;
            break;
        }  
       } 
       
       if(ok==1){
        printf("I become the guy.\n");
       }
       else{
        printf("Oh, my keyboard!\n");
       }
   
    return 0;
}