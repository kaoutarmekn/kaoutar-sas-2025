#include <stdio.h>
#include <string.h>

int main() {
    char texte[] = "Le chat noir dort Le chien joue";
    char *mot;
    int compteur = 0;

    mot = strtok(texte, " ");
    while (mot != NULL) {
        compteur++;
        mot = strtok(NULL, " ");
    }

    printf("Nombre de mots : %d\n", compteur);

    return 0;
}
