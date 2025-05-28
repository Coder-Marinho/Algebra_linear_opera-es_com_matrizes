//
// Created by marinho on 27/05/25.
//
#include <stdio.h>

int incremento, matrizA[10][10], matrizB[10][10];
int alocacao(int x, int y);
void apresentacao();

int main() {

    int i, j;
    int indiceX;
    int indiceY;


    printf("insira o valor a ser incrementado: ");
    scanf("%d", &incremento);
    printf("insira o indice da linha e da coluna (respectivamente) a ser incrementado: ");
    scanf("%d, %d", &indiceX, &indiceY);

    alocacao(indiceX, indiceY);
    apresentacao();




    return 0;
}

void apresentacao() {
    for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++) {
            printf("%3d,", matrizA[x][y]);
        }
        printf("\n \t");
        for (int y = 0; y < 10; y++) {
            printf("%3d", matrizB[x][y]);
        }
        printf("\n");
    }
}


int alocacao(int x, int y) {
    matrizA[x][y] = incremento;
    apresentacao();

    return 0;
}
