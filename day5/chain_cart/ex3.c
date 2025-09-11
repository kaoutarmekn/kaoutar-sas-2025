#include <stdio.h>
#include <string.h>

int main() {
    char chaine1[100];
    char chaine2[100];
    char resultat[200];
    int i = 0, j = 0;

    printf("Entrez la première chaîne : ");
    fgets(chaine1, sizeof(chaine1), stdin);

    printf("Entrez la deuxième chaîne : ");
    fgets(chaine2, sizeof(chaine2), stdin);

    while (chaine1[i] != '\0') {
        resultat[i] = chaine1[i];
        i++;
    }
    while (chaine2[j] != '\0') {
        resultat[i] = chaine2[j];
        i++;
        j++;
    }
    resultat[i] = '\0';

    printf("\nConcaténation manuelle : %s", resultat);

    if (chaine1[strlen(chaine1) - 1] == '\n') chaine1[strlen(chaine1) - 1] = '\0';
    if (chaine2[strlen(chaine2) - 1] == '\n') chaine2[strlen(chaine2) - 1] = '\0';

    strcpy(resultat, chaine1);
    strcat(resultat, chaine2);

    printf("Concaténation avec strcat() : %s\n", resultat);

    return 0;
}
