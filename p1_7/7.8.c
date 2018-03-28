#include <stdio.h>
#include <math.h>


int main(){
    int levak;
    double n=0.0,s=0.0,p=1.0,t=0.0,min,max,a,g,h,hs;
    while(1){
        scanf("%lf",&t);
        if(t==0)break;
        n++;
        s+=t;
        p*=t;
        if(n==1){min = max = t;}
        min=(t<min)?t:min;
        max=(t>max)?t:max;
        hs+=1.0/t;
    }
    a= s/n;
    g=pow(p,1.0/n);
    h = n/hs;
    printf("n: %3.0lf\ns: %lf\np: %lf\nmin: %lf\nmax: %lf\nas: %lf\ngs: %lf\nhs: %lf\n",n,s,p,min,max,a,g,h);
    scanf("%d",&levak);
    return 0;
}
