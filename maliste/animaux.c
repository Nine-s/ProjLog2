/*ptr_animal creerAnimal(){
  ptr_animal item=(ptr_animal)malloc(sizeof(structAnimal))
  *****
  return item;
}
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "animaux.h"
#define MAX_CHAR 10

struct Animal{
  int poids;
  char* nom;
};

/*
int main(int argv, char* argc[]){
    int reponse;
    ptrStructAnimal animalerie[MAX_ANIMAUX];
    void afficheMenu();
    void afficheAnimalerie(ptrStructAnimal animalerie[MAX_ANIMAUX]);
    void creerAnimalerie(ptrStructAnimal animalerie[MAX_ANIMAUX]);
    while(1){
      afficheMenu();
      scanf("%d", &reponse);
      switch(reponse){
        case 1 : creerAnimalerie(animalerie); break;
        case 2 : afficheAnimalerie(animalerie); break;
        case 0 : printf("bye"); exit(0);
        default : printf("mauvaise réponse");
    }
  }
}*/
  ptrStructAnimal creerUnAnimal(ptrStructAnimal){
    int i; char chaine[25]; int poids;
      printf("nom animal\n");
      scanf("%s", chaine);
      printf("poids animal\n");
      scanf("%d", &poids);
      ptrStructAnimal item=(ptrStructAnimal)malloc(sizeof(struct Animal));
      item->nom=(char*)malloc(sizeof(strlen(chaine)));
      strcpy(item->nom, chaine);
      item->poids=poids;
      return item;
  }
  /*
  void afficheAnimalerie(ptrStructAnimal animalerie[MAX_ANIMAUX]){
    int i;
    for (i=0; i<MAX_ANIMAUX; i++){
      printf("nom: %s, poids:%d\n", animalerie[i]->nom, animalerie[i]->poids);
    }
  }
*/
/*  void afficheMenu(){
    printf("Que faire ?\n1: creer animalerie\n2: afficher animalerie\n" );
  }
*/
