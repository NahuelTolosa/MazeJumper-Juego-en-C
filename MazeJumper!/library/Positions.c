#include "Positions.h"

void gotoxy(int x, int y)//Posicion del cursor en la consola
{
    HANDLE consola = GetStdHandle(STD_OUTPUT_HANDLE);//contrlador de la consola

    COORD posicion;//estructura para las coordenadas
    posicion.X = x;
    posicion.Y = y;

    SetConsoleCursorPosition(consola, posicion);//situa el cursor en un punto de la consola
}

void define_console_size()
{
    HANDLE wHnd; // Handle to write to the console.
    HANDLE rHnd; // Handle to read from the console.

    // Set up the handles for reading/writing:
    wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    rHnd = GetStdHandle(STD_INPUT_HANDLE);
    // Change the window title:
    SetConsoleTitle("MazeJumper!");
    // Set up the required window size:
    SMALL_RECT windowSize = {0, 0, 119, 30};
    SetConsoleWindowInfo(wHnd, 1, &windowSize);
    // Change the console window size:
    // Create a COORD to hold the buffer size:
    COORD bufferSize = {10, 10};
    SetConsoleScreenBufferSize(wHnd, bufferSize);

    /*Esta funcion fue sacada de internet y funciona!!!
      no se comprende del todo el funcionamientos pero
      al parecer da las dimensiones que buscabamos
    */
}
