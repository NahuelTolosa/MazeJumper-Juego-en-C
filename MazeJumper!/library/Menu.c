#include "Menu.h"

void showMenuPlayer()
{
    print_menu_1();
    SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),11);
    gotoxy(31,12);
    printf("1.Jugar");
    gotoxy(31,14);
    printf("2.Ver estadisticas");
    gotoxy(31,16);
    printf("3.Personalizar Jugador");
    gotoxy(31,18);
    printf("4.Opciones");
    gotoxy(31,20);
    printf("5.Manual del jugador");
    gotoxy(31,22);
    printf("6.Creditos");
    gotoxy(31,26);
    printf("ESC para salir\n");
    gotoxy(31,27);
}

/**MENU ESTADISTICAS**/
void showStatistics()
{
    print_st_menu();
    SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),11);
    gotoxy(19,11);
    printf("Personales");
    gotoxy(76,11);
    printf("Globales");
    gotoxy(42,28);
    printf("ESC para volver al menu principal\n");
}


/**MENU PERSONALIZAR JUGADOR**/
void showCostumizePlayer()
{
    print_custom_menu();
    SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),11);
    gotoxy(16,15);
    printf("1.Cambiar color de Avatar");
    gotoxy(16,18);
    printf("2.Cambiar apariencia de Avatar");
    gotoxy(16,21);
    printf("ESC para volver al menu principal");
}
void showCostumizeColor()
{
    print_color_menu();
    SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),11);
    gotoxy(52,13);
    printf("Elija un color");
    gotoxy(43,17);
    printf("1.Azul");
    gotoxy(43,20);
    printf("2.Verde");
    gotoxy(43,23);
    printf("3.Celeste");
    gotoxy(67,17);
    printf("4.Rojo");
    gotoxy(67,20);
    printf("5.Violeta");
    gotoxy(67,23);
    printf("6.Amarillo");
}
void showCostumizeSkin()
{
    print_skin_menu();
    SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),11);
    gotoxy(52,13);
    printf("Elija una skin");
    gotoxy(43,17);
    printf("1.%c",SKIN_1);
    gotoxy(43,20);
    printf("2.%c",SKIN_2);
    gotoxy(43,23);
    printf("3.%c",SKIN_3);
    gotoxy(71,17);
    printf("4.%c",SKIN_4);
    gotoxy(71,20);
    printf("5.%c",SKIN_5);
    gotoxy(71,23);
    printf("6.%c",SKIN_6);
}


/**MENU OPCIONES**/
void showOptions()
{
    print_options_menu();
    SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),11);
    gotoxy(37,13);
    printf("1.Cambiar alias");
    gotoxy(37,17);
    printf("2.Cambiar contrasena");
    gotoxy(37,21);
    printf("3.Borrar historial de puntaje");

    gotoxy(37,27);
    printf("ESC para volver al menu principal");
}
void change_pass(userNode** user)
{
    char new_pass[50];
    print_pass_menu();
    SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),11);
    gotoxy(45,11);
    printf("Esriba su contrasena actual");
    gotoxy(51,12);
    printf("y presione ENTER");
    fflush(stdin);
    int flag=0;
    do{
        SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),11);
        clean_wrong_pass();
        gotoxy(51,15);
        gets(new_pass);
        if(!strcmpi((*user)->password,new_pass))
        {
            clean_message();
            gotoxy(45,19);
            printf("Escriba una nueva contrasena:");
            gotoxy(51,20);
            printf("y presione ENTER");
            fflush(stdin);
            gotoxy(51,23);
            gets(new_pass);
            strcpy((*user)->password,new_pass);
            flag=1;
        }
        else
        {
            gotoxy(83,15);
            SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),4);
            printf("Contraena incorrecta.");
        }
    }while(!flag);

    Sleep(2500);
    gotoxy(44,26);
    printf("Contrasena cambiada con exito!");

    Sleep(2500);
}
void clean_message()
{
    for(int i=83;i<=103;i++)
    {
        gotoxy(i,15);
        printf(" ");
    }
}
void clean_wrong_pass()
{
    for(int i=51;i<=82;i++)
    {
        gotoxy(i,15);
        printf(" ");
    }
}
void change_nickName(userNode** user)
{
    char new_nickName[50];
    print_nickname_menu();
    SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),11);
    gotoxy(48,14);
    printf("Esriba su nuevo alias: ");
    gotoxy(51,15);
    printf("y presione ENTER");
    gotoxy(55,18);
    fflush(stdin);
    gets(new_nickName);
    strcpy((*user)->nickName,new_nickName);
    Sleep(2500);
    gotoxy(47,24);
    printf("Alias Cambiado con exito");
    Sleep(2500);
}

void showDeleteRecord()
{
    print_record_menu();
    SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),11);
    gotoxy(43,11);
    printf("Borrado de historial de puntajes");

    gotoxy(32,15);
    printf("Esta seguro que desea borrar su historial de puntajes?");
    gotoxy(31,17);
    printf("Se perderan todos los datos almacenados hasta el momento.\n");

    gotoxy(44,21);
    printf("Presione ENTER si asi lo desea.");
    gotoxy(45,23);
    printf("Presione ESC para cancelar.");
}
void deleting_record()
{
    Sleep(2500);
    gotoxy(45,27);
    printf("Historial borrado con exito!");
    Sleep(2500);
}

/**MANUAL DEL USUARIO**/
void showManual()
{
    print_manual_menu();
    SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),11);
    gotoxy(47,3);
    printf("De que se trata el juego?");

    gotoxy(31,7);
    printf("El juego consiste en completar un total de 10 laberintos");
    gotoxy(33,9);
    printf("cuya complejidad aumenta conforme el jugador avanza.");

    gotoxy(32,12);
    printf("El objetivo es alcanzar la salida del laberinto lo mas");
    gotoxy(52,14);
    printf("rapido posible");

    gotoxy(33,17);
    printf("El tiempo ira disminuyendo. Mientras mas tiempo haya");
    gotoxy(33,19);
    printf("sobrado, mayor sera el puntaje obtenido en el nivel.");

    gotoxy(31,22);
    printf("Al finalizar el nivel, si el puntaje obtenido es superior");
    gotoxy(28,24);
    printf("al que se haya conseguido anteriormente, este sera reemplazado");

    gotoxy(77,28);
    system("pause");
    system("cls");

    print_manual_menu();
    SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),11);

    gotoxy(52,7);
    printf("Como se juega?");

    gotoxy(30,12);
    printf("El jugador podra usar las flechas arriba, abajo, izquierda");
    gotoxy(31,14);
    printf("y derecha para desplazarse. Tambien podra utilizar las");
    gotoxy(45,16);
    printf("teclas WASD si asi lo desea.");

    gotoxy(77,28);
    system("pause");
    system("cls");
}


/******************************************MENU PRINCIPAL DEL ADMIN**********************************************************/
void menuAdmin()
{
    system("cls");
    printf("\t\t\t<<<Bienvenido>>>\n");

    printf("\n1.Penalizar usuario");
    printf("\n2.Banear ususario");
    printf("\n3.Reintegrar ususario");
    printf("\n\n\nESC para salir");
}

