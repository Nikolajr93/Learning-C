#include <stdio.h>
#include <math.h>
int main(){
    int h,m,s,o,u,levak;
    scanf("%d%d%d",&h,&m,&s);
    if(h<0 || h>23 || m>59 ||s>59)
        printf("Uneto vreme ima gresku. \n");
    else{
        u= h*60*60 + m*60 + s;
        o= 24*60*60 - u;
        h= o/3600;
        m= (o-h*3600)/60;
        s= o%60;
        printf("Do ponoci je ostalo jos %d H, %d m, %d s.",h,m,s);
        }
    scanf("%d",&levak);
    return 0;
}
