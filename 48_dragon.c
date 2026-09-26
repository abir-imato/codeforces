#include <stdio.h>

int main()
{
    int k,l,m,n,d;

    scanf("%d",&k);
     scanf("%d",&l);
      scanf("%d",&m);
       scanf("%d",&n);
        scanf("%d",&d);

    int arr[d];

    int sum=0;

    for(int i=0;i<d;i++)
    {
       arr[i]=0; 
    }

    for(int i=0;i<d;i++)
       {
        int d=i+1;
         if(d%k==0 || d%l==0 || d%m==0 || d%n==0)
           {
             arr[i]=1;
           }
       }

    for(int i=0;i<d;i++)
       {
         sum = sum + arr[i];
       }   

       printf("%d",sum);

    return 0;
}