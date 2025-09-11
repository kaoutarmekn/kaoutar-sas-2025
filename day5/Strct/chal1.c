#include <stdio.h>

struct personne {
    char nom[20];
    char prenom[20];
    int age;
};
int main() {
    struct personne person1 = {"elmeknassi","kaoutar",23};
    printf("%s %s a %d ans\n",person1.nom,person1.prenom, person1.age);
}