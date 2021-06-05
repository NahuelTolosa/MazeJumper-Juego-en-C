#include "Admin.h"

void add_admin(userNode** u_list)//Añade los datos del admin al final de la liksta para ingresar como tal
{
    stPlayerRecord aux;

    strcpy(aux.userName,"Administrador");
    strcpy(aux.nickName,"Admin");
    strcpy(aux.email,"user@admin.com");
    strcpy(aux.password,"admin123");
    aux.playerID=0;
    aux.condition=1;
    aux.active=1;
    aux.lvl=0;
    aux.score=0;

    add_user_node(u_list,new_user_node(aux));
}

void remove_admin_data(userNode** u_list)
{
    delete_first_node(u_list);
}

void penalize_player(userNode** u_list,playerNode** p_list)
{
    system("cls");
    int id = 0;
    printf("\nLa penalizacion consiste en eliminar todos los registros de puntajes de un jugador\n");
    printf("\nIngrese el ID del jugador que desea peanlizar: ");
    scanf("%d",&id);

    if(!check_ply(*p_list,id))
    {
        printf("\n\nNo existe jugador con ese ID.");
        Sleep(2000);
    }
    else
    {
        delete_score_record(*p_list,id);
        Sleep(2000);
        printf("\nBorrado con exito.");
        Sleep(2000);
    }
}

void ban_player(userNode** u_list)
{
    system("cls");
    int id = 0;
    printf("\nEl banneo consiste en dar de baja un jugador por incumplir normas\n");
    printf("\nIngrese el ID del jugador que desea bannear: ");
    scanf("%d",&id);

    userNode* aux = check_user(*u_list,id);

    if(!aux)
    {
        printf("\n\nNo existe jugador con ese ID.");
        Sleep(2000);
    }
    else
    {
        change_active(&aux);
        Sleep(2000);
        printf("\n\nBanneado con exito.");
        Sleep(2000);
    }
}

void reinstate_player(userNode** u_list)
{
    system("cls");
    int id = 0;
    printf("\nEn este menu usted podra dar de alta un jugador que fue dado de baja\n");
    printf("\nIngrese el ID del jugador que desea dar de alta: ");
    scanf("%d",&id);

    userNode* aux = check_user(*u_list,id);

    if(!aux)
    {
        printf("\n\nNo existe jugador con ese ID.");
        Sleep(2000);
    }
    else
    {
        change_active(&aux);
        Sleep(2000);
        printf("\n\nReintegrado con exito.");
        Sleep(2000);
    }
}
