#include <stdio.h>
#include <math.h>


int main(){
  int levak;
  int i,j;
  double moduo=0,t;
  typedef struct complex{
      double re,im;
  }Complex;
  Complex niz[10];
  for(i = 0;i<10;i++){
      scanf("%lf%lf",&niz[i].re,&niz[i].im);
      t= sqrt(niz[i].re*niz[i].re + niz[i].im*niz[i].im);
      j = (t>moduo)?i:j;
      moduo = (t>moduo)?t:moduo;
  }
  printf("%lf\n%d",moduo,j+1);
  scanf("%d",&levak);
  return 0;
}
