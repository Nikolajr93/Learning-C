#include <stdio.h>
#include <math.h>


int main(){
  double Vo,Vs,V,a,T,To,S;
  int levak;
  scanf("%lf%lf%lf",&Vo,&a,&T);
  V=Vo+a*T;
  Vs=(V+Vo)/2;
  S=Vs*T;
  if (V<0){
      To=Vo/(-a);
      S=(Vo*To+(T-To)*abs(V));
  }
  printf("%lf %lf",V,S);
  scanf("%d",&levak);
}
