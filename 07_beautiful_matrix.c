#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[6][6];

    for(int i=1;i<=5;i++)
       {
        for(int j=1;j<=5;j++)
        {
          scanf("%d",&arr[i][j]);
        }
       }

    for(int i=1;i<=5;i++)
    {
      for(int j=1;j<=5;j++)
         {
            if(arr[i][j]==1)
              {
                int a=abs(3-i);
                int b=abs(3-j);
                int c=a+b;
                printf("%d",c);
              }
         }
    }
    return 0;
}