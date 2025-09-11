#include <stdio.h>
#include <string.h>
typedef struct {
    char titre[50];;
    char auteur[30];
    int annee;
} livre;
void variable(char titre[], char auteur[],int annee) {
   livre livre1;
   strcpy(livre1.titre,titre);
   strcpy(livre1.auteur,auteur);
   livre1.annee = annee;
   printf("le livre %s, ecrive par %s en %d",livre1.titre,livre1.auteur,livre1.annee);
}
int main() {
       variable("the rich man","ilun musk",2020);
}