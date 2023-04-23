#include <stdio.h>
#include <math.h>
#include "../../include/model.h"

// Esta funcion espera el enter del usuario y limpia el bufer
void waitforUserInteraction()
{
  getchar();
  int x;
  // limpiando el bufer
  while ((x = getchar()) != '\n' && x != EOF)
    ;
}

// Funcion para sumar
float add(float n1, float n2)
{
  return (n1 + n2);
}

// Funcion para restar
float subtract(float n1, float n2)
{
  return (n1 - n2);
}

// Funcion para multiplicar
float multiply(float n1, float n2)
{
  return (n1 * n2);
}