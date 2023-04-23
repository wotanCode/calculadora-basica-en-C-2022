#include <stdio.h>
#include <math.h>
#include "../../include/model.h"

void waitforUserInteraction()
{
  getchar();
  int x;
  // limpiando el bufer
  while ((x = getchar()) != '\n' && x != EOF)
    ;
}

float add(float n1, float n2)
{
  return (n1 + n2);
}

float subtract(float n1, float n2)
{
  return (n1 - n2);
}