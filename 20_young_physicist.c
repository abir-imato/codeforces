#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int x1=0,y1=0,z1=0;
    int x,y,z;

    for(int i=1;i<=n;i++)
    {
    scanf("%d %d %d",&x,&y,&z);
    x1=x1+x;
    y1=y1+y;
    z1=z1+z;
    }

    if(x1==0 && y1==0 && z1==0)
      {
        printf("YES");
      }
    else{
        printf("NO");
    }  

    return 0;
}