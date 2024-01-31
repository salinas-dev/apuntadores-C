#include<stdio.h>
#include<stdlib.h>

int main(){
    char cadena[10];
    printf("\nUn int ocupa %d bytes",sizeof(int));
    printf("\nUn char ocupa %d bytes",sizeof(char));
    printf("\nUn float ocupa %d bytes",sizeof(float));
    printf("\nUn double ocupa %d bytes",sizeof(double));
    printf("\nUn cadena ocupa %d bytes",sizeof(cadena));

    return 0;
}