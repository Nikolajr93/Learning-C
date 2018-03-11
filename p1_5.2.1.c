#include <stdio.h>
#include <math.h>

int main(){
  double r,o,s;
  scanf("%lf",&r);
  o = 2*r*M_PI;
  s = r*r*M_PI;
  printf("%lf %lf\n",o,s);
  return 0;
}
