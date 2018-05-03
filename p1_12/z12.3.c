#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
typedef struct{
    char ime[20];
    char prezime[20];
    int br_ispita;
}Apsolvent;
int main(){
    int levak,i,n=0;
    float prosek;
    FILE *input, *output;
    Apsolvent a, *svi;
    svi=(Apsolvent* )malloc(1000*sizeof(Apsolvent));
    input=fopen("apsolventi.txt","r");
    output=fopen("luzeri.txt","w");
    while(fscanf(input,"%s %s %d", a.ime, a.prezime, &a.br_ispita )>0){
        prosek+=a.br_ispita;
        svi[n]=a;
        n++;
    }
    prosek/=n;
    for(i=0;i<n;i++){
        if(svi[i].br_ispita>prosek){
            fprintf(output,"%s %s %d", svi[i].ime, svi[i].prezime, svi[i].br_ispita);
        }
    }
    printf("%f",prosek);
    scanf("%d",&levak);
    fclose(input);
    fclose(output);
    return 0;
}
