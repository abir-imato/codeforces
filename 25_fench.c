#include <stdio.h>

int main()
{
    int n,h,total=0;
     scanf("%d %d",&n,&h);

    int a[n];

    

    for(int i=0;i<n;i++)
       {
         scanf("%d",&a[i]);

         if(a[i]<=h){
            total+=1;
         }
         else{
            total+=2;
         }
       }

       printf("%d",total);
    return 0;
}