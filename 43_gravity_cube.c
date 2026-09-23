#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=1;i<=n;i++)
       {
         scanf("%d",&arr[i]);
       }

    for(int i=1;i<=n;i++)
       {
        for(int j=i+1;j<=n;j++)
           {
            if(arr[i] >= arr[j])
              {
                int s=arr[j];
                arr[j]=arr[i];
                arr[i]=s;
              }
           }
       }  
       
       for(int i=1;i<=n;i++)
          {
            printf("%d ",arr[i]);
          }
    return 0;
}