#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int a,b,c;

    int count=0;

    for(int i=0;i<n;i++)
    {
      scanf("%d %d %d",&a,&b,&c);

      if(a+b+c>=2){
        count++;
      }
    }

    printf("%d",count);
    
    return 0;
}