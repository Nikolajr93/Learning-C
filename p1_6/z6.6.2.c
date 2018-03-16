#include <stdio.h>
#include <math.h>
#include <ctype.h>
int main(){
    int a[10],k,i,levak;
    char c;
    for(i=0; i<10; i++){
        a[i]=0;
    }
    while ((c=getchar()) !='.'){
        if(isdigit(c)){
            k=c-'0';
            a[k]++;
        }
    }
    for(i=0; i<10; i++)
        printf("%d ",a[i]);
    scanf("%d",&levak);
    return 0;
}
