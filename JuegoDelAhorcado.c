#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	// palabra guardada x
	// usuario sabe de cuantas letras x
	// solicitar una letra mayucula x
	// comparar la letra ingresada con las letras guardadas.
	// mostrearle que letras si le atino
	// restandole vida si falla x
	// si adivina todas gano x
	// si se le terminan las vidas le decimos que perdio x
	// 
 	
	char palabra[4];
	
	palabra[0] = 'A';
	palabra[1] = 'U';
	palabra[2] = 'T';
	palabra[3] = 'O';
	
	char caracterIngresado;
	
	int contadorVidas = 3;
	
	int banderaGano = -8;
	int banderaPerdio = -9;
	
	int bandera;
	
	
	while(contadorVidas != 0){
		 printf("\nrestando vidas %i", contadorVidas--);
	}
	

	
	if(contadorVidas == 0){
		bandera = banderaPerdio;
	}else{
		bandera = banderaGano;
	}
	
	if(bandera == banderaGano){
		printf("\nFelicidades ganaste");
	}else if(bandera == banderaPerdio){
		printf("\nPerdiste todas tus vidas y perdiste el juego\n");
	}
	
	
	
	printf("La palabra guardada en memoria tiene cuatro letras.");
	printf("\nTendras 3 vidas, si fallas alguna letra se te iran restando.");
	printf("\nIngresa una letra(solo mayusculas).");
	/*
	scanf("%c", &caracterIngresado);
	printf("%c hola", caracterIngresado);
	
	for(contadorVidas=3; contadorVidas=0; contadorVidas--){
		printf("\nIngresa una letra(solo mayusculas).");
		scanf("%c", &caracterIngresado);
		printf("%c", caracterIngresado);
		if(caracterIngresado==palabra[0] || caracterIngresado==palabra[1]){
			printf("Acertaste!!!");
		}else{
			printf("Error...");
		}
	}*/

	
	
	return 0;
}
