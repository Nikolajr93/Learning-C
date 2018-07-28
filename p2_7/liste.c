#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

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

cvor *dodaj_na_pocetak(cvor *prvi, int b){
    cvor *novi = (cvor*)malloc(sizeof(cvor));
    (*novi).podatak = b;
    (*novi).sledeci = prvi;
    return novi;
}

cvor *izvadi_sa_pocetka(cvor *prvi){
    if(prvi){
        printf("%d",(*prvi).podatak);
        cvor *novi = (*prvi).sledeci;
        free(prvi);
        return novi;
    }
    else
        return prvi;
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

int main(){
    int i, n, levak;
    cvor *prvi = NULL;
    /*for(i=0; i<5; i++)
        prvi = dodaj_na_pocetak(prvi, i*i);*/
    scanf("%d",&n);
    prvi = kreiraj_listu(n);
    pisi_listu(prvi);
    izvadi_sa_pocetka(prvi);
    printf("\n");
    pisi_listu(prvi);
    printf("\n");
    izvadi_sa_pocetka(prvi);
    pisi_listu(prvi);
    brisi_listu(prvi);
    scanf("%d", &levak);
    return 0;
}
