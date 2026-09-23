#include <stdio.h>
#include <string.h>

int main()
{
    char arr[100];
    scanf("%s",arr);

    char brr[5] = "hello";

    int i=0;
    int j=0;

    while(arr[i]!='\0' && j<5)
    {
        if(arr[i] == brr[j])
          {
            j++;
          }
    i++;
    }

    if(j == 5){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}