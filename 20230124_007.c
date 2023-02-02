/*20230124_007 Tentando descobrir se um dado era viciado, 
um dono de cassino o lançou n vezes.
Dados os n resultados dos lançamentos, 
determinar o número de ocorrências de cada face.*/

#include <stdio.h>
int main () {
    int a = 0;
    int n = 0;
    
    printf("digite n: ");
    scanf("%d", &n);
    
    int i = 0;
    int v[n];
    int conta1 = 0; 
    int conta2 = 0; 
    int conta3 = 0;
    int conta4 = 0; 
    int conta5 = 0;
    int conta6 = 0;
    
    for(i = 0; i < n; i++) {
        printf("digite um numero: ");
        scanf("%d", &a);
        v[i] = a;
        if (a == 1) {
            conta1++;
        }
        if (a == 2) {
            conta2++;
        }
        if (a == 3) {
            conta3++;
        }
        if (a == 4) {
            conta4++;
        }
        if (a == 5) {
            conta5++;
        }
        if (a == 6) {
            conta6++;
        }
    }
    printf("numero de vezes que saiu 1: %d\n", conta1);
    printf("numero de vezes que saiu 2: %d\n", conta2);
    printf("numero de vezes que saiu 3: %d\n", conta3);
    printf("numero de vezes que saiu 4: %d\n", conta4);
    printf("numero de vezes que saiu 5: %d\n", conta5);
    printf("numero de vezes que saiu 6: %d\n", conta6);
    return 0;
}
