#include <stdio.h>

int main()
{
    int num , facteur;
    printf("\n*** Multiplication des Elements ***\n\n");
    printf("Entrez le nombre des elements de Tableau >> ");
    scanf("%d",&num);
    int T[num];
    printf("Remplissez le Tableau\n");
    for( int i = 0 ; i < num ; i++ )
    {
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);
    }
    printf("Entrez le facteur de multiplication >> ");
    scanf("%d",&facteur);
    printf("Le Resultat\n");
    for( int i = 0 ; i < num ; i++ )
    {
        printf("%d * %d = %d\n",T[i],facteur,T[i]*facteur);
    }

    return 0;
}