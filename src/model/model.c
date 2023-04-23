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

// Funcion para dividir
float divide(float n1, float n2)
{
  return (n1 / n2);
}

// funcion para Modulo
int module(int n1, int n2)
{
  return (n1 % n2);
}

// funcion para potencia
float powFn(float n1, float n2)
{
  return (pow(n1, n2));
}

// funcion para Raiz
float root(float n1, float n2)
{
  if (n2 == 2)
  {
    return (sqrt(n1));
  }
  return (pow(n1, 1.0 / n2));
}

// // funcion para el lograitmo neperiano
float naturalLogFn(float n1)
{
  return (log(n1));
}

// funcion para el logaritmo base variable
float logFn(float n1, float n2)
{
  return (log(n1) / log(n2));
}