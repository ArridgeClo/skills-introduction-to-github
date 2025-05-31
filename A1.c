#include <stdio.h>
 
int main()
{
        int a = 20;
        if (0 == (a % 2)){
                printf("%d is an even number",a);
        }
        else{
                printf("%d is an odd number.",a);
        }
        return 0;
}