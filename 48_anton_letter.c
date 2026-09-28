#include <stdio.h>
#include <string.h>

int main()
{
    char arr[26];
    char al='a';

   for(int i=0;i<26;i++){
    arr[i]=al;
    al++;

   }

   int crr[26];
   for(int i=0;i<26;i++)
      {
        crr[i]=0;
      }

  char brr[1000];
fgets(brr, sizeof(brr), stdin);

   for(int i=0;brr[i]!='\0';i++){
    for(int j=0;j<26;j++)
       {
         if(brr[i] == arr[j])
         crr[j]=1;
       }
   }

   int total=0;

   for(int i=0;i<26;i++)
      {
        total = total + crr[i];
      }

      printf("%d",total);

    return 0;
}