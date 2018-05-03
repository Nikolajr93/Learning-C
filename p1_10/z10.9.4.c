#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void ucitaj_vektor(int* a, int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    return;
}
int skalarni_proizvod(int* a, int* b, int n){
    int i,s=0;
    for(i=0;i<n;i++){
        s+=a[i]*b[i];
    }
    return s;
}
void ucitaj_matricu(int* a,int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i*n+j]);
        }
    }
    return;
}
int ortonomirana(int* m, int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
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
void ispisi_matricu(int* a, int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i*n+j]);
        }
        printf("\n");
    }
    return;
}
int main(){
    int levak,n,s,*a,*b,*m;
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    b=(int*)malloc(n*sizeof(int));
    m=(int*)malloc(n*n*sizeof(int));
    //ucitaj_vektor(a,n);
    //ucitaj_vektor(b,n);
    ucitaj_matricu(m,n);
    ispisi_matricu(m,n);
    //s=skalarni_proizvod(a,b,n);
    s=ortonomirana(m,n);
    printf("%d\n",s);
    free(a);
    free(b);
    free(m);
    scanf("%d",&levak);
    return 0;
}
