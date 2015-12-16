#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int get_menu_choice(void);
int main(int argc, char *argv[]) 
{
	system("color f4");
	int choice,x=0;
	do{
		choice=get_menu_choice();
		printf("You Chose Menu Option : %d",choice);
		if(choice==4)
		{
			system("color 4f");
			printf("\nbye");
			x=1;
		}	
	
	}while(x!=1);
}
int get_menu_choice(void)
{
	int selection=0;
	do{
		printf("\n");
		printf("\n1 - Add a Record");
		printf("\n2 - Change a Record");
		printf("\n4 - Quit");
		printf("\nEnter a selection : ");
		scanf("%d",&selection);
		if(selection<1 || selection>4)
		{
			printf("\nOpcion no valida intente digitando de nuevo");
		}
	}while(selection<1 || selection>4);
	return selection;
}

