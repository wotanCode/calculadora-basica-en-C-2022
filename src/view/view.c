#include <stdio.h>
#include "view.h"

// Mensaje inicial de bienvenida al programa
void welcomeMessage()
{
  printf("-- ++ ++ ++  ** // ** ++ ++ ++ --");
  printf("Bienvenido a AdvancedCalculator");
  printf("-- ++ ++ ++  ** // ** ++ ++ ++ --");
}

// Mensaje Inferior que indica como manipular el programa
void footerHelperMessage()
{
  printf("Info: Escribe un numero para seleccionar una opción.");
}

// Menu principal del programa
void menu()
{
  printf("MENU:");
  printf("1. Sumar");
  printf("2. Restar");
  printf("3. Multplicar");
  printf("4. Dividir");
  printf("5. Modulo");
  printf("6. Potencia");
  printf("7. Raiz Cuadrada");

  printf("9. Salir.");
  printf("0. Acerca de...");
  printf("MENU");
}