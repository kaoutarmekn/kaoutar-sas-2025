#include <stdio.h>

struct etudiant {
    char nom[20];
    char prenom[20];
    int notes[4];
};
int main() {
    struct etudiant etudiant1;
   printf("Entrer votre nom: ");
   scanf("%s",&etudiant1.nom);

   printf("Entrer votre prenom: ");
   scanf("%s",&etudiant1.prenom);

   printf("Entrer votre notes:\n");

   for (int i =0; i < 4;i++) {

    printf("==>Entrer votre note %d: ", i+1);
    scanf("%d", &etudiant1.notes[i]);
   }
   
   printf("l'etudiant %s %s", etudiant1.nom,etudiant1.prenom);

   for (int i =0; i < 4;i++) {
    printf("note %d = %d, ", i+1,etudiant1.notes[i]);
   }
}