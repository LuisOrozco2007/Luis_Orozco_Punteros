#include <stdio.h>

int suma(int a, int b);
int sumaref(int *ptra, int *ptrb);
int restar_Orozco(int *ptra, int *ptrb);

int main (int argc, char *argv[]) {
    int a,b;

    printf("Ingrese el primer numero: ");
    scanf("%d",&a);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&b);
    printf("El resultado es: %d\n", suma(a,b)); //Paso de parametros
    printf("El resultado es: %d\n", sumaref(&a,&b));
    printf("La resta es de: %d", restar_Orozco(&a, &b));
    return 0;
}

int suma(int a, int b){
    return a+b;
}
int sumaref(int *ptra, int *ptrb){
    return *ptra + *ptrb;
}
int restar_Orozco(int *ptra, int *ptrb){
    return *ptra - *ptrb;
}