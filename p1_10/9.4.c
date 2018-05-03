#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int skalarni_proizvod(int* a, int *b, int n){
    int i,s = 0;
    for(i=0;i<n;i++)
        s+= a[i]*b[i];
    return s;
}
void citaj_vektor(int* a, int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    return;
}

void pisi_vektor(int* a, int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return;
}

int ortonomirana(int* m, int n){
    int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            if(skalarni_proizvod(&m[i],&m[j],n)!=0){
                return 0;
            }
        }
        if(skalarni_proizvod(&m[i],&m[i],n)!=1){
            return 0;
        }
    }
    return 1;
}

void citaj_matricu(int* a, int n){
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++){
        scanf("%d",&a[i*n+j]);
    }
    return;
}

void pisi_matricu(int* a, int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        printf("%d ",a[i*n+j]);
    }
    printf("\n");
}
    return;
}

void pisi_kolonu(int* a, int n,int b){
    int i,j;
    for(i=0;i<n;i++){
        printf("%d\n",a[i*n+b]);
    }
    return;
}

int main(){
    int levak;
    int s,n, *a,*b,*m;
    scanf("%d",&n);
    a = (int*)malloc(n*sizeof(int));
    b = (int*)malloc(n*sizeof(int));
    m = (int*)malloc(n*n*sizeof(int));
    citaj_matricu(m,n);
    pisi_matricu(m,n);
    s = ortonomirana(m,n);
    printf("%d\n",s);
    scanf("%d",&levak);
    free(a);
    free(b);
    free(m);
    return 0;
}
