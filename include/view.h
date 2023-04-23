#ifndef VIEW_H
#define VIEW_H

// SECCION: VISTAS PRESENTACIONALES.
void clearScreen();
void welcomeMessage();

// SECCION: MENUS
void mainMenuV();
void addMenuV();

// CAPTURADORES DE OPCIONES
void getMenuOption(int *option);
void getBasicNumberOperation(float *number1, float *number2);

// Resultados
void showResult(float result);

#endif