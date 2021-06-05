#ifndef TDAS_H_INCLUDED
#define TDAS_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include "Positions.h"

#define FILE_NAME "PlayersRecords.dat"

typedef struct{

    char userName[50];
    char nickName[50];
    char email[50];
    char password[50];
    int playerID;
    int condition;
    int active;
    int lvl;
    int score;

}stPlayerRecord;

typedef struct _node1{

    char userName[50];
    char nickName[50];
    char email[50];
    char password[50];
    int playerID;
    int condition;
    int active;
    struct _node1* nextUser;

}userNode;

typedef struct _node2{

    int playerID;
    int lvl;
    int score;
    struct _node2* nextlvl;

}lvlNode;

typedef struct _node3{

    int playerID;
    lvlNode* lvlList;
    struct _node3* nextPly;

}playerNode;

typedef struct _node4{

    char nickName[50];
    int playerID;
    int score;
    struct _node* left;
    struct _node* right;

}treeNode;

/******LISTAS*******/
void in_user_list(userNode** list);//Inicializa lista de usuarios
void in_ply_list(playerNode** list);//Inicializa lista de jugadores
userNode* new_user_node(stPlayerRecord aux);//Crea un nodo de usuario
playerNode* new_ply_node(stPlayerRecord aux);//Crea un nodo de jugador
lvlNode* new_lvl_node(stPlayerRecord aux);//Crea un nodo de nivel
void add_ply_node(playerNode** list,playerNode* newNode);//Agrega un nodo de jugador
void add_user_node(userNode** list,userNode* newNode);//Agrega un nodo de usuario
void add_lvl_node(lvlNode** list,lvlNode* newNode);//Agrega un nodo de nivel
userNode* check_user(userNode* list,int id);//Revisa si hay un usuario cargado en la lista segun su id
playerNode* check_ply(playerNode* list,int id);//Revisa si hay un jugador cargado en la lista segun su id
int get_last_ID(userNode* list);//Obtiene el ultimo id para luego crear uno nuevo
int check_email(userNode* list,char* info,userNode** user);//Comprueba que el email sea valido
lvlNode* look_for_node(lvlNode* list,int lvl);//Busca un nivel en especifico
lvlNode* pl_look_for_node(playerNode* list,int id);//Busca un un jugador en especifico
void delete_score_record(playerNode* list,int id);//Borra todos los puntajes del jugador
void change_active(userNode** u_list);//Cambiar condicion de activo
void show_user_statistics(playerNode* list,int id);//Muestra el historial de puntajes del jugador
int total_score(lvlNode* list);//Suma el total de puntajes de un jugador
userNode* return_nickname(userNode* u_list,int id);//Busca un nodo por el alias de un jugador
void delete_first_node(userNode** u_list);//Funcion para borrar el registro del admin
void read_file(userNode** users_list, playerNode** plys_list, char* file_name);//Lee archivo
void create_record(userNode* u_list,playerNode* p_list,stPlayerRecord rec[10]);//Crea un registro
void write_file(userNode* u_list, playerNode* p_list, char* file);//Escribe los registros en un archivo

/******ARBOLES*******/
void in_tree(treeNode** tree);//Inicializa arbol
void list2tree(playerNode* p_list, userNode* u_list, treeNode** tree);//Crea un nuevo nodo por cada jugador
void add_tree_node(treeNode** tree,treeNode* newNode);//Agrerga un nodo
treeNode* new_tree_node(userNode* u_node,int id,int score);//Crea un nuevo nodo
void show_node(treeNode* tree);//Muestra el contenido de un nodo
void in_order(treeNode* tree);//Muestra el contenido del arbol en orden IRD
void show_global_statistics(treeNode* tree);//Muestra las estadisticas almacenadas en el arbol

#endif // TDAS_H_INCLUDED
