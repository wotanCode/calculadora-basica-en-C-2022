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

    case 2:
      subtractMenuC();
      break;

    case 3:
      multiplyMenuC();
      break;

    case 4:
      divideMenuC();
      break;

    case 5:
      moduleMenuC();
      break;

    case 6:
      powMenuC();
      break;

    case 7:
      rootMenuC();
      break;

    case 8:
      logMenuC();
      break;

    case 9:
      multiplyMenuC();
      break;

    case 0:
      printf("Saliendo del programa...\n");
      getchar();
      break;

    default:
      printf("Opción inválida, intente de nuevo.\n");
      waitforUserInteraction();
      clearScreen();
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
      getBasicFloatNumberOperation(&num1, &num2);
      result = add(num1, num2);
      showResult(result);
      waitforUserInteraction();
      break;

    case 0:
      clearScreen();
      return;
    default:
      printf("Opción inválida, intente de nuevo.\n");
      waitforUserInteraction();
      clearScreen();
    }
  } while (option != 0);
}

// Controller para la sección de Restar.
void subtractMenuC()
{
  float num1, num2, result;
  int option;

  do
  {
    subtractMenuV();
    scanf("%d", &option);

    switch (option)
    {
    case 1:
      getBasicFloatNumberOperation(&num1, &num2);
      result = subtract(num1, num2);
      showResult(result);
      waitforUserInteraction();
      break;

    case 0:
      clearScreen();
      return;
    default:
      printf("Opción inválida, intente de nuevo.\n");
      waitforUserInteraction();
      clearScreen();
    }
  } while (option != 0);
}

// Controller para la sección de multiplicar.
void multiplyMenuC()
{
  float num1, num2, result;
  int option;

  do
  {
    multiplyMenuV();
    scanf("%d", &option);

    switch (option)
    {
    case 1:
      getBasicFloatNumberOperation(&num1, &num2);
      result = multiply(num1, num2);
      showResult(result);
      waitforUserInteraction();
      break;

    case 0:
      clearScreen();
      return;
    default:
      printf("Opción inválida, intente de nuevo.\n");
      waitforUserInteraction();
      clearScreen();
    }
  } while (option != 0);
}

// Controller para la sección de dividir.
void divideMenuC()
{
  float num1, num2, result;
  int option;

  do
  {
    divideMenuV();
    scanf("%d", &option);

    switch (option)
    {
    case 1:
      getBasicFloatNumberOperation(&num1, &num2);
      result = divide(num1, num2);
      showResult(result);
      waitforUserInteraction();
      break;

    case 0:
      clearScreen();
      return;
    default:
      printf("Opción inválida, intente de nuevo.\n");
      waitforUserInteraction();
      clearScreen();
    }
  } while (option != 0);
}

// Controller para la sección de modulo.
void moduleMenuC()
{
  int num1 = 0, num2 = 0, result;
  int option;

  do
  {
    moduleMenuV();
    scanf("%d", &option);

    switch (option)
    {
    case 1:
      getBasicIntegerOperation(&num1, &num2);
      result = module(num1, num2);
      showResult(result);
      waitforUserInteraction();
      break;

    case 0:
      clearScreen();
      return;
    default:
      printf("Opción inválida, intente de nuevo.\n");
      waitforUserInteraction();
      clearScreen();
    }
  } while (option != 0);
}

void powMenuC()
{
  float num1, num2, result;
  int option;

  do
  {
    powMenuV();
    scanf("%d", &option);
    switch (option)
    {
    case 1:
      getPowNumberOperation(&num1, &num2);
      result = powFn(num1, num2);
      showResult(result);
      waitforUserInteraction();
      break;

    case 0:
      clearScreen();
      return;
    default:
      printf("Opción inválida, intente de nuevo.\n");
      waitforUserInteraction();
      clearScreen();
    }
  } while (option != 0);
}

void rootMenuC()
{
  float num1, num2, result;
  int option;

  do
  {
    rootMenuV();
    scanf("%d", &option);
    switch (option)
    {
    case 1:
      getRootNumberOperation(&num1, &num2);
      result = root(num1, num2);
      showResult(result);
      waitforUserInteraction();
      break;

    case 0:
      clearScreen();
      return;
    default:
      printf("Opción inválida, intente de nuevo.\n");
      waitforUserInteraction();
      clearScreen();
    }
  } while (option != 0);
}

void logMenuC()
{
  float num1, num2, result;
  int option;

  do
  {
    logMenuV();
    scanf("%d", &option);
    switch (option)
    {
    case 1:
      getNaturalLogarithNumberOperation(&num1);
      result = naturalLogFn(num1); // AQUI
      showResult(result);
      waitforUserInteraction();
      break;

    case 2:
      getLogarithNumberOperation(&num1, &num2);
      result = logFn(num2, num1);
      showResult(result);
      waitforUserInteraction();
      break;

    case 0:
      clearScreen();
      return;
    default:
      printf("Opción inválida, intente de nuevo.\n");
      waitforUserInteraction();
      clearScreen();
    }
  } while (option != 0);
}