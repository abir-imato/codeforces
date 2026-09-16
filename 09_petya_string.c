#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
   char arr[100];
   scanf("%s",arr);

   char brr[100];
   scanf("%s",brr);

   int len = strlen(arr);

   for(int i;i<len;i++)
      {
        char a = tolower(arr[i]);
        char b = tolower(brr[i]);

        if(a<b){
            printf("-1");
            return 0;
        }

         if(a>b){
            printf("1");
            return 0;
        }
      }

      printf("0");
      
      return 0;
}