#include <stdio.h>
#include <stdlib.h>
#include "maliste.h"

struct liste{
  int val;
  ptr_liste next;
};

void add(int num, ptr_liste maliste);
ptr_liste add_premier(int num);
void afficher(ptr_liste maliste);
void del(int num, ptr_liste maliste);

void del(int num, ptr_liste maliste){
  ptr_liste precedent;
  while (maliste->next && maliste->val != num) {
    precedent=maliste;
    maliste=maliste->next;
  }
  if (!(maliste->next)) {
    printf("valeur %d pas dans la liste", num);
    return;
  }
  precedent->next=maliste->next;
  free(maliste);
}

ptr_liste add_premier(int num){
  ptr_liste temp, courant;
  temp=(ptr_liste)malloc(sizeof(struct liste));
  temp->val=num;
  temp->next==NULL;
  return(temp);
}

void add(int num, ptr_liste maliste){
  ptr_liste temp, courant;
  temp=(ptr_liste)malloc(sizeof(struct liste));
  temp->val=num;
  temp->next==NULL;
  while (maliste->next) {
    maliste=maliste->next;
  }
  maliste->next=temp;
}

void afficher(ptr_liste maliste){
  while (maliste) {
    printf("la liste contient %d\n", maliste->val);
    maliste=maliste->next;
  }
}
