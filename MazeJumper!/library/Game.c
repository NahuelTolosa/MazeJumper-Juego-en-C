#include "Game.h"

int in_game(char map[],lvlNode* list,plySettings s_user,userNode* current_user)
{
    int coor_player[2];
    int coord_exit[2];
    int score=0;

    for(int i=1;i<=10;i++)
    {
        int dim;
        lvlNode* lvl_node = look_for_node(list,i);

        switch(i)
        {
        case 1:
            dim=X_1;
            break;
        case 2:
            dim=X_2;
            break;
        case 3:
            dim=X_3;
            break;
        case 4:
            dim=X_4;
            break;
        case 5:
            dim=X_5;
            break;
        case 6:
            dim=X_6;
            break;
        case 7:
            dim=X_7;
            break;
        case 8:
            dim=X_8;
            break;
        case 9:
            dim=X_9;
            break;
        case 10:
            dim=X_10;
            break;
        }
        play_music(i);
        count_down();//Cuenta regresiva antes de comenzar
        play_lvl(i,map,coor_player,coord_exit,&score,dim,Y_,lvl_node,s_user);//Empieza el nivel
        stop_music();
    }
    return score;
}
void play_lvl(int lvl, char m[Y_][X_], int c[], int e[], int* score, int x, int y,lvlNode* lvl_node,plySettings s_user)//comienza el nivel
{
    draw_lvl(m,lvl,x,y);//Dibuja el nivel
    set_player(c,s_user);//Posiciona al personaje
    set_exit(e,lvl);//Posiciona la salida
    game_loop(m,lvl,c,e,&score,lvl_node,s_user);//Comienza el juego
}
void game_loop(char m[Y_][X_], int lvl, int c[], int e[],int** score,lvlNode* lvl_node,plySettings s_user)
{
    int time=0;//tiempo
    int time_aux;
    int finish=0;//variable de corte
    int l_score=0;

    define_chronometer(&time_aux,lvl);//Setea el tiempo que tendrá el nivel en cuestion
    set_lvl_info(lvl,s_user);

    do{ //ciclo de repeticion para el movimiento del personaje

        if(GetAsyncKeyState(0X25)||GetAsyncKeyState(65))//Flecha ← o letra 'a'
            move_left(m,c,s_user);//izquierda

        if(GetAsyncKeyState(0X26)||GetAsyncKeyState(87))//Flecha ↑ o letra 'w'
            move_up(m,c,s_user);//arriba

        if(GetAsyncKeyState(0X27)||GetAsyncKeyState(68))//Flecha → o letra 'd'
            move_right(m,c,s_user);//derecha

        if(GetAsyncKeyState(0X28)||GetAsyncKeyState(83))//Flecha ↓ o letra 's'
            move_down(m,c,s_user);//abjo


        Sleep(150);//frena el programa para dar sensación de movimiento

        chronometer(&time,&time_aux,lvl,s_user);//Disminuye el cronometro al cabo de 1 segundo aprox

        if(check_finish(c,e) || !time_aux)//Si se encuentra la salida se termina el nivel o se acaba el tiempo
            finish=1;

    }while(!finish);

    FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));//Limpia el buffer de la lectura de teclas anterior

    l_score = lvl_score(time_aux,lvl);

    (**score)=(**score) + l_score;//sumo al puntaje total, el obtenido en este nivel

    if(lvl_node->score < l_score) //Si el puntaje obtenido esta vez es mayor que el
        lvl_node->score = l_score;//que habia registrado, lo reemplaza

    set_lvl_score_position(lvl_score(time_aux,lvl),lvl,time_aux);//Muestro el puntaje obtenido en este nivel

    Sleep(2000);

}
int set_logIn_menu(userNode* list,char m[Y_][X_],userNode** user)//imprime todo lo que aparece en la pantalla de logueo
{
    int valid;

    char email[50];
    char password[50];

    system("cls");
    log_in(m);
    print_lvl(m,X_,Y_);
    fields_logIn();
    load_email(list,email,&valid,user);
    if(strcmpi(email,"nuevo"))
        load_password(password,(*user)->password);

    return valid;
}
void print_intro()
{
    char menu[Y_][X_];

    intro(menu);
    system("cls");
    print_lvl(menu,X_,Y_);
}
void count_down()//imprime la cuenta regresiva antes de cada nivel
{
    char num_3[Y_][X_];
    char num_2[Y_][X_];
    char num_1[Y_][X_];

    n_3(num_3);
    n_2(num_2);
    n_1(num_1);

    system("cls");
    print_lvl(num_3,X_,Y_);
    Sleep(500);
    system("cls");
    print_lvl(num_2,X_,Y_);
    Sleep(500);
    system("cls");
    print_lvl(num_1,X_,Y_);
    Sleep(500);
}

void game_over(int score)
{
    play_music(11);
    print_gameOver(score);
    gotoxy(48,15);
    SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),11);
    printf("Puntaje Final: %d",score);
    Sleep(3000);
    stop_music();
}

void print_gameOver()
{
    char menu[Y_][X_];

    gameOver(menu);
    system("cls");
    print_lvl(menu,X_,Y_);
}


void print_menu_1()
{
    char menu[Y_][X_];

    menu_1(menu);
    system("cls");
    print_lvl(menu,X_,Y_);
}


void print_st_menu()
{
    char menu[Y_][X_];

    st_menu(menu);
    system("cls");
    print_lvl(menu,X_,Y_);
}


void print_custom_menu()
{
    char menu[Y_][X_];

    custom_menu(menu);
    system("cls");
    print_lvl(menu,X_,Y_);
}
void print_color_menu()
{
    char menu[Y_][X_];

    color_menu(menu);
    system("cls");
    print_lvl(menu,X_,Y_);
}
void print_skin_menu()
{
    char menu[Y_][X_];

    skin_menu(menu);
    system("cls");
    print_lvl(menu,X_,Y_);
}


void print_manual_menu()
{
    char menu[Y_][X_];

    print_box(menu);
    system("cls");
    print_lvl(menu,X_,Y_);
}
void print_credits()
{
    char menu[Y_][X_];

    print_box(menu);
    system("cls");
    print_lvl(menu,X_,Y_);
    SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),11);
    gotoxy(54,6);
    printf("MAZEJUMPER!");
    gotoxy(53,9);
    printf("TRABAJO FINAL");
    gotoxy(55,12);
    printf("ALUMNOS");
    gotoxy(53,13);
    printf("BROCARDO SOFIA");
    gotoxy(53,14);
    printf("TOLOSA NAHUEL");
    gotoxy(57,17);
    printf("MATERIA");
    gotoxy(53,18);
    printf("PROGRAMACION II");
    gotoxy(55,21);
    printf("COMISION 7");
    Sleep(7000);
}


void print_options_menu()
{
    char menu[Y_][X_];

    options_menu(menu);
    system("cls");
    print_lvl(menu,X_,Y_);
}
void print_nickname_menu()
{
    char menu[Y_][X_];

    nickname_menu(menu);
    system("cls");
    print_lvl(menu,X_,Y_);
}
void print_pass_menu()
{
    char menu[Y_][X_];

    pass_menu(menu);
    system("cls");
    print_lvl(menu,X_,Y_);
}
void print_record_menu()
{
    char menu[Y_][X_];

    record_menu(menu);
    system("cls");
    print_lvl(menu,X_,Y_);
}


void print_newUser_menu()
{
    char menu[Y_][X_];

    newUser_menu(menu);
    system("cls");
    print_lvl(menu,X_,Y_);
}
