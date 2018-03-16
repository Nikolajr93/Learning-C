#include <stdio.h>
#include <math.h>

int main(){
    int a,b,levak;
    double i;
    scanf("%d%d",&a,&b);
    for (i=trunc(pow((double)a,1.0/3.0))+1;i<pow((double)b,1.0/3.0);i++)
        printf("%lf\n",pow((double)i,3));
    scanf("%d",&levak);
}
