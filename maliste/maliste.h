#ifndef __MALISTE__
#define __MALISTE__

typedef struct liste * ptr_liste;
extern void add(int num, ptr_liste maliste);
extern ptr_liste add_premier(int num);
extern void afficher(ptr_liste maliste);
extern void del(int num, ptr_liste maliste);

#endif
