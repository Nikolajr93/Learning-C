#include <stdio.h>
#include <math.h>


int main(){
    int levak;
    int m,s,h,u,o;
    scanf("%d%d%d",&h,&m,&s);
    if(h<0 || h>23 || m>59 || m<0 || s<0 || s>59){
        printf("mamlazu\n");
    }
    else {
        u = s + 60*m + 60*60*h;
        o = 24*60*60 - u;
        s = o % 60;
        m = (o / 60) % 60;
        h = (o / 60) / 60;

        printf("%d %d %d",h,m,s);
    }


    scanf("%d",&levak);
    return 0;
}
