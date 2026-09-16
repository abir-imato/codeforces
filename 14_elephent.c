#include <stdio.h>

int main()
{
    int dis;
    scanf("%d",&dis);

    int step=0;

    for(int i=1;dis>5;i++){

        dis=dis-5;
        step++;
    }
    if(dis<=5){
        step++;
    }

    printf("%d",step);

    return 0;
}