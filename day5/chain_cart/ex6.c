#include <stdio.h>
#include <string.h>

int main() {
    char texte[100];
    char caractere;
    int i = 0, compteur = 0;

    printf("Entrez une chaîne : ");
    fgets(texte, sizeof(texte), stdin);

    if (texte[strlen(texte) - 1] == '\n') {
        texte[strlen(texte) - 1] = '\0';
    }

    printf("Entrez un caractère à rechercher : ");
    scanf(" %c", &caractere);

    while (texte[i] != '\0') {
        if (texte[i] == caractere) {
            compteur++;
        }
        i++;
    }

    printf("Le caractère '%c' apparaît %d fois.\n", caractere, compteur);

    return 0;
}
