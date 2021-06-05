#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include "Player.h"

#define ESC 27

void showMenuPlayer();

/**MENU ESTADISTICAS**/
void showStatistics();

/**MENU PERSONALIZAR JUGADOR**/
void showCostumizePlayer();
void showCostumizeColor();
void showCostumizeSkin();

/**MENU OPCIONES**/
void showOptions();
void change_pass(userNode** user);
void clean_message();
void clean_wrong_pass();
void change_nickName(userNode** user);
void showDeleteRecord();
void deleting_record();

/**MANUAL DEL USUARIO**/
void showManual();

/**MENU PRINCIPAL DEL ADMIN**/
void menuAdmin();


#endif // MENU_H_INCLUDED
