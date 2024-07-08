#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


int menu();

int main (){

	int hora, minutos, velocidad, codCamion, op;
	
	op=menu();
	
	do{
		
		switch(op){
			case 1:
				printf("Ingresar datos:\n");
				printf("Ingresar Horas:\n");
				printf("Ingresar Minutos:\n");
				printf("Ingresar datos:\n");
				
				break;
			case 2:
				
				
				break;
		}
		
		
		
		
		
	}while(op!=3);





}

int menu(){
	int opc;
	printf("\n1. Ingresar y cargar vectores con datos de simulacion\n");
	printf("\n2. Emitir reportes\n");
	printf("\n3. Salir\n");
	
	return opc;
}
