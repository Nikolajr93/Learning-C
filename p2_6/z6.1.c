#include <stdio.h>
#include <math.h>
double f(double x){
    return sin(x)*log(x);
}
double nula(double a, double b, double eps){
    double s;
    if((b-a)<eps){
        return a;
    }
    s=(a+b)/2.0;
    if((f(a)*f(s))<0){
        return nula(a,s,eps);
    }
    else return nula(s,b,eps);
}
int main(){
    int levak;
    double a,b,eps;
    scanf("%lf%lf%lf",&a,&b,&eps);
    printf("%lf",nula(a,b,eps));
    scanf("%d",&levak);
    return 0;
}
