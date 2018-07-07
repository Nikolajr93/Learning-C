#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void upis(int** a,int n){
    int i;
    *a = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d ",*(a+i));
        //printf("%d ",**(a+i));
    }
    for(i=0;i<n;i++){
        printf("%d ",**(a+i));
    }
}

void ispis(int** a,int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",*a[i]);
    }
}

int skalarni_proizvod(int* a,int* b,int n){
    int i,s=0;
    for(i=0;i<n;i++){
        s+= a[i]*b[i];
    }
    return s;
}

int main(){
    int levak;
    int n,s;
    int *a,*b;
    scanf("%d",&n);
    printf("%d =n\n",n);
    upis(&a,n);
//    ispis(&a,n);
//    upis(b,n);
//    s = skalarni_proizvod(a,b,n);
//    printf("%d",s);

    scanf("%d",&levak);
    free(a);
    free(b);
    return 0;
}
