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
void shellsort(int a[],int n){
    int gap,i,j;
    for(gap=n/2;gap>0;gap/=2){
        for(i=gap;i<n;i++){
            for(j=i-gap;j>=0 && a[j]>a[j+gap];j-=gap){
                razmeni(a,j,j+gap);
            }
        }
    }
}

void merge(int a[], int m, int b[], int n, int c[]){
    int i = 0, j = 0, k = 0;
    while(i<m && j<n)
        if(a[i]<b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    while(i<m)
        c[k++] = a[i++];
    while(j<n)
        c[k++] = b[j++];
}

void mergesort(int a[], int l, int d, int tmp[]){
    if(l<d){
        int n,s,n1,n2,i,j;
        n = d - l + 1;
        s = l + n/2;
        n1 = n/2;
        n2 = n - n/2;
        mergesort(a, l, s-1, tmp);
        mergesort(a, s, d, tmp);
        merge(a+l,n1,a+s,n2,tmp);
        for(i = l,j=0;i<=d;i++,j++)
            a[i]= tmp[j];
    }
}

int part(int a[], int l, int d){
    int p = l;
    while(l<d){
        while(a[l] <= a[p] && l<d)
            l++;
        while(a[p] <= a[d] && l<d)
            d--;
        if(l<d)
            razmeni(a,l,d);
        }
        if(a[l] >= a[p])
            l--;
        razmeni(a,l,p);
        return l;
}

void quick(int a[],int l, int d){
    int p;
    if(l<d){
    p = part(a,l,d);
    quick(a,l,p-1);
    quick(a,p+1,d);
}}



int main(){
    int levak,a[100],n,tmp[100];
    scanf("%d",&n);
    citaj_niz(a,n);
    //bubblesort(a,n);
    //selectionsort(a,n);
    //insertionsort(a,n);
    //shellsort(a,n);
    //mergesort(a,0,n-1,tmp);
    quick(a,0,n-1);
    pisi_niz(a,n);
    scanf("%d",&levak);


    return 0;
}
