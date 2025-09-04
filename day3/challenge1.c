#include <stdio.h>

int num; 

int main() {

    printf("\n  Table de Multiplication ***\n");

    printf("entrez un nombre >>") ; 
    scanf("%d", &num);  

    for(int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }
    return 0;  
}
