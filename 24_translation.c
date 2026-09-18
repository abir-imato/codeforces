#include <stdio.h>
#include <string.h>

int main()
{
    char arr[105];
    char brr[105];

    scanf("%s",arr);
    scanf("%s",brr);

    int len1=strlen(arr);
    int len2=strlen(brr);
    int count=0;

    if(len1==len2)
      {
        for(int i=0,j=len2-1;i<len1 && j>=0;i++,j--){
           if(arr[i]==brr[j])
             {
                count++;
             }
        }
      }

      if(count == len1)
        {
            printf("YES");
        }

      else{
        printf("NO");
      }  

    
    return 0;
}