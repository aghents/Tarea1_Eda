#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "funciones.h"

int main(int argc, char *argv[])  {
	
// LECUTRA DE ARCHIVO
// LECTURA DE ARCHIVO
	
	char input_text[150];
	entrada(argc, argv);
	//printf("aqui va el mensaje que viene de la funcion entrada en el main");
	printf("%s\n",input_text);
	int longitud = strlen(input_text);
	printf("%i\n",longitud);
	
  //char output_text[100];
  
// ESCRITURA DE ARCHIVO
  //salida(output,argc, argv);
	

  //if (argv[2] == "encode" || argv[2] == "decode"){ printf("llamamos a deco");}

  //else{printf("por ahora nada");} 

  //clave1[] = argv[3];
  //clave2[] = argv[4];
  //nombre_salida[] = argv[5];
  return 0;
}

//const char *filename = "input.txt";