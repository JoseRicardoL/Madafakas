#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;
int main(void)
{
	/* inicializacion de la variable con fin de ahorro de codigo*/
	int t=0;
	/* Declaracion del arreglo con valores pre definidos*/
	int holis[t];
		holis[0]=2;
		holis[1]=4;
		holis[19]=8;	
	cin>>t;
	/* impresion de los elementos contenidos en el arreglo usando un ciclo con con una vuelta de sobre escritura de carro con un timer definido*/
	for(int i=0;i<t;i++){
		cout<<"\r"<<holis[i];
		Sleep(1000);
	}
	printf("\nTamaño: %d",sizeof(holis));
	
	/* Declaracion del arreglo tipo char con valores pre definidos en letras , que se detiene si encuentra un valor nulo*/
	char cad[]={'h','o','l','a','\0','j','u','a','n','\0'};
	cout<<"\n"<<cad;
	return 0;
}
