#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);

    int k;
    scanf("%d",&k);

    int arr[n];
    for(int i=0;i<n;i++)
       {
        scanf("%d",&arr[i]);
       }
   // printf("%d",arr[k]);

    int count=0;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=arr[k-1] && arr[i]>0)
        count++;
    }

    printf("%d",count);

    return 0;
}