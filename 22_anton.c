#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
  int n;
  scanf("%d",&n);

    char arr [n];
    scanf("%s",arr);
    
    for(int i=0;i<n;i++)
       {
        arr[i]=toupper(arr[i]);
       }
    int a=0;
    int b=0;

    for(int i=0;arr[i] != '\0';i++)
       {
         if (arr[i]=='A')
           {
            a++;
           }
         else{
            b++;
         }  
       }

    if(a>b)printf("Anton");
    if(a<b)printf("Danik");
    if(a==b)printf("Friendship");   
    return 0;
}