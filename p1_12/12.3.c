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
  int levak;
  float prosek=0;
  int n=0,i;
  FILE *input, *output;
  Apsolvent a, *svi;
  svi = (Apsolvent* )malloc(1000*sizeof(Apsolvent));
  input = fopen("apsolventi.txt","r");
  output = fopen("luzeri.txt","w");
  while(fscanf(input,"%s %s %d",a.ime,a.prezime, &a.br_ispita)>0){
      prosek += a.br_ispita;
      svi[n] = a;
      n++;
  }
  fclose(input);
  prosek /= n;
  for(i=0;i<n;i++){
      if(svi[i].br_ispita>prosek){
          fprintf(output,"%s %s %d\n",svi[i].ime,svi[i].prezime, svi[i].br_ispita);
      }
  }
  fclose(output);
  printf("%d\n",n);
  printf("%f",prosek);
  scanf("%d",&levak);
  free(svi);
  return 0;
}
