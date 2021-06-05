#ifndef ADMIN_H_INCLUDED
#define ADMIN_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "TDAs.h"

void add_admin(userNode** u_list); //Agrega los datos del admin a la lista ppal del sistema
void remove_admin_data(userNode** u_list);//Borra los datos del admin a la lista ppal del sistema
void penalize_player(userNode** u_list,playerNode** p_list);//Opcion de borrar historial de jugadas de un usuario
void ban_player(userNode** u_list);//Dar de baja un ususario
void reinstate_player(userNode** u_list);//Dar de alta un usuario

#endif // ADMIN_H_INCLUDED
