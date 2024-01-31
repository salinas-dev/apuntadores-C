#include <stdio.h>
#include <stdlib.h>



int main(){
    
    int*x;
    int*z;

    printf("Inserta el valor de Z: ");
    scanf("%d",&z);

    printf("La direccion de X es: %p\n",&x);
    printf("El valor de Z es: %d\n",z);
    printf("La direccion de X es: %p\n",&z);
    printf("El valor de X es: %d/n",x);    
    printf("El valor de X es: %d/n",&x);
    
    return 0;
}