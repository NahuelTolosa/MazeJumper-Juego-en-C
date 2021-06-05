#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include "Audio.h"
#include "Levels.h"
#include "LogIn.h"
#include "Player.h"
#include "Positions.h"
#include "TDAs.h"
#include "Menu.h"

int in_game(char map[],lvlNode* list,plySettings s_user,userNode* current_user);//Funcion que determina que nivel se va a jugar
void play_lvl(int lvl, char m[Y_][X_], int c[], int e[], int* score, int x, int y,lvlNode* lvl_node,plySettings s_user);//Define todo lo necesario para empezar el nivel
void game_loop(char m[Y_][X_], int lvl, int c[], int e[],int** score,lvlNode* lvl_node,plySettings s_user);//Bucle principal de juego
int set_logIn_menu(userNode* list,char m[Y_][X_],userNode** user);//Llamado al sistema de logueo
void print_intro();//Llamado a la intro del juego
void count_down();//Llamado a la cuenta regresiva (transicion)
void game_over(int score);//Muestra pantalla de finalzacion de juego
void print_gameOver();//Llamado a la pantalla de finalizacion de juego
void print_menu_1();//Llamado al menu ppal
void print_st_menu();//Llamado a la pantalla de estadisticas
void print_custom_menu();//Llamado al menu de personalizacion de jugador
void print_color_menu();//Llamado al menu de cambio de color
void print_skin_menu();//Llamado al menu de cambio de avatar
void print_manual_menu();//Llamado al manual de juego
void print_credits();//Llamado a los creditos
void print_options_menu();//Llamado al menu de opciones
void print_nickname_menu();//Llamado al menu de cambio de alias
void print_pass_menu();//Llamado al menud e cambio de contraseña
void print_record_menu();//Llamado al menu de borrado de jugadas
void print_newUser_menu();//Llamado al menu de creacion de un usuario nuevo

#endif // GAME_H_INCLUDED
