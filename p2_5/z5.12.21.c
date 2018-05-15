#include <stdio.h>
#include <math.h>
int koren(int x, int k){
    if(k>(x/2)){
        return 1;
    }
    if((x%(k*k))==0){
        return k*koren(x/(k*k),k);
    }
    else return koren(x,k+1);
}
int main(){
    int levak,n;
    scanf("%d",&n);
    printf("%d",koren(n,2));
    scanf("%d",&levak);
    return 0;
}
