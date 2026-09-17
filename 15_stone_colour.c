#include <stdio.h>

int main()
{

    int n;
    scanf("%d",&n);

    char arr[n];
    scanf("%s",arr);

    int step=0;

    for(int i=0;i<n;i=i+1) 
       {
         if(arr[i]==arr[i+1])
           {
            step++;
           }
       }

    printf("%d",step);   

    return 0;
}
