#include <stdio.h>
#include <math.h>
#include <stdlib.h>
typedef struct cvor{
    int podatak;
    struct cvor *sledeci;
} cvor;
void pisi_listu(cvor *prvi){
    while(prvi){
        printf("%d ", (*prvi).podatak);
        prvi = (*prvi).sledeci;
    }
}
void brisi_listu(cvor *prvi){
    if(prvi){
        brisi_listu((*prvi).sledeci);
        free(prvi);
    }
}
cvor* dodaj_na_pocetak(cvor *prvi, int b){
    cvor *novi = (cvor*)malloc(sizeof(cvor));
    (*novi).podatak = b;
    (*novi).sledeci = prvi;
    return novi;
}
int main(){
    int i, levak;
    cvor *prvi = NULL;
    for(i=0; i<5; i++)
        prvi = dodaj_na_pocetak(prvi, i*i);
    pisi_listu(prvi);
    brisi_listu(prvi);
    scanf("%d", &levak);
    return 0;
}
