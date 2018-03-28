#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int levak;
    double xs=1,xn,a;
    scanf("%lf",&a);
    while(1){
        xn=xs-(xs*xs-a)/(2.0*xs);
        if(fabs(xn-xs)<0.0001)break;
        xs=xn;
    }
    printf("%lf",xn);
    scanf("%d",&levak);
    return 0;
}
