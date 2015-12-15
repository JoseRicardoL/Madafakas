#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#include <conio.h>
#define N 1
typedef struct {
    int clave_pro;
    int exis;
    double precio;
    char nom_pro[200];
}producto;
void alta(producto produ[N]);
void alta(producto produ[N]){
    int i;
    for(i=0;i<N;i++){
        system("cls");
        puts("Ingresa clave del producto");
        scanf("%d",&produ[i].clave_pro);
        puts("Nombre del producto: ");
        fflush(stdin);
        gets(produ[i].nom_pro);
        puts("Precio: ");
        scanf("%lf", &produ[i].precio);
        puts("Existencia: ");
        scanf("%d",&produ[i].exis);
        }
}
void consulta(producto produ[N]);
void consulta(producto produ[N]){
    int i;
    for(i=0;i<N;i++){
        system("cls");
        printf("\nClave: %d",produ[i].clave_pro);
        printf("\nNombre: %s",produ[i].nom_pro);
        printf("\nPrecio: %.2lf",produ[i].precio);
        printf("\nExistencia: %d",produ[i].exis);
        getch();
    }
}
void pesos(producto produ[N]);
void pesos(producto produ[N]){
    int i;
    double tot;
    for(i=0;i<N;i++){
        system("cls");
        tot=produ[i].precio*produ[i].exis;
        printf("Producto %s: %lf",produ[i].nom_pro,tot);
        getch();
    }
}
void letra(producto produ[N]);
void letra(producto produ[N]){
    int i;
    char n;
    system("cls");
    puts("letra del producto a buscar: ");
    fflush(stdin);
    scanf("%c",&n);
    for(i=0;i<N;i++){
        if (produ[i].nom_pro[0]==n){
            printf("\nClave: %d",produ[i].clave_pro);
            printf("\nNombre: %s",produ[i].nom_pro);
            printf("\nPrecio: %.2lf",produ[i].precio);
            printf("\nExistencia: %d",produ[i].exis);
        }
        getch();
    }
}
void existencia(producto produ[N]);
void existencia(producto produ[N]){
    int i;
    for(i=0;i<N;i++){
        system("cls");
        if(produ[i].exis<=10){
            produ[i].exis=produ[i].exis+100;
            printf("El Producto %s tiene una existencia de: %d",produ[i].nom_pro,produ[i].exis);
        }
         
        getch();
    }
}
int main(){
    int op;
    do{
        system("cls");
        producto produ[N];
        printf("\nBienvenido al sistema la 'tienda del gato'");
        printf("\nQue Operacion Desea Realizar:");
        printf("\n1.- Dar De Alta Un Producto");
        printf("\n2.- Consultar La Informacion de los productos");
        printf("\n3.- Valor en pesos de los productos:");
        printf("\n4.- resurtir");
        printf("\n5.- busqueda por letra");
        printf("\n6.- Salir\n");
        scanf("%d", &op);
        switch(op)
        {
            case 1:
                alta(produ);
                break;
            case 2:
                consulta(produ);
                break;
            case 3:
                pesos(produ);
                break;
            case 4:
                existencia(produ);
                break;
            case 5:
                letra(produ);
                break;
            default:
                op=6;
                break;
        }
    }while(op !=6); 
    return 0;
    system("pause");
}
