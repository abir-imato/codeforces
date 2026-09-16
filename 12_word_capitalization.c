#include <stdio.h>
#include <ctype.h>

int main()
{
    char arr[1000];
    scanf("%s",arr);

    arr[0]=toupper(arr[0]);

    printf("%s",arr);

    return 0;
}