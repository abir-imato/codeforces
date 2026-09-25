#include <stdio.h>
#include <string.h>

int main()
{
  int n;
  scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   
    int max=arr[0];
    int maxtime=0;

    for(int i=0;i<n;i++)
       {
         if(arr[i]>max)
           {
            max=arr[i];
           }
       }

    for(int i=0;i<n;i++)
       {
        if(arr[i] != max)
          {
            maxtime++;
          }
        if(arr[i] == max){
            break;
        }  
       }   
//  printf("%d\n",max);
//  printf("%d\n",maxtime); //end of max area

  int min=arr[n-1];
    int mintime=0;

    for(int i=n-1;i>=0;i--)
       {
         if(arr[i]<min)
           {
            min=arr[i];
           }
       }

    for(int i=n-1;i>=0;i--)
       {
        if(arr[i] != min)
          {
            mintime++;
          }
        if(arr[i] == min){
            break;
        }  
       }   
//  printf("%d\n",min);
//  printf("%d\n",mintime); //end of min area

int t=maxtime+mintime;

if(maxtime>mintime){
  t=t-1;
}


 
 printf("%d",t);



    return 0;
}