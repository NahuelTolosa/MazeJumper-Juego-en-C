#include "Player.h"

/*****FUNCIONES RELACIONADAS AL JUGADOR*****/
void set_player(int c[],plySettings s_user)
{
    c[0]=1;
    c[1]=2;
    gotoxy(c[1],c[0]); //envia las coordenadas de la posicion
    player(s_user);//"situa" al jugador donde se encuntra el cursor
}
void player(plySettings s_user)
{
    SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),s_user.color);//Cambia el color del Jugador segun el que haya seleccionado
    printf("%c",s_user.skin);//situa al jugador donde se encuentra el cursor
}
void in_settings(plySettings* s_user)
{
    (*s_user).color = 4;
    (*s_user).skin = 207;
}
void costumizePlayerColor(char opt,plySettings* s_user)
{
    switch(opt)
    {
    case 49:
        (*s_user).color=1;
        break;
    case 50:
        (*s_user).color=2;
        break;
    case 51:
        (*s_user).color=3;
        break;
    case 52:
        (*s_user).color=4;
        break;
    case 53:
        (*s_user).color=5;
        break;
    case 54:
        (*s_user).color=6;
        break;
    }
}
void costumizePlayerSkin(char opt,plySettings* s_user)
{
    switch(opt)
    {
    case 49:
        (*s_user).skin=SKIN_1;
        break;
    case 50:
        (*s_user).skin=SKIN_2;
        break;
    case 51:
        (*s_user).skin=SKIN_3;
        break;
    case 52:
        (*s_user).skin=SKIN_4;
        break;
    case 53:
        (*s_user).skin=SKIN_5;
        break;
    case 64:
        (*s_user).skin=SKIN_6;
        break;
    }
}
/******************************************/


/**FUNCIONES RELACIONADAS AL MOVIMIENTO DEL PERSONAJE**/
void move_left(char m[Y_][X_], int c[],plySettings s_user)
{
    if(m[c[0]][c[1]-1] == ' ')//verifica que el casillero de la izquierda esté vacío
    {
        gotoxy(c[1],c[0]);
        printf(" ");//elimina la posicion anterior
        c[1]=c[1]-2;
        gotoxy(c[1],c[0]);
        player(s_user);//mueve al personaje
    }
}
void move_right(char m[Y_][X_], int c[],plySettings s_user)
{
    if(m[c[0]][c[1]+2] == ' ')//verifica que el casillero de la derecha esté vacío
    {
        gotoxy(c[1],c[0]);
        printf(" ");//elimina la posicion anterior
        c[1]=c[1]+2;
        gotoxy(c[1],c[0]);
        player(s_user);//mueve al personaje
    }
}
void move_up(char m[Y_][X_], int c[],plySettings s_user)
{
    if(m[c[0]-1][c[1]] == ' ')//verifica que el casillero de arriba esté vacío
    {
        gotoxy(c[1],c[0]);
        printf(" ");//elimina la posicion anterior
        c[0]=c[0]-1;
        gotoxy(c[1],c[0]);
        player(s_user);//mueve al personaje
    }
}
void move_down(char m[Y_][X_], int c[],plySettings s_user)
{
    if(m[c[0]+1][c[1]] == ' ')//verifica que el casillero de abajo esté vacío
    {
        gotoxy(c[1],c[0]);
        printf(" ");//elimina la posicion anterior
        c[0]=c[0]+1;
        gotoxy(c[1],c[0]);
        player(s_user);//mueve al personaje
    }
}
/******************************************************/
