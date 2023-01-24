/*20230124_001 Criar um programa que dada uma sequência de n números a 
imprima na ordem inversa à da leitura.
(o comprimento máximo da sequência é 100 pelo que n tem que ser um número menor que 100)*/

#include<stdio.h>
int main () {
    int v[100];
    int tamanhoN = 0;
    int i = 0;
    int j = 0;
    int a = 0;
    printf("digite o tamanho da sequencia: ");
    scanf("%d", &tamanhoN);
    int n[tamanhoN];
    int tamanho = tamanhoN;
    
    for(i=0; i < tamanho; i++) {
        
        printf("digite um numero: ");
        scanf("%d", &a);
        
        v[i] = a;
        n[tamanhoN - 1] = a;
        
        tamanhoN--;
    }
    
    for(j = 0; j < tamanho; j++) {
        printf("\n%d\n", n[j]);
    }
    return 0;
}
