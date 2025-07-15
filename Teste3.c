#include <stdio.h>
int main () {
    int n1, n2;
    float media;
    printf("Insira a primeira nota: "); scanf("%d", &n1);
    printf("Insira a segunda nota: "); scanf("%d", &n2);

    media = n1+n2/2.0;
    printf("A sua média foi de: %.2f \n", media);

    if (media < 5){
        printf("Aluno Reprovado");
    }
    else if (media <= 7){
        printf("Aluno em Recuperação");
    }
    else {
        printf("Aluno Aprovado");
    }
    return 0;
}