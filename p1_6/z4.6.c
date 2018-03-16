#include <stdio.h>
#include <math.h>


int main(){
    int levak;
    double a,b;
    scanf("%lf%lf",&a,&b);
    if (a == 0.0){
        if (b == 0.0){
            printf("to many teardrops");
        }
        else{
            printf("no way out");
        }
    }
    else{
        printf("%lf", -b/a);
    }

    scanf("%d",&levak);
    return 0;
}
