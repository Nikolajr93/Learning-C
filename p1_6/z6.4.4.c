#include <stdio.h>
#include <math.h>
main (){
    int a,x,y,levak;
    printf("Unesite broj kom zelite da rotirate poslednje 3 cifre. \n");
    scanf("%d",&a);
    x=a%1000;
    y=x/10%10*100+x%10*10+x/100;
    printf("Vas zeljeni broj je %d",y+a/1000*1000);
    scanf("%d",&levak);
    return 0;
}
