/* 20230124_006  Criar uma função para ordenar um vetor em ordem ascendente utilizando o algoritmo Selection-Sort. 
Este algoritmo funciona da seguinte forma:
- Percorrer o array comparando os elementos para determinar qual é o menor.
- Intercambiar o elemento com menor valor com o elemento que está na primeira posição.
- Procurar o segundo menor valor e intercambiar com o elemento que está na segunda posição.
- Continuar o algoritmo até que todos os elementos estejam ordenados.
Exemplo:
array=[70,90,1,3,0,100,2]
Primeira execução acha o menor (0) e intercambia com o que está na primeira posição, o resultado é  array=[0,90,1,3,70,100,2]
Segunda execução acha o menor desde a segunda posição até o final do array (1) e intercambia com o que está na segunda posição, o resultado é  array=[0,1,90,3,70,100,2]
Terceira execução acha o menor desde a terceira posição até o final do array (2) e intercambia com o que está na terceira posição, o resultado é  array=[0,1,2,3,70,100,90]
O processo continua até ordenar o vetor.*/
#include <stdio.h>
#include <stdlib.h>

void crescent(int sequence[], int n){

    int smallest, index, aux;

    for (int i=0; i<n; i++){
        smallest = sequence[i];
        index = i;
        for (int j=i+1; j<n; j++){
            if (sequence[j] < smallest){
                smallest = sequence[j];
                index = j;
            }
        }
        if (index != i){
            aux = sequence[i];
            sequence[i] = sequence[index];
            sequence[index] = aux;
        }
    }

}

int main(){
    int n, occurrence[6];

    printf("Digite o tamanho da sequencia:\n");
    scanf("%d", &n);

    int sequence[n];

    printf("digite a sequencia de numeros:\n");

    for (int i=0; i<n; i++){scanf("%d", &sequence[i]);}

    crescent(sequence, n);

    for (int i=0; i<n; i++){printf("%d ", sequence[i]);}

    return 0;
}
