#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);      
    int x = 0;             
    char s[10];            

    for (int i = 0; i < n; i++) {
        scanf("%s", s);    
        if (s[1] == '+')
            x++;
        else
            x--;
    }

    printf("%d\n", x);    
}