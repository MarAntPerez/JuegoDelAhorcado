#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
 	
 	/*Esta variable guarda la palabra en un arreglo*/
	char palabra[10];
	
	/*Este es el indice de la palabra guardada*/
	palabra[0] = 'M';
	palabra[1] = 'U';
	palabra[2] = 'R';
	palabra[3] = 'C';
	palabra[4] = 'I';
	palabra[5] = 'E';
	palabra[6] = 'L';
	palabra[7] = 'A';
	palabra[8] = 'G';
	palabra[9] = 'O';
	
	/*Esta variable guarda un arreglo para guardar los caracteres que ingrese el usuario*/
	char palabraCopia[10];
	
	/*Este es el indice de los caracteres que ingresara el usuario*/
	palabraCopia[0] = '_';
	palabraCopia[1] = '_';
	palabraCopia[2] = '_';
	palabraCopia[3] = '_';
	palabraCopia[4] = '_';
	palabraCopia[5] = '_';
	palabraCopia[6] = '_';
	palabraCopia[7] = '_';
	palabraCopia[8] = '_';
	palabraCopia[9] = '_';

	/*Esta variable guarda el caracter ingresado por el usuario*/
	char caracterIngresado;
	
	/*Esta variable guarda las vidas del usuario*/
	int contadorVidas = 5;

	/*Esta constante le dice al programa si el usuario encontro alguna letra del arreglo*/
	const int LETRA_ENCONTRADA = 0;
	
	/*Esta constante le dice al programa que el usurio no encontro una letra del arreglo*/
	const int LETRA_NO_ENCONTRADA = 1;
	
	/*Esta constante cambia el vaos de los indices del arreglo cunado el usurio encuentra una letra*/
	const int ARROBA = '@';
	
	/*Esta contante le dice al programa que el usuario ha encontrado todas las letras y por consecuencia ha ganado*/
	const int JUEGO_GANADO = 0;
	
	/*Esta constante le dice al programa que ek usurio no ha encontrado ninguna letra y por ende ha perdido*/
	const int TODAS_LAS_VIDAS_PERDIDAS = 0;
	
	int bandera;
	
	printf("\nLa palabra guardada en memoria tiene diez letras.");
	printf("\n\n\n ---- Tendras 5 vidas, si fallas alguna letra se te iran restando. ---");
	/*Esta bandera le dice al programa que el usuario ha ganado*/
	int banderaJuegoGanado = -1;

	while(banderaJuegoGanado != JUEGO_GANADO && contadorVidas != TODAS_LAS_VIDAS_PERDIDAS){
		printf("\n");
		/*Esta variable itera la palabra con un contador en tres for*/
		int contador;
	    for(contador=0; contador<11; contador++){
	    	char letra = palabraCopia[contador];
	    	printf("%c ", letra);
	    }
	
		/*Esta variable le da el valor de una letra no encontrada a una bandera para despues cambiar su valor a una letra encontrada y guardarla en el segundo arreglo*/
		int banderaLetraEncontrada = LETRA_NO_ENCONTRADA;
		printf("\n\nIngresa una letra(solo mayusculas).");
		scanf(" %c", &caracterIngresado);
		system("cls");
		
		for(contador=0; contador<11; contador++){
			/*Esta variable guarda las letras de la iteracion de la palabra*/
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
		/*Esta variable gurda las letras encontradas*/
 		int contadorLetrasEncontradas = 0;
		for(contador=0; contador<11; contador++){
			/*Esta variable guarda las letras de la iteracion de la palabra y luego las guarda en el segundo arreglo*/
			char letra = palabra[contador]; 
			if(ARROBA==letra){
				contadorLetrasEncontradas++;
			}
		}
		
		
		if(contadorLetrasEncontradas == 10){
			banderaJuegoGanado = JUEGO_GANADO;
			 printf("\n ============= Felicidades ganaste =============");
			 printf("\n La palabra era: ");
			 	for(contador=0; contador<11; contador++){
			 		/*Esta variable guarda las letras de la iteracion de la palabra y las manda al segundo arreglo*/
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
