/*
 ============================================================================
 Name        : PrimerParcialProgra.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Dada una estructura ePais cuyos campos son id(int), nombre(20 caracteres), infectados(int),
 recuperados(int) y muertos(int). Desarrollar una función llamada actualizarRecuperados que reciba
 el país y los recuperados del dia y que acumule estos a los que ya tiene el país. La función no devuelve nada. *

 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int id;
	char nombre[20];
	int infectados;
	int recuperados;
	int muertos;
}ePais;

//1
void actualizarRecuperados(ePais pais, int recuperadosDelDia){
	pais.recuperados = pais.recuperados + recuperadosDelDia;
}

//2
char invertirCadena(char cadena[]){
	char auxCad;
	int largoCad;
	int j;

	if(cadena != NULL){
		largoCad = strlen(cadena);
		j = largoCad;
		for(int i = 0 ; i<(largoCad/2); i++){
			j--;
			auxCad = cadena[i];
			cadena[i] = cadena[j];
			cadena[j] = auxCad;
		}
	}
	return cadena;
}

//3
void ordenarCaracteres(char str[]){
	int tamCadena = strlen(str);
	char auxChar;
	for(int i = 0; i < tamCadena-1; i++){
			for(int j = i + 1; j < tamCadena; j++){
				if(str[i] > str[j]){
					auxChar = str[i];
					str[i] = str[j];
					str[j] = auxChar;
				}
			}
		}
}

int main(void) {
	char ordenar[10] = {"VACAFEA"};
	char cadenaInvertida[10];
	int recuperadosDelDia = 1000;
	ePais pais = {1,"Argentina",80000,35000,780};


	actualizarRecuperados(pais, recuperadosDelDia);
	printf("1 - Recuperados totales a hoy: %d\n",pais.recuperados);

	strcpy(cadenaInvertida,invertirCadena(ordenar));
	printf("2) Cadena %s que se invierte queda %s\n","VACAFEA",cadenaInvertida);

	ordenarCaracteres(ordenar);
	printf("3 - cadena %s que se ordena  queda: %s\n","VACAFEA",ordenar);


	return EXIT_SUCCESS;
}
