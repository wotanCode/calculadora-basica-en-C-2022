#include <stdio.h>
#include "../../include/view.h"
#include "../../include/model.h"
#include "../../include/controller.h"

// Controller del menu principal
void mainMenuC()
{
  int option = -1;
  welcomeMessage();

  do
  {
    mainMenuV();
    getMenuOption(&option);

    switch (option)
    {
    case 1:
      addMenuC();
      break;

    case 0:
      printf("Saliendo del programa...\n");
      getchar();
      break;

    default:
      printf("Opción inválida, intente de nuevo.\n");
      getchar();
      int c;
      while ((c = getchar()) != '\n' && c != EOF)
        ;
      break;
    }

  } while (option != 0);
}

// Controller para la sección de sumar.
void addMenuC()
{
  float num1, num2, result;
  int option;

  do
  {
    addMenuV();
    scanf("%d", &option);

    switch (option)
    {
    case 1:
      getBasicNumberOperation(&num1, &num2);
      result = add(num1, num2);
      showResult(result);
      waitforUserInteraction();
      break;

    case 2:
      clearScreen();
      return;
    default:
      printf("Opción inválida, intente de nuevo.\n");
      waitforUserInteraction();
      clearScreen();
    }
  } while (option != 2);
}