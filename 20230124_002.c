/*20230124_002 Criar e utilizar num programa uma função que receba uma sequência de n números e
a imprima na ordem inversa. (o comprimento máximo da sequência é 100 pelo que n tem que ser um número menor que 100)*/
#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 100

void imprimirInversa(int v[], int tamanho);
int main() {
    int v[TAMANHO];
    int num;
    int i;
    printf ("Quantidade de numeros: ");
    scanf("%d",&num);
    for (i = 0; i < num; i++){
        printf("Digite o %d numero: ", i+1);
        scanf ("%d", &v[i]);
    }
    imprimirInversa(v,num);
    return 0;
}

void imprimirInversa(int v[], int tamanho) {
    int i;
    for (i=tamanho-1; i>=0; i--){
        printf(" %d", v[i]);
    }
}
