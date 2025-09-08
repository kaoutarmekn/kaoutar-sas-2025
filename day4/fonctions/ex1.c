#include <stdio.h>

int somme( int a, int b){

    return a + b;
}
int main(){

    int a, b, resultat; 
    printf("entrez le premier nombre >>>");
    scanf("%d" ,&a); 

    printf("entrez le deuxieme nombre >>>");
    scanf("%d" ,&b);

    resultat = somme(a,b);

    printf(" le resultat >>> %d", resultat);

    return 0;
}