#include "LogIn.h"

/***FUNCIONES RELACIONADAS AL EMAIL***/
void load_email(userNode* list,char email[],int* valid,userNode** user)//Carga del campo "email"
{
    do{
        clean_email_field();
        gotoxy(47,10);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
        fflush(stdin);
        gets(email);
        switch(validate_email(list,email,user))
        {
        case 0:
            set_email_message();
            break;
        case 1:
            (*valid)=1;
            break;
        case 2:
            (*valid)=2;
            break;
        }

    }while(!validate_email(list,email,user));
    clean_email_message();
}
int validate_email(userNode* list,char email[],userNode** user)//Validacion del mail ingresado
{
    int valid;

    if(check_email(list,email,user))
        valid=1;
    else if(!strcmpi(email,"nuevo"))
        valid=2;
    else
        valid=0;

    return valid;
}
void set_email_message()
{
    gotoxy(74,10);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
    printf("Email invalido. Reingrese.");
}
void clean_email_message()
{
    for(int i=74;i<100;i++)
    {
        gotoxy(i,10);
        printf(" ");
    }
}
void clean_email_field()
{
    for(int i=47;i<72;i++)
    {
        gotoxy(i,10);
        printf(" ");
    }
}


void register_new_user(userNode** u_list,playerNode** p_list)
{
    print_newUser_menu();
    stPlayerRecord aux;
    SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),11);
    gotoxy(51,9);
    printf("INGRESE SU NOMBRE");
    gotoxy(51,10);
    printf("Y PRESION ENTER");
    fflush(stdin);
    gotoxy(51,12);
    gets(aux.userName);
    gotoxy(41,14);
    printf("INGRESE COMO LE GUSTA QUE LO LLAMEN");
    gotoxy(51,15);
    printf("Y PRESION ENTER");
    fflush(stdin);
    gotoxy(51,17);
    gets(aux.nickName);

    gotoxy(40,19);
    printf("INGRESE SU EMAIL CON EL CUAL INGRESARA");
    gotoxy(51,20);
    printf("Y PRESION ENTER");

    do{
        fflush(stdin);
        gotoxy(51,22);
        gets(aux.email);
        if(!validate_new_email(aux.email))
        {
            gotoxy(82,22);
            SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),4);
            printf("Email invalido.Reingrese");
            SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),11);
            clean_email();
        }
        else
        {
            clean_error_message();
        }
    }while(!validate_new_email(aux.email));

    gotoxy(47,24);
    printf("INGRESE SU NUEVA CONTRASENA");
    gotoxy(51,25);
    printf("Y PRESION ENTER");
    fflush(stdin);
    gotoxy(51,27);
    gets(aux.password);

    aux.playerID = get_last_ID(*u_list) + 1;
    aux.condition = 0;
    aux.active = 1;
    aux.lvl = 0;
    aux.score = 0;


    add_user_node(u_list,new_user_node(aux));
    add_ply_node(p_list,new_ply_node(aux));

    playerNode* aux_list = check_ply(*p_list,aux.playerID);//Busca el ususario donde agregar los datos del nivel

    for(int i=1;i<=10;i++)
    {
        aux.lvl = i;
        add_lvl_node(&(aux_list->lvlList),new_lvl_node(aux));//Caraga el registro
    }

}

void clean_error_message()
{
    for(int i=82;i<=105;i++)
    {
        gotoxy(i,22);
        printf(" ");
    }
}

void clean_email()
{
    for(int i=51;i<=81;i++)
    {
        gotoxy(i,22);
        printf(" ");
    }
}

int validate_new_email(char email[])//Validacion del mail ingresado
{
    int valid;

    if(strstr(email,"@") && strstr(email,"."))
        valid=1;
    else
        valid=0;

    return valid;
}

/***FUNCIONES RELACIONADAS A LA CONTRASEÑA***/
void load_password(char password[],char right_pass[])
{
    do{
        clean_password_field();
        gotoxy(47,17);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
        fflush(stdin);
        gets(password);
        if(!check_password(password,right_pass))
            set_password_message();

    }while(!check_password(password,right_pass));

    clean_password_message();
}
int check_password(char password[],char right_pass[])
{
    int valid;

    if(!strcmp(password,right_pass))
        valid=1;
    else
        valid=0;

    return valid;
}
void set_password_message()
{
    gotoxy(74,17);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
    printf("Constrasena invalida. Reingrese.");
}
void clean_password_message()
{
    for(int i=74;i<106;i++)
    {
        gotoxy(i,17);
        printf(" ");
    }
}
void set_asterisks()//Asteriscos donde va la contraseña
{
    gotoxy(47,17);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
    printf("*************************");
}
void clean_password_field()//Borra los steriscos para ingresar la contraseña
{
    for(int i=47;i<72;i++)
    {
        gotoxy(i,17);
        printf(" ");
    }

}

