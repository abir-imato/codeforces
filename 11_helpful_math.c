#include <stdio.h>

int main()
{
    char arr[100];
    scanf("%s",arr);

    int one=0,two=0,three=0;
   
    for(int i=0;arr[i]!='\0';i++){
        
        if(arr[i]=='1') one++;
        if(arr[i]=='2') two++;
        if(arr[i]=='3') three++;
    }

    int total = one+two+three;
    int p=1;

    for(int i=0;i<one;i++) // section of 1
       {
        printf("1");
        if(p<total)printf("+");
        p++;
       }

    for(int i=0;i<two;i++) // section of 2
       {
        printf("2");
        if(p<total)printf("+");
        p++;
       }
       
    for(int i=0;i<three;i++) // section of 3
       {
        printf("3");
        if(p<total)printf("+");
        p++;
       }   

    return 0;
}