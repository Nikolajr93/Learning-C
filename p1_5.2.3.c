#include <stdio.h>
#include <math.h>


int main(){
  int levak;
  double a,b,c,alpha,beta,gamma;
  scanf("%lf%lf%lf",&a,&b,&gamma);
  gamma = gamma*M_PI/180;
  c = sqrt(a*a+b*b-a*b*2*cos(gamma));
  alpha = asin(a*sin(gamma)/c);
  beta = asin(b*sin(gamma)/c);
  alpha = alpha*180/M_PI;
  beta = beta*180/M_PI;
  printf("%lf %lf %lf",c,alpha,beta);
  scanf("%d",&levak);
}
