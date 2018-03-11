#include <stdio.h>
#define N 3


int main(){
  int levak;
  int i;
  double a[N*N],det;
  for(i = 0; i< N*N; i++)
    scanf("%lf",&a[i]);
det= a[0]*(a[4]*a[8]-a[5]*a[7])-a[1]*(a[3]*a[8]-a[5]*a[6])+a[2]*(a[3]*a[7]-a[4]*a[6]);
printf("%lf",det);
 scanf("%d",&levak);
}
