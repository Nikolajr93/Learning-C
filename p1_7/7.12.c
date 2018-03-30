#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void fib_lin(int k){
    int fm1=1,fm2=1,f=1,i;
    printf("%d ",1);
    for(i=1;i<k;i++){
        printf("%d ",f);
        f=fm1+fm2;
        fm2=fm1;
        fm1=f;
    }
}

int fib_re(int k){
    if(k<=1)return 1;
    return fib_re(k-1)+fib_re(k-2);
}

int main(){
    int levak;
    char c='l';
    int k,i,a;
    scanf("%d %c",&k,&c);
    if(c=='r'){
        for(i=0;i<k;i++){
            a = fib_re(i);
            printf("%d ",a);
        }
    }
    else if(c=='l'){
        fib_lin(k);
    }
    scanf("%d",&levak);
    return 0;
}
