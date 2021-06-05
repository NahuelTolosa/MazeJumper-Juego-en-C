#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include "Positions.h"
#include "TDAs.h"

#define Y_ 30
#define X_ 119

#define SKIN_1 207
#define SKIN_2 175
#define SKIN_3 158
#define SKIN_4 254
#define SKIN_5 35
#define SKIN_6 184

typedef struct{

    int color;
    char skin;

}plySettings;

/*****FUNCIONES RELACIONADAS AL JUGADOR*****/
void set_player(int c[],plySettings s_user);//Posiciona al jugador en el lugar de salida
void player(plySettings s_user);//Funcion que simula movimiento
void in_settings(plySettings* s_user);//Inicializa la variable que determina color y avatar
void costumizePlayerColor(char opt,plySettings* s_user);//Cambiar el color del personaje
void costumizePlayerSkin(char opt,plySettings* s_user);//Cambiar avatar del jugador

/**FUNCIONES RELACIONADAS AL MOVIMIENTO DEL PERSONAJE**/
void move_left(char m[Y_][X_], int c[],plySettings s_user);//Moverse a la izquierda
void move_right(char m[Y_][X_], int c[],plySettings s_user);//Moverse a la derecha
void move_up(char m[Y_][X_], int c[],plySettings s_user);//Moverse arriba
void move_down(char m[Y_][X_], int c[],plySettings s_user);//Moverse Abajo


#endif // PLAYER_H_INCLUDED
