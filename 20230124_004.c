/*20230124_004 Criar e utilizar num programa uma função que receba 
uma sequência de n números e retorne outra sequência só com os números par 
(o comprimento máximo da sequência é 100
pelo que n tem que ser um número menor que 100)*/
#include <stdio.h>
int main () {
    int a = 0;
    int tamanho = 0;
    
    do {
        printf("digite o tamanho da sequencia: ");
        scanf("%d", &tamanho);
    } while (tamanho < 0 || tamanho >= 100);
    
    int i = 0;
    int v[tamanho];

    for(i = 0; i < tamanho; i++) {
        printf("digite um numero: ");
        scanf("%d", &a);
        
        if (a % 2 == 0) { 
            v[i] = a;
        }
    }

    for(i = 0; i < tamanho; i++) {
        if (v[i] != 0) {
            printf("%d ", v[i]);
        }
    }
    return 0;
}
