#include <stdio.h>
#include <string.h>

int main()
{
    char arr[100];
    scanf("%s",arr);

    int len = strlen(arr);
    int mainlen=len;
    // printf("%d",len);

    for(int i=0;i<mainlen;i++)
      {
        for(int j=0;j<i;j++)
           {
            if(arr[i]==arr[j])
              {
                len--;
                break;
              }
             
           }
      }

    if(len%2==0)
      {
        printf("CHAT WITH HER!");
      }
      else{
        printf("IGNORE HIM!");
      }
    return 0;
}