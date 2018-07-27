#include <stdio.h>
#include <math.h>
int fact(int n, int k){
    if (n==0){
        return k;
    }
    k*=n;
    return fact((n-1),k);
}
int main(){
    int levak,n;
    scanf("%d",&n);
    printf("%d",fact(n,1));
    scanf("%d",&levak);
    return 0;
}
