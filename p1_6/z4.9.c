#include <stdio.h>
#include <math.h>


int main(){
    int levak;
    long int b,i;
    scanf("%ld",&b);
    for(i = 1; i<=b;i++)
        if((b%i) == 0)
            printf("%ld ",i);
    scanf("%d",&levak);
    return 0;
}
