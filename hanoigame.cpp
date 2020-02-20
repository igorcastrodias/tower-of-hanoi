#include <stdio.h>

void mover(int discos, char origem, char destino, char auxiliar){
    if(discos > 1)
        mover(discos-1,origem,auxiliar,destino);
    printf("Mover disco %d de %c para %c \n", discos,origem,destino);
    if(discos > 1)
        mover(discos-1,auxiliar,destino,origem);
}


int main(void){
    int discos = 3;
    printf("Numero de discos %d \n", discos);
    mover(discos, 'A', 'C','B');
}