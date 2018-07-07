#include <stdio.h>
#include <math.h>


int main(){
    int levak;
    int b,k;
    scanf("%d",&b);
    k = b % 1000;
    b -= k;
    k = k * 10 % 1000 + k / 100;
    b += k ;
    printf("%d",b);
    scanf("%d",&levak);
    return 0;
}
