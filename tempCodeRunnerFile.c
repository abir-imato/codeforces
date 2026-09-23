#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char arr[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    int n;
    scanf("%d",&n);

    char brr[n];
    scanf("%s",brr);

    int a = strlen(brr);

    int count=0;

    for(int i = 0; i < 26; i++)
{
    for(int j = 0; j < n; j++)
    {
        brr[j] = tolower(brr[j]);
        if(brr[j] == arr[i])
        {
            count++;
            break;
        }
    }
}
      if(count == 26)
        {
            printf("YES");
        }

        else{
            printf("NO");
        }
    return 0;
}