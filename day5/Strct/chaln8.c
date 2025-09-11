#include <stdio.h>
#include <math.h>
struct cercle {
    float rayon;
};
int calcAir(struct cercle c) {
    return pow(c.rayon,2) * 3.14;
}
int main() {
    struct cercle cercle1;
    printf("Entrer le rayon de cercle: ");
    scanf("%f",&cercle1.rayon);
    float air = calcAir(cercle1);
    printf("l'air de cercle est: %.2f", air);
}