#include <stdio.h>
#include <string.h>

int main()
{
    char arr[100];
    scanf("%s",arr);
    
    int a = strlen(arr);

    char brr[a+1];
    scanf("%s",brr);

    char crr[a+1];

    for(int i=0;i<a;i++)
    {
        if(arr[i] == brr[i])
          {
            crr[i]='0';
          }
          else{
            crr[i]='1';
          }
    }

    crr[a]='\0';

    printf("%s",crr);
    return 0;
}