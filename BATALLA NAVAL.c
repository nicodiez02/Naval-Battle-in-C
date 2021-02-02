#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
	
	/*VARIABLES*/
	char M1[10][10], M2[10][10];
	char M3[10][10], M4[10][10];
	int i, j, fila, columna, resultado1, resultado2;
	char respuesta[12];
	int contador = 1, contador2 = 1, contador3 = 1, contador4 = 1, acumulador_p = 4, acumulador_s = 3, acumulador_d = 2, comprobador = 0;
	int submarinos, acorazados, estetica, ataquef,ataquec, victoria1 = 0, victoria2 = 0, turnos_jug1 = 0, turnos_jug2 = 0;
	int acumulador_p1 = 4, acumulador_s1 = 3, acumulador_d1 = 2;	
	
	/*JUGADOR 1 - POSICIONAMIENTO*/
	
	printf("BIENVENIDO JUGADOR 1\n");
	printf("A continuacion se muestra su tablero: \n");
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			M1[i][j] = 'O';
		}
	}
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			M2[i][j] = 'O';
		}
	}
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			printf(" %c", M1[i][j]);
		}
		printf("\n");
	}
	
	
	
	printf("Coloque su Portaaviones\n");
	
	printf("Ingrese la fila: ");
	scanf("%i", &fila);
	printf("Ingrese la columna: ");
	scanf("%i",&columna);

	if(columna == 9 || columna == 8){
	resultado1 = fila - 4;
	resultado2 = columna - 4;
	for(i = resultado1; i < fila; i++){
		for(j = resultado2; j < columna; j++){
			M2[fila][columna] = '4';
			columna--;
		}
	}
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			printf(" %c", M2[i][j]);
		}
		printf("\n");
	}	
	}else{	
	resultado1 = fila + 4;
	resultado2 = columna + 4;
	for(i = fila; i < resultado1; i++){
		for(j = columna; j < resultado2; j++){
			M2[fila][columna] = '4';
			columna++;		
		}	
	}
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			printf(" %c", M2[i][j]);
		}
		printf("\n");
	}
}
	
	printf("Coloque sus destructores\n");
	
	do{
	estetica = 1;
	printf("Colocando destructor numero %i\n",estetica);
	estetica++;
	printf("Ingrese la fila: ");
	scanf("%i", &fila);
	printf("Ingrese la columna: ");
	scanf("%i",&columna);
	
	if(M2[fila][columna] == 'O' && comprobador == 0){
		comprobador++;
	}else{
		printf("Esa posicion ya esta ocupada, intentelo nuevamente");
	}
	if(comprobador == 1){
	if(columna == 9 || columna == 8){
	resultado1 = fila - 2;
	resultado2 = columna - 2;
	for(i = resultado1; i < fila; i++){
		for(j = resultado2; j < columna; j++){
			M2[fila][columna] = '2';
			columna--;	
		}
	}
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			printf(" %c", M2[i][j]);
		}
		printf("\n");
	}
	}else{
	resultado1 = fila + 2;
	resultado2 = columna + 2;
	for(i = fila; i < resultado1; i++){
		for(j = columna; j < resultado2; j++){
			M2[fila][columna] = '2';
			columna++;	
		}
	}
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			printf(" %c", M2[i][j]);
		}
		printf("\n");
	}
		
	}
	contador++;
}
	}while(contador <= 3);

	contador = 0;
		
	printf("A continuacion, disponga las posiciones de sus fragatas: \n");
	
		do{
	estetica = 1;
	printf("Colocando fragata numero %i\n",estetica);
	estetica++;
	printf("Ingrese la fila: ");
	scanf("%i", &fila);
	resultado1 = fila + 1;
	printf("Ingrese la columna: ");
	scanf("%i",&columna);
	resultado2 = columna + 1;
	
	if(M2[fila][columna] == 'O' && comprobador == 0){
		comprobador++;
	}else{
		printf("Esa posicion ya esta ocupada, intentelo nuevamente");
	}
	if(comprobador == 1){
	if(M2[fila][columna] == 'O' && comprobador == 0){
		comprobador++;
	}else{
		printf("Esa posicion ya esta ocupada, intentelo nuevamente");
	}
	if(comprobador == 1){
	for(i = fila; i < resultado1; i++){
		for(j = columna; j < resultado2; j++){
			M2[fila][columna] = '1';
			columna++;	
		}
	}
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			printf(" %c", M2[i][j]);
		}
		printf("\n");
	}
	contador2++;
	}
}
	}while(contador2 <= 2);
	
	
	printf("\n A continuacion dispondra de sus acorazados/submarinos \n");
	printf("¿Cuantos submarinos desea colocar? Tener en cuenta que tiene hasta 3 espacios disponibles\n");
	scanf("%i", &submarinos);
	
	while(submarinos > 0 && submarinos <= 3 && contador3 <= submarinos){
			estetica = 1;
			printf("Colocando submarino numero %i \n", estetica);
			estetica++;
			printf("Ingrese la fila: ");
			scanf("%i", &fila);
			
			printf("Ingrese la columna: ");
			scanf("%i",&columna);
		
			
			if(columna == 9){
			resultado1 = fila - 3;
			resultado2 = columna - 3;
			for(i = resultado1; i < fila; i++){
				for(j = resultado2; j < columna; j++){
				M2[fila][columna] = '3';
				columna--;	
		}
	}
			for(i = 0; i < 10; i++){
				for(j = 0; j < 10; j++){
				printf(" %c", M2[i][j]);
			}	
			printf("\n");
			}
		}else{
			resultado1 = fila + 3;
			resultado2 = columna + 3;
			for(i = fila; i < resultado1; i++){
				for(j = columna; j < resultado2; j++){
				M2[fila][columna] = '3';
				columna++;	
		}
	}
			for(i = 0; i < 10; i++){
				for(j = 0; j < 10; j++){
				printf(" %c", M2[i][j]);
			}	
			printf("\n");
			}
			
		}
			contador3++;
		}
	
	if(submarinos == 0){
		printf("Colocara 3 acorazados\n");
		do{
			estetica = 1;
			printf("Colocando acorazado numero %i \n", estetica);
			estetica++;
			printf("Ingrese la fila: ");
			scanf("%i", &fila);
			printf("Ingrese la columna: ");
			scanf("%i",&columna);
			
			
			if(columna == 9){
			resultado1 = fila - 3;
			resultado2 = columna - 3;
			for(i = resultado1; i < fila; i++){
				for(j = resultado2; j < columna; j++){
				M2[fila][columna] = '3';
				columna--;	
				}
			}
			for(i = 0; i < 10; i++){
				for(j = 0; j < 10; j++){
				printf(" %c", M2[i][j]);
				}	
			printf("\n");
			}
		}else{
			resultado2 = columna + 3;
			resultado1 = fila + 3;
			for(i = fila; i < resultado1; i++){
				for(j = columna; j < resultado2; j++){
				M2[fila][columna] = '3';
				columna++;	
		}
	}
			for(i = 0; i < 10; i++){
				for(j = 0; j < 10; j++){
				printf(" %c", M2[i][j]);
			}	
			printf("\n");
			}
		}
			contador4++;
		}while(contador4 <= 3);
		
	}else if(submarinos == 1){
		printf("Colocara 2 acorazados\n");
		do{
			estetica = 1;
			printf("Colocando acorazado numero %i \n",estetica);
			estetica++;
			printf("Ingrese la fila: ");
			scanf("%i", &fila);
			printf("Ingrese la columna: ");
			scanf("%i",&columna);
			
			
			if(columna == 9){
			resultado1 = fila - 3;
			resultado2 = columna - 3;
			for(i = resultado1; i < fila; i++){
				for(j = resultado2; j < columna; j++){
				M2[fila][columna] = '3';
				columna--;	
				}
			}
			for(i = 0; i < 10; i++){
				for(j = 0; j < 10; j++){
				printf(" %c", M2[i][j]);
				}	
			printf("\n");
			}
		}else{
			resultado2 = columna + 3;
			resultado1 = fila + 3;
			for(i = fila; i < resultado1; i++){
				for(j = columna; j < resultado2; j++){
				M2[fila][columna] = '3';
				columna++;	
		}
	}
			for(i = 0; i < 10; i++){
				for(j = 0; j < 10; j++){
				printf(" %c", M2[i][j]);
			}	
			printf("\n");
			}
		}
			contador4++;
		}while(contador4 <= 2);
		
	}else if(submarinos == 2){
		printf("Colocara 1 acorazado\n");
		do{
			printf("Colocando acorazado \n");
			printf("Ingrese la fila: ");
			scanf("%i", &fila);
		
			printf("Ingrese la columna: ");
			scanf("%i",&columna);
		
			if(columna == 9){
			resultado1 = fila - 3;
			resultado2 = columna - 3;
			for(i = resultado1; i < fila; i++){
				for(j = resultado2; j < columna; j++){
				M2[fila][columna] = '3';
				columna--;	
				}
			}
			for(i = 0; i < 10; i++){
				for(j = 0; j < 10; j++){
				printf(" %c", M2[i][j]);
				}	
			printf("\n");
			}
		}else{
			resultado2 = columna + 3;
			resultado1 = fila + 3;
			for(i = fila; i < resultado1; i++){
				for(j = columna; j < resultado2; j++){
				M2[fila][columna] = '3';
				columna++;	
		}
	}
			for(i = 0; i < 10; i++){
				for(j = 0; j < 10; j++){
				printf(" %c", M2[i][j]);
			}	
			printf("\n");
			}
		}
			contador4++;
		}while(contador4 <= 1);
	}
	
	system("cls");
	
	/*JUGADOR 2 - POSICIONAMIENTO*/
	
	printf("BIENVENIDO JUGADOR 2\n");
	printf("A continuacion se muestra su tablero: \n");
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			M3[i][j] = 'O';
		}
	}
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			M4[i][j] = 'O';
		}
	}
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			printf(" %c", M3[i][j]);
		}
		printf("\n");
	}
	
	
	
	printf("Coloque su Portaaviones\n");
	
	printf("Ingrese la fila: ");
	scanf("%i", &fila);
	printf("Ingrese la columna: ");
	scanf("%i",&columna);

	if(columna == 9){
	resultado1 = fila - 4;
	resultado2 = columna - 4;
	for(i = resultado1; i < fila; i++){
		for(j = resultado2; j < columna; j++){
			M4[fila][columna] = '4';
			columna--;
		}
	}
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			printf(" %c", M4[i][j]);
		}
		printf("\n");
	}	
	}else{	
	resultado1 = fila + 4;
	resultado2 = columna + 4;
	for(i = fila; i < resultado1; i++){
		for(j = columna; j < resultado2; j++){
			M4[fila][columna] = '4';
			columna++;		
		}	
	}
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			printf(" %c", M4[i][j]);
		}
		printf("\n");
	}
}
	
	printf("Coloque sus destructores\n");
	
	do{
	estetica = 1;
	printf("Colocando destructor numero %i\n",estetica);
	estetica++;
	printf("Ingrese la fila: ");
	scanf("%i", &fila);
	printf("Ingrese la columna: ");
	scanf("%i",&columna);
	
	
	if(columna == 9){
	resultado1 = fila - 2;
	resultado2 = columna - 2;
	for(i = resultado1; i < fila; i++){
		for(j = resultado2; j < columna; j++){
			M4[fila][columna] = '2';
			columna--;	
		}
	}
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			printf(" %c", M4[i][j]);
		}
		printf("\n");
	}
	}else{
	resultado1 = fila + 2;
	resultado2 = columna + 2;
	for(i = fila; i < resultado1; i++){
		for(j = columna; j < resultado2; j++){
			M4[fila][columna] = '2';
			columna++;	
		}
	}
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			printf(" %c", M4[i][j]);
		}
		printf("\n");
	}
		
	}
	contador++;
	}while(contador <= 3);
	
	printf("A continuacion, disponga las posiciones de sus fragatas: \n");
	
		do{
	estetica = 1;
	printf("Colocando fragata numero %i\n",estetica);
	estetica++;
	printf("Ingrese la fila: ");
	scanf("%i", &fila);
	resultado1 = fila + 1;
	printf("Ingrese la columna: ");
	scanf("%i",&columna);
	resultado2 = columna + 1;
	
	for(i = fila; i < resultado1; i++){
		for(j = columna; j < resultado2; j++){
			M4[fila][columna] = '1';
			columna++;	
		}
	}
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			printf(" %c", M4[i][j]);
		}
		printf("\n");
	}
	contador2++;
	}while(contador2 <= 2);
	
	
	printf("\n A continuacion dispondra de sus acorazados/submarinos \n");
	printf("¿Cuantos submarinos desea colocar? Tener en cuenta que tiene hasta 3 espacios disponibles\n");
	scanf("%i", &submarinos);
	
	while(submarinos > 0 && submarinos <= 3 && contador3 <= submarinos){
			estetica = 1;
			printf("Colocando submarino numero %i \n", estetica);
			estetica++;
			printf("Ingrese la fila: ");
			scanf("%i", &fila);
			
			printf("Ingrese la columna: ");
			scanf("%i",&columna);
		
			
			if(columna == 9){
			resultado1 = fila - 3;
			resultado2 = columna - 3;
			for(i = resultado1; i < fila; i++){
				for(j = resultado2; j < columna; j++){
				M4[fila][columna] = '3';
				columna--;	
		}
	}
			for(i = 0; i < 10; i++){
				for(j = 0; j < 10; j++){
				printf(" %c", M4[i][j]);
			}	
			printf("\n");
			}
		}else{
			resultado1 = fila + 3;
			resultado2 = columna + 3;
			for(i = fila; i < resultado1; i++){
				for(j = columna; j < resultado2; j++){
				M4[fila][columna] = '3';
				columna++;	
		}
	}
			for(i = 0; i < 10; i++){
				for(j = 0; j < 10; j++){
				printf(" %c", M4[i][j]);
			}	
			printf("\n");
			}
			
		}
			contador3++;
		}
	
	if(submarinos == 0){
		printf("Colocara 3 acorazados\n");
		do{
			estetica = 1;
			printf("Colocando acorazado numero %i \n", estetica);
			estetica++;
			printf("Ingrese la fila: ");
			scanf("%i", &fila);
			printf("Ingrese la columna: ");
			scanf("%i",&columna);
			
			
			if(columna == 9){
			resultado1 = fila - 3;
			resultado2 = columna - 3;
			for(i = resultado1; i < fila; i++){
				for(j = resultado2; j < columna; j++){
				M4[fila][columna] = '3';
				columna--;	
				}
			}
			for(i = 0; i < 10; i++){
				for(j = 0; j < 10; j++){
				printf(" %c", M4[i][j]);
				}	
			printf("\n");
			}
		}else{
			resultado2 = columna + 3;
			resultado1 = fila + 3;
			for(i = fila; i < resultado1; i++){
				for(j = columna; j < resultado2; j++){
				M4[fila][columna] = '3';
				columna++;	
		}
	}
			for(i = 0; i < 10; i++){
				for(j = 0; j < 10; j++){
				printf(" %c", M4[i][j]);
			}	
			printf("\n");
			}
		}
			contador4++;
		}while(contador4 <= 3);
		
	}else if(submarinos == 1){
		printf("Colocara 2 acorazados\n");
		do{
			estetica = 1;
			printf("Colocando acorazado numero %i \n",estetica);
			estetica++;
			printf("Ingrese la fila: ");
			scanf("%i", &fila);
			printf("Ingrese la columna: ");
			scanf("%i",&columna);
			
			
			if(columna == 9){
			resultado1 = fila - 3;
			resultado2 = columna - 3;
			for(i = resultado1; i < fila; i++){
				for(j = resultado2; j < columna; j++){
				M4[fila][columna] = '3';
				columna--;	
				}
			}
			for(i = 0; i < 10; i++){
				for(j = 0; j < 10; j++){
				printf(" %c", M4[i][j]);
				}	
			printf("\n");
			}
		}else{
			resultado2 = columna + 3;
			resultado1 = fila + 3;
			for(i = fila; i < resultado1; i++){
				for(j = columna; j < resultado2; j++){
				M4[fila][columna] = '3';
				columna++;	
		}
	}
			for(i = 0; i < 10; i++){
				for(j = 0; j < 10; j++){
				printf(" %c", M4[i][j]);
			}	
			printf("\n");
			}
		}
			contador4++;
		}while(contador4 <= 2);
		
	}else if(submarinos == 2){
		printf("Colocara 1 acorazado\n");
		do{
			printf("Colocando acorazado \n");
			printf("Ingrese la fila: ");
			scanf("%i", &fila);
		
			printf("Ingrese la columna: ");
			scanf("%i",&columna);
		
			if(columna == 9){
			resultado1 = fila - 3;
			resultado2 = columna - 3;
			for(i = resultado1; i < fila; i++){
				for(j = resultado2; j < columna; j++){
				M4[fila][columna] = '3';
				columna--;	
				}
			}
			for(i = 0; i < 10; i++){
				for(j = 0; j < 10; j++){
				printf(" %c", M4[i][j]);
				}	
			printf("\n");
			}
		}else{
			resultado2 = columna + 3;
			resultado1 = fila + 3;
			for(i = fila; i < resultado1; i++){
				for(j = columna; j < resultado2; j++){
				M4[fila][columna] = '3';
				columna++;	
		}
	}
			for(i = 0; i < 10; i++){
				for(j = 0; j < 10; j++){
				printf(" %c", M4[i][j]);
			}	
			printf("\n");
			}
		}
			contador4++;
		}while(contador4 <= 1);
	}
	
	
	/*FASE DE ATAQUE*/
	
	
	printf("Bienvenido a la fase de ataque\n");
	
	/*TURNO JUGADOR 1*/
		
	do{
				printf("Ingrese fila que desea atacar: ");
				scanf("%i",&ataquef);
				printf("Ingrese columna que desea atacar: ");
				scanf("%i",&ataquec);	
				
				if(turnos_jug1 == 0){
				if(M4[ataquef][ataquec] == '4'){
					printf("JUG 1 Ha acertado a la posicion de un portaaviones enemigo, felicidades\n");
					M4[ataquef][ataquec] = 'X';
					acumulador_p--;
					printf("JUG 1 Le queda %i posiciones del portaavion por destruir\n", acumulador_p);
					turnos_jug1++;
					victoria1++;
				}else if(M4[ataquef][ataquec] == '3'){
					printf("JUG 1 Ha acertado a la posicion de un submarino/acorazado enemigo, felicidades\n");
					M4[ataquef][ataquec] = 'X';
					acumulador_s--;
					printf("Le queda %i posiciones del submarino/acorazado por destruir\n", acumulador_s);
					turnos_jug1++;
					victoria1++;
				}else if(M4[ataquef][ataquec] == '2'){
					printf("JUG 1 Ha acertado a la posicion de un destructor enemigo, felicidades\n");
					M4[ataquef][ataquec] = 'X';
					acumulador_d--;
					printf("JUG 1 Le queda %i posiciones del destructor por destruir\n", acumulador_d);
					turnos_jug1++;
					victoria1++;
				}else if(M4[ataquef][ataquec] == '1'){
					printf("JUG 1 Ha acertado a la posicion de una fragata enemigo y por lo tanto la ha destruido, felicidades\n");
					M4[ataquef][ataquec] = 'X';
					turnos_jug1++;
					victoria1++;
				}else if(M4[ataquef][ataquec] == 'O' || M4[ataquef][ataquec] == 'X'){
					printf("No ha acertado a ningun barco - JUG 1\n");
				}
				turnos_jug2 = 0;
			}
		 
			printf("\n");
				
	/*TURNO JUGADOR 2*/
				
			if(turnos_jug2 == 0){
				
				printf("Ingrese fila que desea atacar: ");
				scanf("%i",&ataquef);
				printf("Ingrese columna que desea atacar: ");
				scanf("%i",&ataquec);	
				
				
				if(M2[ataquef][ataquec] == '4'){
					printf("JUG 2 Ha acertado a la posicion de un portaaviones enemigo, felicidades\n");
					M4[ataquef][ataquec] = 'X';
					acumulador_p1--;
					printf("JUG 2 Le queda %i posiciones del portaavion por destruir\n", acumulador_p1);
					turnos_jug2++;
					victoria2++;
				}else if(M2[ataquef][ataquec] == '3'){
					printf("JUG 2 Ha acertado a la posicion de un submarino/acorazado enemigo, felicidades\n");
					M4[ataquef][ataquec] = 'X';
					acumulador_s1--;
					printf("JUG 2 Le queda %i posiciones del submarino/acorazado por destruir\n", acumulador_s1);
					turnos_jug2++;
					victoria2++;
				}else if(M2[ataquef][ataquec] == '2'){
					printf("JUG 2 Ha acertado a la posicion de un destructor enemigo, felicidades\n");
					M4[ataquef][ataquec] = 'X';
					acumulador_d1--;
					printf("JUG 2 Le queda %i posiciones del destructor por destruir\n", acumulador_d1);
					turnos_jug2++;
					victoria2++;
				}else if(M2[ataquef][ataquec] == '1'){
					printf("JUG 2 Ha acertado a la posicion de una fragata enemigo y por lo tanto la ha destruido, felicidades\n");
					M4[ataquef][ataquec] = 'X';
					turnos_jug2++;
					victoria2++;
				}else if(M2[ataquef][ataquec] == 'O' || M2[ataquef][ataquec] =='X'){
						printf("No ha acertado a ningun barco - JUG 1\n");
					}
				turnos_jug1 = 0;
			}
		
		
		
		
	}while(victoria1 < 21 && victoria2 < 21);
	
	/*CONDICION DE VICTORIA*/
	
	if(victoria1 >= 21){
		printf("HA GANADO EL JUGADOR 1");
	}else if(victoria2 >= 21){
		printf("HA GANADO EL JUGADOR 2");
	}
	
	return 0; 
}
