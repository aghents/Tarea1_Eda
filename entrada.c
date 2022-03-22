#include "funciones.h" 

char entrada(int a, char** b){
  
  char texto[150];
  int k;
  k = 0;
  int i;
  char caracter;
	
  
  FILE* mensaje = fopen(b[1], "rb");
  
  while (feof(mensaje) == 0){
    caracter = fgetc(mensaje);
    texto[k] = caracter;
    k++;
  }
  fclose(mensaje);

  printf("Se ha leido el archivo con exito\n");
	return *texto;
 }


// FUNCION LISTA