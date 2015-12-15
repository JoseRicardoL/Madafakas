#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main() {
	char nom[50];
	int edad;
	FILE *ar;
	ar= fopen("Uduario.txt","a");
	if(ar==NULL){
		printf("Error En La Apertura Del Archivo");
	}
	else{
		printf("Digite su nombre:");
		gets(nom);
		printf("Digite su edad:");
		scanf("%d",&edad);
		fprintf(ar,"Nombre: %s\nEdad: %d\n",nom,edad);
	}
	fclose (ar);
	getch();
	return 0;
}
