#include "funciones.h"

const char* salida(output, int a, char** b){
  int largo_output = 30;
  char output[largo_output];
  FILE* fptr;

  fptr = fopen(b[5], "w");
  if(fptr == NULL){
    printf("Unable to create file.\n");
    exit(EXIT_FAILURE);
  }  
  printf("Enter contents to store in file : \n");
  fgets(output, largo_output, stdin);
  fputs(output, fptr);
  fclose(fptr);
  printf("Archivo creado y guardado existosamente \n");
}