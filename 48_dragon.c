#include <stdio.h>

int main()
{
    int d;
    scanf("%d",&d);

    int arr[d];

    for(int i=0;i<d;i++)
    {
       arr[i]=0; 
    }

    printf("%d",arr[1]);


    return 0;
}