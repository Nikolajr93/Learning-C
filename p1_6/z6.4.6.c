#include <stdio.h>
#include <math.h>
int main(){
    int levak;
    double a,b,x;
    printf("Unesite A i B \n");
    scanf("%lf%lf",&a,&b);
    if(a==0.0){
        if(b==0)
            printf("Jednacina ima beskonacno mnogo resenja.");
        else
            printf("Jednacina nema resenja.");
              }
    else{
        x=-b/a;
        printf("X je %lf",x);
        }
    scanf("%d",&levak);
    return 0;
}
