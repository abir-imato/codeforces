#include <stdio.h>

int isLucky(int x)
{
    while (x > 0)
    {
        int digit = x % 10;
        if (digit != 4 && digit != 7)
        {
            return 0;
        }
        x = x / 10;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);

    int found = 0;

    for (int i = 1; i <= n; i++)
    {
        if (isLucky(i) && n % i == 0)
        {
            found = 1;
            break;
        }
    }

    if (found)
        printf("YES");
    else
        printf("NO");

    return 0;
}