#ifndef LEVELS_H_INCLUDED
#define LEVELS_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include "Player.h"

///A continuacion, se definen los limites de los
///diferentes niveles del juego

#define Y_ 30
#define X_ 119

#define X_1 60
#define X_2 62
#define X_3 64
#define X_4 66
#define X_5 68
#define X_6 74
#define X_7 78
#define X_8 84
#define X_9 90
#define X_10 96

/**Diseño de la introduccion al juego**/
void intro(char m[Y_][X_]);


/**Diseño de la pantalla de Logueo**/
void log_in(char m[Y_][X_]);
void fields_logIn();


/**Diseño de los menues del juego**/
void gameOver(char m[Y_][X_]);
void menu_1(char m[Y_][X_]);
void st_menu(char m[Y_][X_]);
void custom_menu(char m[Y_][X_]);
void color_menu(char m[Y_][X_]);
void skin_menu(char m[Y_][X_]);
void print_box(char m[Y_][X_]);
void options_menu(char m[Y_][X_]);
void nickname_menu(char m[Y_][X_]);
void pass_menu(char m[Y_][X_]);
void record_menu(char m[Y_][X_]);
void newUser_menu(char m[Y_][X_]);


/**Diseño del Countdown**/
void n_3(char m[Y_][X_]);
void n_2(char m[Y_][X_]);
void n_1(char m[Y_][X_]);


/**Diseño de niveles**/
void lvl_1(char m[Y_][X_]);
void lvl_2(char m[Y_][X_]);
void lvl_3(char m[Y_][X_]);
void lvl_4(char m[Y_][X_]);
void lvl_5(char m[Y_][X_]);
void lvl_6(char m[Y_][X_]);
void lvl_7(char m[Y_][X_]);
void lvl_8(char m[Y_][X_]);
void lvl_9(char m[Y_][X_]);
void lvl_10(char m[Y_][X_]);


/**Funcion relacionada al nivel actual**/
void set_lvl_info(int lvl,plySettings s_user);


/**Funciones relacionadas al cronometro**/
void define_chronometer(int* time, int lvl);
void set_chronometer_position(int lvl);
void chronometer(int* time, int* time_aux,int lvl,plySettings s_user);


/**Funciones relacionadas al puntaje**/
int define_lvl_score(int lvl);
void set_lvl_score_position(int score, int lvl, int time);


/**Funciones relacionadas a la salida**/
void set_exit(int e[], int lvl);
int check_finish(int c[], int e[]);


/**Printeo de niveles**/
void draw_lvl(char m[Y_][X_],int lvl,int x, int y);
void print_lvl(char m[Y_][X_],int x, int y);

#endif // LEVELS_H_INCLUDED
