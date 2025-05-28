//
// Created by marinho on 27/05/25.
//
#include <stdio.h>

int incremento, matrizA[10][10];
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int alocacao(int x, int y);
void apresentacao();

int main() {

    int i, j;
    int indiceX;
    int indiceY;

    //int matrizB[10][10];
    printf("insira o valor a ser incrementado: ");
    scanf("%d", &incremento);
    printf("insira o indice da linha e da coluna (respectivamente) a ser incrementado: ");
    scanf("%d, %d", &indiceX, &indiceY);

    alocacao(indiceX, indiceY);
    apresentacao();
    //std::cout << "Hello and welcome to " << lang << "!\n";



    return 0;
}

void apresentacao() {
    for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++) {
            printf("%3d", matrizA[x][y]);
        }
        printf("\n");
    }
}


int alocacao(int x, int y) {
    matrizA[x][y] = incremento;
    apresentacao();

    return 0;
}
