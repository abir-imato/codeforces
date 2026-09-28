#include <stdio.h>

int main()
{
    int a,b,c;

    int store=0;

    scanf("%d %d %d",&a,&b,&c);

    int a1=(a+b*c);
    int a2=(a*(b+c));
    int a3=a*b*c;
    int a4=(a+b)*c;
    int a5=a+b+c;

    if(a1>store)
      store = a1;

    if(a2>store)
      store = a2;
      
    if(a3>store)
      store = a3;
      
    if(a4>store)
      store = a4;  

    if(a5>store)
      store = a5;    


    printf("%d",store);  

    return 0;
}