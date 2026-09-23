#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n-1];
    for(int i=0;i<n;i++)
       {
         scanf("%d",&arr[i]);
       }

       int i=1;

   while(i <= n){

    for(int j=0;j<=n;j++)
       {
        if(arr[j] == i){
            printf("%d ",j+1);
        }
       }
       i++;
   }
    return 0;
}