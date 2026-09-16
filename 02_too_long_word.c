#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
       {
        char s[50];
        scanf("%s",s);

        int count=0;
        int j=0;
        while(s[j] != '\0')
        {
          count++;
          j++;
        }
        if(count>10)
        printf("%c%d%c\n",s[0],count-2,s[count-1]);

        else
        printf("%s\n",s);

       }
    return 0;
}