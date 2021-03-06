#ifndef LOGIN_H_INCLUDED
#define LOGIN_H_INCLUDED
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include "Player.h"

/***FUNCIONES RELACIONADAS AL EMAIL***/
void load_email(userNode* list,char email[],int* valid,userNode** user);//Carga del campo "email"
int validate_email(userNode* list,char email[],userNode** user);//Validacion del mail ingresado
void set_email_message();//Mensaje de email invalido
void clean_email_message();//Borra el mensaje anterior
void clean_email_field();//Borra el area donde se ingreso el email erroneo
void register_new_user(userNode** u_list,playerNode** p_list);//Crea un nuevo registro con un nuevo ususario
void clean_error_message();//Borra mensaje de error de email
void clean_email();//Borra el mail ingresado erroneamente
int validate_new_email(char email[]);//Validacion del mail ingresado

/***FUNCIONES RELACIONADAS A LA CONTRASEŅA***/
void load_password(char password[],char right_pass[]);//Lee la contraseņa ingresada por el usuario
int check_password(char password[],char right_pass[]);//Revisa si la contraseņa es correcta
void set_password_message();//Muestra en consola error de contraseņa
void clean_password_message();//Borra el mensaje anterior
void set_asterisks();//Asteriscos donde va la contraseņa
void clean_password_field();//Borra los asteriscos para ingresar la contraseņa

#endif // LOGIN_H_INCLUDED
