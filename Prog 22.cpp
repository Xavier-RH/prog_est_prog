/* Autor: Xavier Romero Hernández, Realizado: 24/02/2022 
	Programa que calcule la suma de los 50 primeros numeros enteros
	*/
	
#include <stdio.h>

int main(){
	int suma;
	
	for(int i;i<=50;i++){
		suma=suma+i;
	}
	printf("La suma de los primeros 50 numeros enteros es: %d",suma);
	
	return 0;
}
