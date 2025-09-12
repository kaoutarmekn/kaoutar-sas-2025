 #include <stdio.h> 
 #include <string.h>

    char etudiant[100] ;
    char cours [50];
    
typedef struct {
    int id;
    char nom[30];
    char prenom[30];
    int age;
    float moyenne;
 }; etudiant ;


 typedef struct {
    char code[10];
    char nom[30];
    int credits;
    float note;
} Cours; 
 etudiant[100];
int nb_etudiants = 0;

 cours[50];
int nb_cours = 0;

int main(){

    if (nb_etudiant >= 100) {
        printf("Limite d'etudiants atteinte.\n");
        return;
    }
    Etudiant e;

printf(" afficher la liste des etudiants : \n\n"); 
 printf("id: "); scanf("%d", &e.id);
    printf("nom: "); scanf("%s", e.nom);
    printf("prenom: "); scanf("%s", e.prenom);
    printf("age: "); scanf("%d", &e.age);
    printf("moyenne: "); scanf("%f", &e.moyenne);  






  



 
}






 
 
 