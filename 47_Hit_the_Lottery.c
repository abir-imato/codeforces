#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int count = 0;

    while(n>0){

    if(n>=100){
      n = n-100;
      count++;
    }
    if(n<100 && n>=20){
        n = n-20;
        count ++;
    }
    if(n<20 && n>=10){
        n = n-10;
        count ++;
    }
    if(n<10 && n>=5){
        n = n-5;
        count ++;
    }
    if(n<5 && n>0){
        n=n-1;
        
        count++;
    }}

    printf("%d",count);
    return 0;
}