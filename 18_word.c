#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char arr[100];
    scanf("%s",arr);

    int lower=0;
    int upper=0;
    int lenth = strlen(arr);

    for(int i=0;arr[i] != '\0';i++)
       {
        if(arr[i]==tolower(arr[i]))
          {
            lower++;
          }
        else
        {
            if(arr[i]==toupper(arr[i]))
              {
                upper++;
              }
        }  
       }

       if(lower>=upper)
         {
            for(int i=0;i<=lenth;i++)
               {
                 arr[i]=tolower(arr[i]);
               }
         }

       else{
            for(int i=0;i<=lenth;i++)
               {
                 arr[i]=toupper(arr[i]);
               }
       }  

       printf("%s",arr);
       
    return 0;
}