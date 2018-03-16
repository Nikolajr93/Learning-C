#include <stdio.h>
#include <math.h>
int main(){
    int levak,i;
    unsigned int x;
    printf("Unesite broj. \n");
    scanf("%u",&x);
    printf("Delioci unetog broja su: ");
    for(i=1; i<=x/2+1; i++){
        if((x%i)==0)
            printf("%d ",i);
    }
    printf("%u",x);
    scanf("%d",&levak);
}
