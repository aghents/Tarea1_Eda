#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "funciones.h"

int main(int argc, char *argv[])  {

  char clave1[10];
  char clave2[10];
  char nombre_salida[30];
// LECUTRA DE ARCHIVO
// LECTURA DE ARCHIVO

	char input_text[150];
	entrada(input_text,argc, argv);
	printf("aqui va el mensaje que viene de la funcion entrada");
	printf("%s\n",input_text);

// ESCRITURA DE ARCHIVO
  salida(argc, argv);
	

  //if (argv[2] == "encode" || argv[2] == "decode"){ printf("llamamos a deco");}

  //else{printf("por ahora nada");} 

  //clave1[] = argv[3];
  //clave2[] = argv[4];
  //nombre_salida[] = argv[5];
    
  return 0;
	
	
	
}

//const char *filename = "input.txt";