#ifndef VIEW_H
#define VIEW_H

// SECCION: VISTAS PRESENTACIONALES.
void clearScreen();
void welcomeMessage();

// SECCION: MENUS
void mainMenuV();
void addMenuV();
void subtractMenuV();
void multiplyMenuV();
void divideMenuV();

void moduleMenuV();
void powMenuV();
void rootMenuV();

// CAPTURADORES DE OPCIONES
void getMenuOption(int *option);
void getBasicFloatNumberOperation(float *number1, float *number2);
void getBasicIntegerOperation(int *number1, int *number2);
void getPowNumberOperation(float *number1, float *number2);
void getRootNumberOperation(float *number1, float *number2);

// Resultados
void showResult(float result);

#endif