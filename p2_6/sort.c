#include <stdio.h>
#include <math.h>
void citaj_niz(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
void pisi_niz(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
void razmeni(int a[],int x,int y){
    int t=a[x];
    a[x]=a[y];
    a[y]=t;
}
void bubblesort(int a[], int n){
    int i,j;
    for(i=n-1;i>0;i--){
        for(j=0;j<i;j++){
            if(a[j]>a[j+1]){
                razmeni(a,j,j+1);
            }
        }
    }
}
void selectionsort(int a[],int n){
    int i;
    for(i=0;i<n-1;i++){
        int m=i,j;
        for(j=i+1;j<n;j++){
            if(a[j]<a[m]){
                m=j;
            }
        }
        razmeni(a,i,m);
    }
}
void insertionsort(int a[],int n){
    int i;
    for(i=1;i<n;i++){
        int j, t=a[i];
        for(j=i;j>0 && a[j-1]>t;j--){
            a[j]=a[j-1];
        }
        a[j]=t;
    }
}
int main(){
    int levak,a[100],n;
    scanf("%d",&n);
    citaj_niz(a,n);
    //bubblesort(a,n);
    //selectionsort(a,n);
    insertionsort(a,n);
    pisi_niz(a,n);
    scanf("%d",&levak);


    return 0;
}
