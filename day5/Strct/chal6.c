#include <stdio.h>
#include <strings.h>
typedef struct{
    char nom[20];
    float prix;
    int quantite;
} produit;

int main() {
    produit produit1[3];
    for (int i =0; i < 3; i++) {
        printf("Entrer le nom de produit: ");
        fgets(produit1[i].nom,20,stdin);
        produit1[i].nom[strcspn(produit1[i].nom,"\n")] = '\0';
        printf("Entrer le prix de produit: ");
        scanf("%f",&produit1[i].prix);
        getchar();
        printf("Entrer la quantite de produit: ");
        scanf("%d",&produit1[i].quantite);
        getchar();
    }
    for (int i = 0; i < 3;i++) {
        printf("==>Le produit %s: %d piece a prix de %.2fDH.\n",produit1[i].nom,produit1[i].quantite,produit1[i].prix);
    }
}