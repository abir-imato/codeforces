#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);

    char arr[200000];

    int sum = 0;

    for(int i=1;i<=n;i++)
       {
         scanf("%s",arr);
        if (strcmp(arr, "Tetrahedron") == 0)
           {
             sum = sum + 4;
           }
         if (strcmp(arr, "Cube") == 0)
           {
             sum = sum + 6;
           }
         if (strcmp(arr, "Octahedron") == 0)
           {
             sum = sum + 8;
           }
         if (strcmp(arr, "Dodecahedron") == 0)
           {
             sum = sum + 12;
           }
         if (strcmp(arr, "Icosahedron") == 0)
           {
             sum = sum + 20;
           }            
       }
       printf("%d",sum);
    return 0;
}