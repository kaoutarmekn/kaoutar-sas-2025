#include <stdio.h>

int main() {
    char chaine1[100];
    char chaine2[100];
    int i = 0, identiques = 1;

    printf("Entrez la première chaîne : ");
    fgets(chaine1, sizeof(chaine1), stdin);

    printf("Entrez la deuxième chaîne : ");
    fgets(chaine2, sizeof(chaine2), stdin);

    while (chaine1[i] != '\0' || chaine2[i] != '\0') {
        if (chaine1[i] != chaine2[i]) {
            identiques = 0;
            break;
        }
        i++;
    }

    if (identiques) {
        printf("Les chaînes sont identiques.\n");
    } else {
        printf("Les chaînes sont différentes.\n");
    }

    return 0;
}
