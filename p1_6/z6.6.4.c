#include <stdio.h>
#include <math.h>
#include <ctype.h>


int main(){
    int levak;
    int a[100][100],m,i,j;

    scanf("%d",&m);
    for(i=0;i<m;i++){
            j = 0;
            a[i][j]=1;
            if(i>0)
            printf("%d ", a[i][j]);
            for(j=1;j<i;j++){
                a[i][j] =  a[i-1][j-1] + a[i-1][j];
                printf("%d ",a[i][j]);
            }
            a[i][j]=1;
            printf("%d\n", a[i][j]);
    }
    scanf("%d",&levak);
    return 0;
}
