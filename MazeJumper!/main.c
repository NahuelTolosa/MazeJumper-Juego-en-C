#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include "library/Game.h"

int main()
{
    define_console_size();
    srand(getpid());
    /*************DECLARACION***********/
    int score;
    int able_to_play;
    char matrix[Y_][X_];
    plySettings s_user;
    userNode* users_list;
    userNode* curret_user;
    playerNode* plys_list;
    treeNode* st_tree;
    /***********************************/

    /***********INICIALIZACION**********/
    score=0;
    able_to_play=0;
    in_settings(&s_user);
    in_user_list(&users_list);
    in_user_list(&curret_user);
    in_ply_list(&plys_list);
    in_tree(&st_tree);
    /***********************************/

    read_file(&users_list,&plys_list,FILE_NAME);//Lee los datos de los jugadores
    add_admin(&users_list);//Agrega los datos del administrador

    print_intro();
    Sleep(3000);

    do{
        play_music(0);
        able_to_play = set_logIn_menu(users_list,matrix,&curret_user);

        switch(able_to_play)//switch para saber si el usuario esta registrado o no
        {
            char option;

        case 1: //Si el jugador está logueado
            if(curret_user->condition == 0 && curret_user->active == 1)//Si es jugador y está activo
            {
                int score=0;

                do{
                    FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));//Limpia el buffer de la lectura de teclas anterior
                    fflush(stdin);
                    system("cls");
                    showMenuPlayer();
                    fflush(stdin);
                    option=getche();
                    system("cls");
                    if(option==ESC)
                    {
                        able_to_play=0;
                    }
                    else
                    {
                        switch(option)
                        {
                            char optionPlayer;//Opcion de menu

                        case 49: //JUGAR
                            stop_music();
                            system("cls");
                            score=in_game(matrix,plys_list->lvlList,s_user,curret_user);
                            system("cls");
                            game_over(score);
                            play_music(0);// Vuelve a encender la musica para regresar al menu ppal
                            system("cls");
                            break;

                        case 50: //ESTADISTICAS
                            do{
                                showStatistics();
                                list2tree(plys_list,users_list,&st_tree);
                                show_user_statistics(plys_list,curret_user->playerID);
                                show_global_statistics(st_tree);
                                optionPlayer=getche();

                            }while(optionPlayer!=ESC);
                            break;

                        case 51: //PERSONALIZAR JUGADOR
                            do{
                                system("cls");
                                showCostumizePlayer();
                                optionPlayer=getche();
                                system("cls");
                                switch(optionPlayer)
                                {
                                    char opt;//Opcion de submenu
                                case 49:
                                    showCostumizeColor();
                                    fflush(stdin);
                                    opt=getche();
                                    costumizePlayerColor(opt,&s_user);
                                    break;
                                case 50:
                                    showCostumizeSkin();
                                    fflush(stdin);
                                    opt=getche();
                                    costumizePlayerSkin(opt,&s_user);
                                    break;
                                }

                            }while(optionPlayer!=ESC);
                            break;

                        case 52: //OPCIONES
                            do{
                                system("cls");
                                showOptions();
                                option=getche();
                                system("cls");
                                switch(option)
                                {
                                    char opt;
                                case 49: //CAMBIAR ALIAS
                                    change_nickName(&users_list);
                                    break;
                                case 50: //CAMBIAR CONTRASEÑA
                                    change_pass(&users_list);
                                    break;
                                case 51: //BORRAR HISTORIAL DE PUNTAJE
                                    showDeleteRecord();
                                    opt=getche();
                                    if(opt==13)//En caso de querer borrarlo
                                    {
                                        delete_score_record(plys_list,curret_user->playerID);
                                        deleting_record();
                                    }

                                    break;
                                }
                            }while(option!=ESC);
                            option=0;
                            break;

                        case 53: //MANUAL
                                showManual();
                            break;

                        case 54: //CREDITOS
                                print_credits();
                            break;
                        }
                    }
                }while(option!=ESC);
            }
            else if(curret_user->condition == 1)//Si es admin
                do{
                    menuAdmin();
                    option=getche();
                    if(option==49)
                        penalize_player(&users_list,&plys_list);

                    else if(option==50)
                        ban_player(&users_list);

                    else if(option==51)
                        reinstate_player(&users_list);

                    else if(option==ESC)
                        able_to_play=0;

                }while(option!=ESC);

        break;

        case 2: //En caso de que no esté logueado

            system("cls");
            register_new_user(&users_list,&plys_list); //Funcion de registro
            system("cls");

        break;
        }
    }while(able_to_play!=0);

    remove_admin_data(&users_list);//Borra los datos del admin para no cargarlos en el arch de jugadores
    write_file(users_list,plys_list,FILE_NAME); //Guarda los datos en un archivo para persistir datos

    return 0;
}


