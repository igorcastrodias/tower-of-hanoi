#include <stdio.h>
#include <stdlib.h>

void mover(int discos, char origem, char destino, char auxiliar){
    if(discos > 1)
        mover(discos-1,origem,auxiliar,destino);
    printf("Mover disco %d de %c para %c \n", discos,origem,destino);
    if(discos > 1)
        mover(discos-1,auxiliar,destino,origem);
}


int main(int argc, char** argv){
    int discos = 0;

    if(argc<2){
        printf("Favor informar o numero de discos!!\n");
        exit(-1);
    }

    discos = atoi(argv[1]);
    
    printf("Numero de discos %d \n", discos);
    mover(discos, 'A', 'C','B');
}