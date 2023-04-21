#include <stdio.h>

/*
Imports temporal, ya que esto lo debe hacer el controllador.
*/
#include "view/view.h"

int main()
{
  welcomeMessage(); // Mostrar mensaje de bienvenida
  menu();           // Mostrar menú principal
  return 0;
}