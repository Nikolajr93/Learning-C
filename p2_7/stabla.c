#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct cvor{
    int podatak;
    struct cvor *levo;
    struct cvor *desno;
} cvor;

void pisi_listu(cvor *prvi){
    while(prvi != NULL){
        printf("%d ",prvi->podatak);
        prvi = prvi->sledeci;
    }
}

void brisi_listu(cvor *prvi){
    if(prvi != NULL){
        brisi_listu(prvi->sledeci);
        free(prvi);
    }
}

cvor *dodaj_na_pocetak(cvor *prvi, int b){
    cvor *novi = (cvor*)malloc(sizeof(cvor));
    novi->podatak = b;
    novi->sledeci = prvi;
    return novi;
}

cvor *kreiraj_listu(int n){
    int i,a;
    cvor *lista = NULL;
    for(i=0;i<n;i++){
        scanf("%d",&a);
        lista = dodaj_na_pocetak(lista,a);
    }
    return lista;
}

cvor *izvadi_sa_pocetka(cvor *prvi){
    printf("%d",prvi->podatak);
    cvor *novi = prvi;
    prvi = prvi->sledeci;
    free(novi);
    return prvi;
}

int main(){
    int levak;
    cvor *prvi= NULL;
    int n;
    scanf("%d",&n);
    prvi = kreiraj_listu(n);
    pisi_listu(prvi);
    izvadi_sa_pocetka(prvi);
    printf("\n");
    brisi_listu(prvi);
    pisi_listu(prvi);
    scanf("%d",&levak);
    //brisi_listu(prvi);
    return 0;
}
