#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
 	
	char palabra[4];
	
	palabra[0] = 'A';
	palabra[1] = 'U';
	palabra[2] = 'T';
	palabra[3] = 'O';
	
	char palabraCopia[4];
	
	palabraCopia[0] = '_';
	palabraCopia[1] = '_';
	palabraCopia[2] = '_';
	palabraCopia[3] = '_';

	char caracterIngresado;
	
	int contadorVidas = 3;

	const int LETRA_ENCONTRADA = 0;
	const int LETRA_NO_ENCONTRADA = 1;
	const int ARROBA = '@';
	const int JUEGO_GANADO = 0;
	const int TODAS_LAS_VIDAS_PERDIDAS = 0;
	
	int bandera;
	
	printf("\nLa palabra guardada en memoria tiene cuatro letras.");
	printf("\n\n\n ---- Tendras 3 vidas, si fallas alguna letra se te iran restando. ---");
	int banderaJuegoGanado = -1;

	while(banderaJuegoGanado != JUEGO_GANADO && contadorVidas != TODAS_LAS_VIDAS_PERDIDAS){
		printf("\n");
		int contador;
	    for(contador=0; contador<4; contador++){
	    	char letra = palabraCopia[contador];
	    	printf("%c ", letra);
	    }
	
		int banderaLetraEncontrada = LETRA_NO_ENCONTRADA;
		printf("\n\nIngresa una letra(solo mayusculas).");
		scanf(" %c", &caracterIngresado);
		system("cls");
		
		for(contador=0; contador<4; contador++){
			char letra = palabra[contador]; 
			if(caracterIngresado==letra){
				banderaLetraEncontrada = LETRA_ENCONTRADA;
				palabra[contador] = ARROBA;
				palabraCopia[contador] = letra;
				break;
			}
		}
		
		if(banderaLetraEncontrada == LETRA_ENCONTRADA){
			printf("\nAcertaste la letra %c.", caracterIngresado);	
		}else if(banderaLetraEncontrada == LETRA_NO_ENCONTRADA){
		    printf("\nLa letra ingresada %c no pertenece a la palabra.\n", caracterIngresado);
		    contadorVidas--;
		    printf("\nPerdiste una vida, te restan %i", contadorVidas);
		}
 		int contadorLetrasEncontradas = 0;
		for(contador=0; contador<4; contador++){
			char letra = palabra[contador]; 
			if(ARROBA==letra){
				contadorLetrasEncontradas++;
			}
		}
		
		
		if(contadorLetrasEncontradas == 4){
			banderaJuegoGanado = JUEGO_GANADO;
			 printf("\n ============= Felicidades ganaste =============");
			 printf("\n La palabra era: ");
			 	for(contador=0; contador<4; contador++){
					char letra = palabraCopia[contador];
					printf("%c", letra); 
					
			}
		}
		
	

	}
	
	if(contadorVidas == 0){
		printf("\nPerdiste todas tus vidas y perdiste el juego\n");
	}
	
	return 0;
}
