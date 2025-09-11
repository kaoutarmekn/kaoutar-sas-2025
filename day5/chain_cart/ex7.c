#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char texte[100];
    int i = 0;

    printf("Entrez une chaîne : ");
    fgets(texte, sizeof(texte), stdin);

    if (texte[strlen(texte) - 1] == '\n') {
        texte[strlen(texte) - 1] = '\0';
    }

    while (texte[i] != '\0') {
        if (texte[i] >= 'a' && texte[i] <= 'z') {
            texte[i] = texte[i] - 'a' + 'A';
        }
        i++;
    }

    printf("Chaîne en majuscules (manuelle) : %s\n", texte);

    printf("Entrez une nouvelle chaîne : ");
    fgets(texte, sizeof(texte), stdin);

    if (texte[strlen(texte) - 1] == '\n') {
        texte[strlen(texte) - 1] = '\0';
    }

    i = 0;
    while (texte[i] != '\0') {
        texte[i] = toupper(texte[i]);
        i++;
    }

    printf("Chaîne en majuscules (toupper) : %s\n", texte);

    return 0;
}
