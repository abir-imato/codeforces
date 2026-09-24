#include <stdio.h>
#include <string.h>

int main()
{
    char arr[100];
    scanf("%s",arr);

    int a =strlen(arr);
    int count = 0;

    for(int i=0;i<a;i++)
       {
        if(arr[i]=='H' || arr[i]=='Q' || arr[i]=='9')
          {
            count++;
            break;
          }
       }

       if(count>0)
         {
            printf("YES");
         }
        else{
            printf("NO");
        } 
    return 0;
}