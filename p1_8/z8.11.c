#include <stdio.h>
#include <math.h>
void upis(int a[10][10],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void ispis(int a[10][10],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int magicni(int a[10][10],int n){
    int s1=0,s2=0,s3=0,s4=0,i,j;
    for(i=0;i<n;i++){
        s1+=a[i][i];
        s4+=a[i][n-i-1];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            s2+=a[i][j];
            s3+=a[j][i];
        }
        if((s1!=s2)||(s1!=s3)||(s1!=s4)){
            return 0;
        }
        else{
            s2=s3=0;
        }
    }
    return 1;
}
int main(){
    int levak;
    int a[10][10],n;
    scanf("%d",&n);
    upis(a,n);
    ispis(a,n);
    printf("%d",magicni(a,n));
    scanf("%d",&levak);
    return 0;
}
