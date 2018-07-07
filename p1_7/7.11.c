#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int levak;
    double x_novo,x_staro=1,a;
    scanf("%lf",&a);
    while(1){
        x_novo = x_staro - (x_staro*x_staro-a)/(2.0*x_staro);
        if(fabs(x_staro-x_novo)<0.000001)break;
        x_staro=x_novo;
    }
    printf("%lf",x_novo);
    scanf("%d",&levak);
    return 0;
}
