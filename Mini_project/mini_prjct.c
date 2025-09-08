#include <stdio.h>
#include <string.h>

int main() {
    char mot[] = "hello";
    char trouve[6] = {'_', '_', '_', '_', '_', '\0'};
    int tentatives = 6;
    char lettre;
    int gagne = 0;

    printf("Bienvenue au jeu de devinette !\n");

    while (tentatives > 0 && !gagne) {
        printf("Mot : %s\n", trouve);
        printf("Entrez une lettre : ");
        scanf(" %c", &lettre);

        int correct = 0;
        for (int i = 0; i < strlen(mot); i++) {
            
        }
    }
    return 0;

}