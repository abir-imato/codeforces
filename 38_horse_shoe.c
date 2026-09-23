#include <stdio.h>

int main()
{
    int arr[4];
    int count=0;

    for(int i=0;i<4;i++)
       {
        scanf("%d",& arr[i]); 

       }

    for(int i=0;i<4;i++)
       {
        for(int j=0;j<i;j++)
           {
             if(arr[i] == arr[j])
               {
                count++;
                break;
               }
           }
       } 
       
   printf("%d",count);    
    return 0;
}