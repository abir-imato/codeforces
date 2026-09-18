#include <stdio.h>
#include <string.h>

int main()
{
    char arr[105];
    scanf("%s",arr);

    int len=strlen(arr);

    int count=1;
    int ans=0;

    for(int i=0;i<len;i++)
      {
        if(arr[i]==arr[i+1])
        {
            count++;
        }
        else{
            count=1;
        }
        if(count==7)
          {
            ans=1;
          }
      }

      if(ans==1){
        printf("YES");
      }
      else{
        printf("NO");
      }

   
    return 0;
}