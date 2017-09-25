#include <stdio.h>
#include <stdlib.h>
#include "animaux.h"
#include "maliste.h"

int main(int argv, char* argc[]){
  ptr_liste maliste=NULL;
  int nb;
  printf("nb d'animaux ?\n");
  scanf("%d", &nb);
  for (int i=0; i<nb ; i++){
    if (!(maliste)){
      ptrStructAnimal item = creerUnAnimal(ptrStructAnimal);
      maliste= add_premier(item);
    }
    else {
      ptrStructAnimal item = creerUnAnimal(ptrStructAnimal);
      add(item, maliste);
    }
  }
}
