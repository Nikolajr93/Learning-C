#include <stdio.h>
#include <math.h>

void upis(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }}

void ispis(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

int najduza_serija(int a[],int n){
    int i,j=1,max=1;
    for(i =1;i<n;i++){
        if(a[i]==a[i-1]) j++;
        else j=1;
        max=(j>max)?j:max;
    }
    return max;
}

int podniz(int a[],int n,int b[],int m){
    int i,j;
    for(i=0;i<n;i++){
        if(a[i]==b[0]){
            for(j=0;j<m;j++){
                if(b[j] != a[i+j]){
                    break;
                }
                if((j+1)==m) return 1;
            }
        }
    }
    return 0;
}

void pomeranje(int a[],int n, int k){
    // radi samo za n=int*k :/
    int i,p,j;
    for(i=0;i<k;i++){
        p=a[i];
        for(j=0;j*k<n;j+=k){
            a[i+j]=a[i+j+k];
        }
        a[n-k+i]=p;
    }
}
int main(){
    int levak;
    int a[1000],n,b[1000],m,k;
    scanf("%d %d",&n,&k);
    upis(a,n);
    pomeranje(a,n,k);
    ispis(a,n);
    //scanf("%d",&m);
//    upis(b,m);
    //printf("%d ",podniz(a,n,b,m));
    scanf("%d",&levak);
    return 0;
}
