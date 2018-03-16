#include <stdio.h>
#include <math.h>


float sqr(float x){
  return x*x;
}
int main(){
  int levak;
  float x1,y1,x2,y2,x3,y3,o,s,p,a,b,c;
  scanf("%f%f",&x1,&y1);
  scanf("%f%f",&x2,&y2);
  scanf("%f%f",&x3,&y3);
//  printf("%f %f",x2,y3);
  a = sqrt(sqr(x3-x2)+sqr(y3-y2));
  b = sqrt(sqr(x3-x1)+sqr(y3-y1));
  c = sqrt(sqr(x1-x2)+sqr(y1-y2));
  //a=3.0,b=4.0,c=5.0;
  o = a+b+c;
  s= o/2.0;

  p = sqrt(s*(s-a)*(s-b)*(s-c));
  printf("%f %f",o,p);
  scanf("%d",&levak);
  return 0;
}
