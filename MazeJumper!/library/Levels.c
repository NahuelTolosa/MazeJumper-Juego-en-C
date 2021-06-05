#include "Levels.h"

/**Diseño de la introduccion al juego**/
void intro(char m[Y_][X_])
{
    for(int i=0 ; i<Y_ ; i++)
    {
        for(int j=0 ; j<X_ ; j++)
        {
            if(i==0 || i==Y_-1)//Delimita los bordes superiores
            {
                m[i][j]=219;
            }
            else
            {
                if(j==0 || j==1 || j==X_-2 || j==X_-1)//Delimita los bordes laterales
                {
                    m[i][j]=219;
                }
                else
                {
                    if((i>0 && i<12)||(i>16 && i<29))//Establece los espacios internos que no contienen careacteres
                        m[i][j]=' ';
                    else
                    {
                        switch(i)//Escribe "MAZE JUMPER" en la consola
                        {
                        case 12:
                            if(j==35 || j==39 || (j>41 && j<44) || (j>45 && j<50) || (j>50 && j<55) || (j>56 && j<61) || j==62 || j==65 || j==67 || j==71 || (j>72 && j<77) || (j>77 && j<82) || (j>82 && j<87))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 13:
                            if((j>34 && j<37) || (j>37 && j<40) || j==41 || j==44 || j==49 || j==51 || j==60 || j==62 || j==65 || (j>66 && j<69) || (j>69 && j<72)|| j==73 || j==76 || j==78 || j==83 || j==86)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 14:
                            if(j==35 || j==37 || j==39 || (j>40 && j<45) || (j>46 && j<49) || (j>50 && j<55) || j==60 || j==62 || j==65 || j==67 || j==69 || j==71 || (j>72 && j<77) || (j>77 && j<82) || (j>82 && j<87))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 15:
                            if(j==35 || j==39 || j==41 || j==44 || j==46 || j==51 || j==57 || j==60 || j==62 || j==65 || j==67 || j==71 || j==73 || j==78 || j==83 || j==85)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 16:
                            if(j==35 || j==39 || j==41 || j==44 || (j>45 && j<50) || (j>50 && j<55) || (j>57 && j<60) || (j>62 && j<65) || j==67 || j==71 || j==73 || (j>77 && j<82) || j==83 || j==86)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                        }
                    }
                }
            }
        }
    }
}
/************************************************/


/**Diseño de la pantalla de Logueo**/
void log_in(char m[Y_][X_])//Diseño del menu de logueo
{
    for(int i=0 ; i<Y_ ; i++)
    {
        for(int j=0 ; j<X_ ; j++)
        {
            if(i==0 || i==Y_-1)
            {
                m[i][j]=219;
            }
            else
            {
                if(j==0 || j==1 || j==X_-2 || j==X_-1)
                {
                    m[i][j]=219;
                }
                else
                {
                    if((i>0 && i<6) || (i==12) || (i>18 && i<29))
                        m[i][j]=' ';
                    else
                    {
                        if(i==7 ||i==8 || i==10 || i==14 || i==15 || i==17)
                        {
                            if(j==46 || j==72)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                        }
                        if(i==6 || i==9 || i==11 || i==13 || i==16 || i==18)
                        {
                            if(j>45 && j<73)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                        }
                    }
                }
            }
        }
    }
}
void fields_logIn()//Setea los textos del apartado de logueo
{
    gotoxy(51,7);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
    printf("INGRESE SU CORREO");
    gotoxy(51,8);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
    printf("Y PRESIONE 'ENTER'");
    gotoxy(49,14);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
    printf("INGRESE SU CONTRASENA");
    gotoxy(51,15);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
    printf("Y PRESIONE 'ENTER'");
    gotoxy(47,23);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
    printf("SI AUN NO ESTA REGISTRADO");
    gotoxy(52,24);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
    printf("ESCRIBA 'NUEVO'");
    set_asterisks();
}
/************************************************/

/**Diseño de los menues del juego**/

void gameOver(char m[Y_][X_])
{
    for(int i=0 ; i<Y_ ; i++)
    {
        for(int j=0 ; j<X_ ; j++)
        {
            if(i==0 || i==Y_-1)//Delimita los bordes superiores
            {
                m[i][j]=219;
            }
            else
            {
                if(j==0 || j==1 || j==X_-2 || j==X_-1)//Delimita los bordes laterales
                {
                    m[i][j]=219;
                }
                else
                {
                    if((i>0 && i<4)||(i>8 && i<29))//Establece los espacios internos que no contienen careacteres
                        m[i][j]=' ';
                    else
                    {
                        switch(i)//Escribe "GAME OVER" en la consola
                        {
                        case 4:
                            if((j>34 && j<38) || (j>40 && j<43) || j==46 || j==50 || (j>52 && j<57) || (j>61 && j<64) || j==67 || j==71 || (j>73 && j<78) || (j>79 && j<83))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 5:
                            if(j==34 || j==40 || j==43 || (j>45 && j<48) || (j>48 && j<51) || j==53 || j==61 || j==64 || j==67 || j==71 || j==74 || j==80 || j==83)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 6:
                            if(j==34 || (j>35 && j<38) || j==40 || j==43 || j==46 || j==48 || j==50 || (j>53 && j<57) || j==61 || j==64 || j==67 || j==71 || (j>73 && j<78) || (j>79 && j<83))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 7:
                            if(j==34 || j==37 || (j>39 && j<44) || j==46 || j==50 || j==53 || j==61 || j==64 || j==68 || j==70 || j==74 || j==80 || j==83)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 8:
                            if((j>34 && j<37) || j==40 || j==43 ||  j==46 || j==50 || (j>52 && j<57) || (j>61 && j<64) || j==69 || (j>73 && j<78) || j==80 || j==83)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                        }
                    }
                }
            }
        }
    }
}
void menu_1(char m[Y_][X_])
{
    for(int i=0 ; i<Y_ ; i++)
    {
        for(int j=0 ; j<X_ ; j++)
        {
            if(i==0 || i==Y_-1)//Delimita los bordes superiores
            {
                m[i][j]=219;
            }
            else
            {
                if(j==0 || j==1 || j==X_-2 || j==X_-1)//Delimita los bordes laterales
                {
                    m[i][j]=219;
                }
                else
                {
                    if((i>0 && i<4)||(i>8 && i<29))//Establece los espacios internos que no contienen careacteres
                        m[i][j]=' ';
                    else
                    {
                        switch(i)//Escribe "BIENVENIDO" en la consola
                        {
                        case 4:
                            if((j>30 && j<35) || j==38 || (j>40 && j<45) || j==47 || j==51 || j==54 || j==58 || (j>60 && j<65) || j==67 || j==71 || j==74 || (j>76 && j<80) || (j>83 && j<87))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 5:
                            if(j==31 || j==35 || j==38 || j==41 || (j>46&&j<49) || j==51 || j==54 || j==58 || j==61 || (j>66&&j<69) || j==71 || j==74 || j==77 || j==80 || j==83 || j==87)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 6:
                            if((j>30 && j<35) || j==38 || (j>40 && j<45) || j==47 || j==49 || j==51 || j==54 || j==58 || (j>60 && j<65) || j==67 || j==69 || j==71 || j==74 || j==77 || j==80 || j==83 || j==87)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 7:
                            if(j==31 || j==35 || j==38 || j==41 || j==47 || (j>49&&j<52) || j==55 || j==57 || j==61 || j==67 || (j>69&&j<72) || j==74 || j==77 || j==80 || j==83 || j==87)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 8:
                            if((j>30 && j<35) || j==38 || (j>40 && j<45) || j==47 || j==51 || j==56 || (j>60 && j<65) || j==67 || j==71 || j==74 || (j>76 && j<80) || (j>83 && j<87))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                        }
                    }
                }
            }
        }
    }
}

void st_menu(char m[Y_][X_])
{
    for(int i=0 ; i<Y_ ; i++)
    {
        for(int j=0 ; j<X_ ; j++)
        {
            if(i==0 || i==Y_-1)//Delimita los bordes superiores
            {
                m[i][j]=219;
            }
            else
            {
                if(j==0 || j==1 || j==X_-2 || j==X_-1)//Delimita los bordes laterales
                {
                    m[i][j]=219;
                }
                else
                {
                    if((i>0 && i<4)||(i>8 && i<29))//Establece los espacios internos que no contienen careacteres
                        m[i][j]=' ';
                    else
                    {
                        switch(i)//Escribe "ESTADISTICAS" en la consola
                        {
                        case 4:
                            if((j>26 && j<31) || (j>33 && j<37) || (j>38 && j<44) || (j>46 && j<49) || (j>51 && j<55) || j==58 || (j>61 && j<65) || (j>66 && j<72) || j==74 || (j>77 && j<81) || (j>83 && j<86) || (j>89 && j<93))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 5:
                            if(j==27 || j==33 || j==41 || j==46 || j==49 || j==52 || j==55 || j==58 || j==61 || j==69 || j==74 || j==77 || j==83 || j==86 || j==89)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 6:
                            if((j>26 && j<31) || (j>33 && j<36) || j==41 || j==46 || j==49 || j==52 || j==55 || j==58 || (j>61 && j<64) || j==69 || j==74 || j==77 || j==83 || j==86 || (j>89 && j<92))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 7:
                            if(j==27 || j==36 || j==41 || (j>45 && j<50) || j==52 || j==55 || j==58 || j==64 || j==69 || j==74 || j==77 || (j>82 && j<87) || j==92)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 8:
                            if((j>26 && j<31) || (j>32 && j<36) || j==41 || j==46 || j==49 || (j>51 && j<55) || j==58 || (j>60 && j<64) || j==69 || j==74 || (j>77 && j<81) || j==83 || j==86 || (j>88 && j<92))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                        }
                    }
                }
            }
        }
    }
}
void custom_menu(char m[Y_][X_])
{
    for(int i=0 ; i<Y_ ; i++)
    {
        for(int j=0 ; j<X_ ; j++)
        {
            if(i==0 || i==Y_-1)//Delimita los bordes superiores
            {
                m[i][j]=219;
            }
            else
            {
                if(j==0 || j==1 || j==X_-2 || j==X_-1)//Delimita los bordes laterales
                {
                    m[i][j]=219;
                }
                else
                {
                    if((i>0 && i<4)||(i>8 && i<29))//Establece los espacios internos que no contienen careacteres
                        m[i][j]=' ';
                    else
                    {
                        switch(i)//Escribe "PERSONALIZACION" en la consola
                        {
                        case 4:
                            if((j>15 && j<19) || (j>21 && j<26) || (j>27 && j<31) || (j>34 && j<38) || (j>40 && j<44) || j==47 || j==51 || (j>54 && j<57) || j==60 || j==66 || (j>68 && j<72) || (j>75 && j<78) || (j>81 && j<85) || j==87 || (j>90 && j<94) || j==97 || j==101)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 5:
                            if(j==16 || j==19 || j==22 || j==28 || j==31 || j==34 || j==40 || j==44 || (j>46 && j<49) || j==51 || j==54 || j==57 || j==60 || j==66 || j==72 || j==75 || j==78 || j==81 || j==87 || j==90 || j==94 || (j>96 && j<99) || j==101)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 6:
                            if((j>15 && j<19) || (j>21 && j<26) || (j>27 && j<31) || (j>34 && j<37) || j==40 || j==44 || j==47 || j==49 || j==51 || j==54 || j==57 || j==60 || j==66 || (j>69 && j<72) || j==75 || j==78 || j==81 || j==87 || j==90 || j==94 || j==97 || j==99 || j==101)
                               m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 7:
                            if(j==16 || j==22 || j==28 || j==31 || j==37 || j==40 || j==44 || j==47 || (j>49 && j<52) || (j>53 && j<58) || j==60 || j==66 || j==69 || (j>74 && j<79) || j==81 || j==87 || j==90 || j==94 || j==97 || (j>99 && j<102))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 8:
                            if(j==16 || (j>21 && j<26) || j==28 || j==31 || (j>33 && j<37) || (j>40 && j<44) || j==47 || j==51 || j==54 || j==57 || (j>59 && j<64) || j==66 || (j>68 && j<73) || j==75 || j==78 || (j>81 && j<85) || j==87 || (j>90 && j<94) || j==97 || j==101)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                        }
                    }
                }
            }
        }
    }
}
void color_menu(char m[Y_][X_])
{
    for(int i=0 ; i<Y_ ; i++)
    {
        for(int j=0 ; j<X_ ; j++)
        {
            if(i==0 || i==Y_-1)//Delimita los bordes superiores
            {
                m[i][j]=219;
            }
            else
            {
                if(j==0 || j==1 || j==X_-2 || j==X_-1)//Delimita los bordes laterales
                {
                    m[i][j]=219;
                }
                else
                {
                    if((i>0 && i<4)||(i>8 && i<29))//Establece los espacios internos que no contienen careacteres
                        m[i][j]=' ';
                    else
                    {
                        switch(i)//Escribe "COLOR" en la consola
                        {
                        case 4:
                            if((j>43 && j<47) || (j>49 && j<53) || j==56 || (j>62 && j<66) || (j>68 && j<73))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 5:
                            if(j==43 || j==49 || j==53 || j==56 || j==62 || j==66 || j==69 || j==73)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 6:
                            if(j==43 || j==49 || j==53 || j==56 || j==62 || j==66 || j==69 || (j>68 && j<73))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 7:
                            if(j==43 || j==49 || j==53 || j==56 || j==62 || j==66 || j==69 || j==73)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 8:
                            if((j>43 && j<47) || (j>49 && j<53) || (j>55 && j<60) || (j>62 && j<66) || j==69 || j==73)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                        }
                    }
                }
            }
        }
    }
}
void skin_menu(char m[Y_][X_])
{
    for(int i=0 ; i<Y_ ; i++)
    {
        for(int j=0 ; j<X_ ; j++)
        {
            if(i==0 || i==Y_-1)//Delimita los bordes superiores
            {
                m[i][j]=219;
            }
            else
            {
                if(j==0 || j==1 || j==X_-2 || j==X_-1)//Delimita los bordes laterales
                {
                    m[i][j]=219;
                }
                else
                {
                    if((i>0 && i<4)||(i>8 && i<29))//Establece los espacios internos que no contienen careacteres
                        m[i][j]=' ';
                    else
                    {
                        switch(i)//Escribe "SKIN" en la consola
                        {
                        case 4:
                            if((j>49 && j<53) || j==55 || j==58 || j==61 || j==64 || j==68)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 5:
                            if(j==49 || j==55 || j==57 || j==61 || (j>63 && j<66) || j==68)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 6:
                            if((j>49 && j<52) || (j>54 && j<57) || j==61 || j==64 || j==66 || j==68)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 7:
                            if(j==52 || j==55 || j==57 || j==61 || j==64 || (j>66 && j<69))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 8:
                            if((j>48 && j<52) || j==55 || j==58 || j==61 || j==64 || j==68)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                        }
                    }
                }
            }
        }
    }
}
void print_box(char m[Y_][X_])
{

    for(int i=0 ; i<Y_ ; i++)
    {
        for(int j=0 ; j<X_ ; j++)
        {
            if(i==0 || i==Y_-1)//Delimita los bordes superiores
                m[i][j]=219;

            else if(j==0 || j==1 || j==X_-2 || j==X_-1)//Delimita los bordes laterales
                m[i][j]=219;

            else
                m[i][j]=' ';
        }
    }
}
void options_menu(char m[Y_][X_])
{
    for(int i=0 ; i<Y_ ; i++)
    {
        for(int j=0 ; j<X_ ; j++)
        {
            if(i==0 || i==Y_-1)//Delimita los bordes superiores
            {
                m[i][j]=219;
            }
            else
            {
                if(j==0 || j==1 || j==X_-2 || j==X_-1)//Delimita los bordes laterales
                {
                    m[i][j]=219;
                }
                else
                {
                    if((i>0 && i<4)||(i>8 && i<29))//Establece los espacios internos que no contienen careacteres
                        m[i][j]=' ';
                    else
                    {
                        switch(i)//Escribe "OPCIONES" en la consola
                        {
                        case 4:
                            if((j>37 && j<40) || (j>42 && j<46) || (j>49 && j<53) || j==55 || (j>58 && j<61) || j==64 || j==68 || (j>70 && j<75) || (j>77 && j<81))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 5:
                            if(j==37 || j==40 || j==43 || j==46 || j==49 || j==55 || j==58 || j==61 || (j>63 && j<66) || j==68 || j==71 || j==77)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 6:
                            if(j==37 || j==40 || (j>42 && j<46) || j==49 || j==55 || j==58 || j==61 || j==64 || j==66 || j==68 || (j>70 && j<75) || (j>77 && j<80))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 7:
                            if( j==37 || j==40 || j==43 || j==49 || j==55 || j==58 || j==61 || j==64 || (j>66 && j<69) || j==71 || j==80)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 8:
                            if((j>37 && j<40) || j==43 || (j>49 && j<53) || j==55 || (j>58 && j<61) || j==64 || j==68 || (j>70 && j<75) || (j>76 && j<80))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                        }
                    }
                }
            }
        }
    }
}
void nickname_menu(char m[Y_][X_])
{
    for(int i=0 ; i<Y_ ; i++)
    {
        for(int j=0 ; j<X_ ; j++)
        {
            if(i==0 || i==Y_-1)//Delimita los bordes superiores
            {
                m[i][j]=219;
            }
            else
            {
                if(j==0 || j==1 || j==X_-2 || j==X_-1)//Delimita los bordes laterales
                {
                    m[i][j]=219;
                }
                else
                {
                    if((i>0 && i<4)||(i>8 && i<29))//Establece los espacios internos que no contienen careacteres
                        m[i][j]=' ';
                    else
                    {
                        switch(i)//Escribe "CAMBIAR ALIAS" en la consola
                        {
                        case 4:
                            if((j>26 && j<30) || (j>32 && j<35) ||j==38 ||  j==42 || (j>44 && j<48) || j==51 || (j>54 && j<57) || (j>59 && j<63) || (j>68 && j<71) || j==74 || j==80 || (j>83 && j<86) || (j>89 && j<93))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 5:
                            if(j==26 || j==32 || j==35 || (j>37 && j<40) || (j>40 && j<43) || j==45 || j==48 || j==51 || j==54 || j==57 || j==60 || j==63 || j==68 || j==71 || j==74 || j==80 || j==83 || j==86 || j==89)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 6:
                            if(j==26 || j==32 || j==35 || j==38 || j==40 || j==42 || (j>44 && j<48) || j==51 || j==54 || j==57 || (j>59 && j<63) || j==68 || j==71 || j==74 || j==80 || j==83 || j==86 || (j>89 && j<92))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 7:
                            if(j==26 || (j>31 && j<36) || j==38 || j==42 || j==45 || j==48 || j==51 || (j>53 && j<58) || j==60 || j==63 || (j>67 && j<72) || j==74 || j==80 || (j>82 && j<87) || j==92)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 8:
                            if((j>26 && j<30) || j==32 || j==35 || j==38 || j==42 || (j>44 && j<48) || j==51 || j==54 || j==57 || j==60 || j==63 || j==68 || j==71 || (j>73 && j<78) || j==80 || j==83 || j==86 || (j>88 && j<92))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                        }
                    }
                }
            }
        }
    }
}
void pass_menu(char m[Y_][X_])
{
    for(int i=0 ; i<Y_ ; i++)
    {
        for(int j=0 ; j<X_ ; j++)
        {
            if(i==0 || i==Y_-1)//Delimita los bordes superiores
            {
                m[i][j]=219;
            }
            else
            {
                if(j==0 || j==1 || j==X_-2 || j==X_-1)//Delimita los bordes laterales
                {
                    m[i][j]=219;
                }
                else
                {
                    if((i>0 && i<4)||(i>8 && i<29))//Establece los espacios internos que no contienen careacteres
                        m[i][j]=' ';
                    else
                    {
                        switch(i)//Escribe "CAMBIAR PASS" en la consola
                        {
                        case 4:
                            if((j>27 && j<31) || (j>33 && j<36) ||j==39 ||  j==43 || (j>45 && j<49) || j==52 || (j>55 && j<58) || (j>60 && j<64) || (j>68 && j<72) || (j>75 && j<78) || (j>81 && j<85) || (j>87 && j<91))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 5:
                            if(j==27 || j==33 || j==36 || (j>38 && j<41) || (j>41 && j<44) || j==46 || j==49 || j==52 || j==55 || j==58 || j==61 || j==64 || j==69 || j==72 || j==75 || j==78 || j==81 || j==87)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 6:
                            if(j==27 || j==33 || j==36 || j==39 || j==41 || j==43 || (j>45 && j<49) || j==52 || j==55 || j==58 || (j>60 && j<64) || (j>68 && j<72) || j==75 || j==78 || (j>81 && j<84) || (j>87 && j<91))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 7:
                            if(j==27 || (j>32 && j<37) || j==39 || j==43 || j==46 || j==49 || j==52 || (j>54 && j<59) || j==61 || j==64 || j==69 || (j>74 && j<79) || j==84 || j==90)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 8:
                            if((j>27 && j<31) || j==33 || j==36 || j==39 || j==43 || (j>45 && j<49) || j==52 || j==55 || j==58 || j==61 || j==64 || j==69 || j==75 || j==78 || (j>80 && j<84) || (j>86 && j<90))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                        }
                    }
                }
            }
        }
    }
}
void record_menu(char m[Y_][X_])
{
    for(int i=0 ; i<Y_ ; i++)
    {
        for(int j=0 ; j<X_ ; j++)
        {
            if(i==0 || i==Y_-1)//Delimita los bordes superiores
            {
                m[i][j]=219;
            }
            else
            {
                if(j==0 || j==1 || j==X_-2 || j==X_-1)//Delimita los bordes laterales
                {
                    m[i][j]=219;
                }
                else
                {
                    if((i>0 && i<4)||(i>8 && i<29))//Establece los espacios internos que no contienen careacteres
                        m[i][j]=' ';
                    else
                    {
                        switch(i)//Escribe "BORRAR PUNTAJES" en la consola
                        {
                        case 4:
                            if((j>15 && j<19) || (j>22 && j<25) || (j>27 && j<31) || (j>33 && j<37) || (j>40 && j<43) || (j>45 && j<49) || (j>53 && j<57) || j==60 || j==63 || j==66 || j==70 || (j>72 && j<78) || (j>80 && j<83) || (j>85 && j<90) || (j>91 && j<96) || (j>98 && j<102))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 5:
                            if(j==16 || j==19 || j==22 || j==25 || j==28 || j==31 || j==34 || j==37 || j==40 || j==43 || j==46 || j==49 || j==54 || j==57 || j==60 || j==63 || (j>65 && j<68) || j==70 || j==75 || j==80 || j==83 || j==89 || j==92 || j==98)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 6:
                            if((j>15 && j<19) || j==22 || j==25 || (j>27 && j<31) || (j>33 && j<37) || j==40 || j==43 || (j>45 && j<49) || (j>53 && j<57) || j==60 || j==63 || j==66 || j==68 || j==70 || j==75 || j==80 || j==83 || j==89 || (j>91 && j<96) || (j>98 && j<101))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 7:
                            if(j==16 || j==19 || j==22 || j==25 || j==28 || j==31 || j==34 || j==37 || (j>39 && j<44) || j==46 || j==49 || j==54 || j==60 || j==63 || j==66 || (j>68 && j<71) || j==75 || (j>79 && j<84) || j==86 || j==89 || j==92 || j==101)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 8:
                            if((j>15 && j<19) || (j>22 && j<25) || j==28 || j==31 || j==34 || j==37 || j==40 || j==43 || j==46 || j==49 || j==54 || (j>60 && j<63) || j==66 || j==70 || j==75 || j==80 || j==83 || (j>86 && j<89) || (j>91 && j<96) || (j>98 && j<101))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                        }
                    }
                }
            }
        }
    }
}
void newUser_menu(char m[Y_][X_])
{
    for(int i=0 ; i<Y_ ; i++)
    {
        for(int j=0 ; j<X_ ; j++)
        {
            if(i==0 || i==Y_-1)//Delimita los bordes superiores
            {
                m[i][j]=219;
            }
            else
            {
                if(j==0 || j==1 || j==X_-2 || j==X_-1)//Delimita los bordes laterales
                {
                    m[i][j]=219;
                }
                else
                {
                    if((i>0 && i<3)||(i>7 && i<29))//Establece los espacios internos que no contienen careacteres
                        m[i][j]=' ';
                    else
                    {
                        switch(i)//Escribe "NUEVO USUARIO" en la consola
                        {
                        case 3:
                            if(j==23 || j==27 || j==30 || j==33 || (j>35 && j<40) || j==42 || j==46 || (j>49 && j<52) || j==57 ||  j==60 || (j>63 && j<67) || j==69 || j==72 || (j>75 && j<78) || (j>80 && j<84) || j==87 || (j>90 && j<93))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 4:
                            if((j>22 && j<25) || j==27 || j==30 || j==33 || j==36 || j==42 || j==46 || j==49 || j==52 || j==57 || j==60 || j==63 || j==69 || j==72 || j==75 || j==78 || j==81 || j==84 || j==87 || j==90 || j==93)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 5:
                            if(j==23 || j==25 || j==27 || j==30 || j==33 || (j>35 && j<40) || j==42 || j==46 || j==49 || j==52 || j==57 || j==60 || (j>63 && j<66) || j==69 || j==72 || j==75 || j==78 || (j>80 && j<84) || j==87 || j==90 || j==93)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 6:
                            if(j==23 || (j>25 && j<28) || j==30 || j==33 || j==36 || j==43 || j==45 || j==49 || j==52 || j==57 || j==60 || j==66 || j==69 || j==72 || (j>74 && j<79) || j==81 || j==84 || j==87 || j==90 || j==93)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 7:
                            if(j==23 || j==27 || (j>30 && j<33) || (j>35 && j<40) || j==44 || (j>49 && j<52) || (j>57 && j<60) || (j>62 && j<66) || (j>69 && j<72) || j==75 || j==78 || j==81 || j==84 || j==87 || (j>90 && j<93))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                        }
                    }
                }
            }
        }
    }
}

/************************************************/

/**Diseño del Countdown**/
void n_3(char m[Y_][X_])
{
    for(int i=0 ; i<Y_ ; i++)
    {
        for(int j=0 ; j<X_ ; j++)
        {
            if(i==0 || i==Y_-1)
            {
                m[i][j]=219;
            }
            else
            {
                if(j==0 || j==1 || j==X_-2 || j==X_-1)
                {
                    m[i][j]=219;
                }
                else
                {
                    if((i>0&&i<11)||(i>17&&i<29))
                    {
                        m[i][j]=' ';
                    }
                    else
                    {
                        switch(i)
                        {
                        case 11:
                            if(j>57 && j<61)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 12:
                            if(j>60 && j<63)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 13:
                            if(j>60 && j<63)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 14:
                            if(j>57 && j<61)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 15:
                            if(j>60 && j<63)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 16:
                            if(j>60 && j<63)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 17:
                            if(j>57 && j<61)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        }
                    }
                }
            }
        }
    }
}
void n_2(char m[Y_][X_])
{
    for(int i=0 ; i<Y_ ; i++)
    {
        for(int j=0 ; j<X_ ; j++)
        {
            if(i==0 || i==Y_-1)
            {
                m[i][j]=219;
            }
            else
            {
                if(j==0 || j==1 || j==X_-2 || j==X_-1)
                {
                    m[i][j]=219;
                }
                else
                {
                    if((i>0&&i<11)||(i>17&&i<29))
                    {
                        m[i][j]=' ';
                    }
                    else
                    {
                        switch(i)
                        {
                        case 11:
                            if(j>58 && j<62)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 12:
                            if(j==62)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 13:
                            if(j==62)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 14:
                            if(j==61)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 15:
                            if(j==60)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 16:
                            if(j==59)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 17:
                            if(j>58 && j<63)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        }
                    }
                }
            }
        }
    }
}
void n_1(char m[Y_][X_])
{
    for(int i=0 ; i<Y_ ; i++)
    {
        for(int j=0 ; j<X_ ; j++)
        {
            if(i==0 || i==Y_-1)
            {
                m[i][j]=219;
            }
            else
            {
                if(j==0 || j==1 || j==X_-2 || j==X_-1)
                {
                    m[i][j]=219;
                }
                else
                {
                    if((i>0&&i<11)||(i>17&&i<29))
                    {
                        m[i][j]=' ';
                    }
                    else
                    {
                        switch(i)
                        {
                        case 11:
                            if(j==61)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 12:
                            if(j>59 && j<62)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 13:
                            if(j==59 || j==61)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 14:
                            if(j==61)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 15:
                            if(j==61)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 16:
                            if(j==61)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 17:
                            if(j==61)
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        }
                    }
                }
            }
        }
    }
}
/************************************************/


/**Diseño de niveles**/
void lvl_1(char m[Y_][X_])
{
    system("color 0B");
    for(int i=0 ; i<Y_ ; i++)
    {
        for(int j=0 ; j<X_ ; j++)
        {
            if(i==0 || i==Y_-1)//Limites superiores e inferiores del mapa
            {
                m[i][j]=219;
            }
            else
            {
                if(j==0 || j==1 || j==X_1-2 || j==X_1-1)//Limites laterales del mapa
                {
                    m[i][j]=219;

                    if(i==1 && (j==58 || j==59))//Salida!
                        m[i][j]=' ';
                }
                else
                {
                    if(j>=X_1)
                    {
                        m[i][j]=' ';
                    }
                    else
                    {

                        switch(i) //Diseño de las paredes internas del laberinto
                        {
                        case 1:
                            if((j>11 && j<14) || (j>23 && j<26) || (j>35 && j<38) || (j>43 && j<46) || (j>51 && j<54))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 2:
                            if((j>9 && j<20) || (j>23 && j<30) || (j>35 && j<38) || (j>43 && j<46) || (j>51 && j<54))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 3:
                            if((j>3 && j<12) || (j>13 && j<16) || (j>27 && j<30) || (j>43 && j<46) || (j>51 && j<54) || (j>55 && j<58))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 4:
                            if((j>13 && j<22) || (j>23 && j<26) || (j>35 && j<38) || (j>47 && j<54))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 5:
                            if((j>5 && j<8) || (j>9 && j<12) || (j>13 && j<16) || (j>19 && j<22) || (j>23 && j<32) || (j>33 && j<44) || (j>51 && j<56))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 6:
                            if((j>5 && j<8) || (j>9 && j<12) || (j>13 && j<16) || (j>19 && j<22) || (j>23 && j<26) || (j>39 && j<42) || (j>51 && j<54))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 7:
                            if((j>5 && j<8) || (j>27 && j<31) || (j>35 && j<38) || (j>43 && j<54) || (j>55 && j<58))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 8:
                            if((j>3 && j<8) || (j>9 && j<20) || (j>23 && j<26) || (j>29 && j<38) || (j>39 && j<42) || (j>43 && j<46) || (j>51 && j<54))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 9:
                            if((j>5 && j<8) || (j>17 && j<20) || (j>23 && j<26) || (j>29 && j<32) || (j>39 && j<42) || (j>43 && j<46) || (j>51 && j<56))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 10:
                            if((j>1 && j<4) || (j>5 && j<16) || (j>17 && j<20) || (j>23 && j<26) || (j>39 && j<42) || (j>51 && j<54))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 11:
                            if((j>5 && j<8) || (j>17 && j<30) || (j>31 && j<48) || (j>51 && j<54))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 12:
                            if((j>1 && j<4) || (j>5 && j<8) || (j>11 && j<14) || (j>17 && j<20) || (j>27 && j<30) || (j>31 && j<34) || (j>43 && j<46) || (j>51 && j<54))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 13:
                            if((j>1 && j<4) || (j>5 && j<8) || (j>11 && j<14) || (j>17 && j<20) || (j>27 && j<30) || (j>31 && j<34) || (j>43 && j<54))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 14:
                            if((j>1 && j<4) || (j>23 && j<26) || (j>27 && j<30) || (j>43 && j<46) || (j>51 && j<54))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 15:
                            if((j>1 && j<6) || (j>7 && j<18) || (j>23 && j<26) || (j>27 && j<30) || (j>31 && j<34))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 16:
                            if((j>1 && j<4) || (j>7 && j<10) || (j>11 && j<14) || (j>23 && j<26) || (j>31 && j<42) || (j>43 && j<50) || (j>51 && j<58))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 17:
                            if((j>1 && j<4) || (j>7 && j<10) || (j>11 && j<14) || (j>23 && j<26) || (j>31 && j<34) || (j>45 && j<48) || (j>53 && j<56))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 18:
                            if((j>1 && j<4) || (j>7 && j<10) || (j>11 && j<22) || (j>23 && j<26) || (j>31 && j<34) || (j>45 && j<48) || (j>53 && j<56))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 19:
                            if((j>11 && j<14) || (j>23 && j<26) || (j>31 && j<44) || (j>45 && j<52) || (j>53 && j<56))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 20:
                            if((j>3 && j<6) || (j>11 && j<14) || (j>23 && j<26) || (j>37 && j<40) || (j>45 && j<48) || (j>49 && j<52) || (j>53 && j<56))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 21:
                            if((j>3 && j<6) || (j>9 && j<20) || (j>21 && j<34) || (j>37 && j<40) || (j>45 && j<48) || (j>49 && j<52) || (j>53 && j<56))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 22:
                            if((j>17 && j<20) || (j>21 && j<24) || (j>37 && j<40) || (j>53 && j<56))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 23:
                            if((j>3 && j<8) || (j>13 && j<16) || (j>17 && j<20) || (j>21 && j<24) || (j>31 && j<34) || (j>37 && j<40) || (j>45 && j<48))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 24:
                            if((j>5 && j<16) || (j>21 && j<24) || (j>31 && j<54))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 25:
                            if((j>21 && j<24) || (j>27 && j<34) || (j>35 && j<38) || (j>49 && j<52))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 26:
                            if((j>1 && j<8) || (j>13 && j<24) || (j>31 && j<34) || (j>39 && j<46) || (j>49 && j<52))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 27:
                            if((j>9 && j<12) || (j>15 && j<18) || (j>21 && j<24) || (j>31 && j<34) || (j>35 && j<38) || (j>43 && j<46) || (j>49 && j<52))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 28:
                            if((j>9 && j<12) || (j>23 && j<28) || (j>35 && j<38) || (j>43 && j<46))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        }
                    }
                }
            }
        }
    }
}
void lvl_2(char m[Y_][X_])
{
    system("COLOR 02");
    for(int i=0 ; i<Y_ ; i++)
    {
        for(int j=0 ; j<X_ ; j++)
        {
            if(i==0 || i==Y_-1)//Limites superiores e inferiores del mapa
            {
                m[i][j]=219;
            }
            else
            {
                if(j==0 || j==1 || j==X_2-2 || j==X_2-1)//Limites laterales del mapa
                {
                    m[i][j]=219;
                    if(i==28 && (j==60 || j==61))//Salida!
                    {
                        m[i][j]=' ';
                    }
                }
                else
                {
                    if(j>=X_2)
                    {
                        m[i][j]=' ';
                    }
                    else
                    {

                        switch(i) //Diseño de las paredes internas del laberinto
                        {
                        case 1:
                            if((j>9 && j<12)||(j>29 && j<32)||(j>33 && j<36)||(j>43 && j<46)||(j>51 && j<54))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 2:
                            if((j>3 && j<6)||(j>7 && j<12)||(j>13 && j<24)||(j>25 && j<32)||(j>39 && j<42)||(j>43 && j<46)||(j>47 && j<50)||(j>51 && j<56))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 3:
                            if((j>3 && j<6)||(j>13 && j<16)||(j>29 && j<32)||(j>33 && j<38)||(j>43 && j<46)||(j>47 && j<50)||(j>53 && j<56)||(j>57 && j<60))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 4:
                            if((j>3 && j<8)||(j>9 && j<20)||(j>21 && j<26)||(j>29 && j<32)||(j>33 && j<36)||(j>39 && j<42)||(j>53 && j<56))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 5:
                            if((j>3 && j<6)||(j>11 && j<14)||(j>23 && j<26)||(j>27 && j<32)||(j>33 && j<44)||(j>45 && j<52)||(j>53 && j<58))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 6:
                            if((j>7 && j<14)||(j>15 && j<18)||(j>19 && j<22)||(j>23 && j<26)||(j>29 && j<32)||(j>33 && j<36)||(j>47 && j<50))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 7:
                            if((j>15 && j<20)||(j>23 && j<26)||(j>35 && j<40)||(j>41 && j<46)||(j>47 && j<50)||(j>51 && j<58))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 8:
                            if((j>1 && j<6)||(j>23 && j<26)||(j>29 && j<32)||(j>35 && j<38)||(j>39 && j<44)||(j>45 && j<52)||(j>53 && j<56))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 9:
                            if((j>1 && j<4)||(j>15 && j<28)||(j>29 && j<34)||(j>35 && j<38)||(j>53 && j<56)||(j>57 && j<60))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 10:
                            if((j>1 && j<4)||(j>5 && j<10)||(j>19 && j<22)||(j>29 && j<32)||(j>35 && j<48)||(j>49 && j<52)||(j>53 && j<56))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 11:
                            if((j>1 && j<4)||(j>11 && j<14)||(j>15 && j<18)||(j>19 && j<22)||(j>29 && j<32)||(j>35 && j<38)||(j>49 && j<52)||(j>57 && j<60))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 12:
                            if((j>1 && j<4)||(j>5 && j<14)||(j>15 && j<26)||(j>35 && j<38)||(j>47 && j<52)||(j>53 && j<56))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 13:
                            if((j>5 && j<8)||(j>11 && j<14)||(j>23 && j<26)||(j>29 && j<32)||(j>35 && j<38)||(j>49 && j<52)||(j>57 && j<60))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 14:
                            if((j>11 && j<14)||(j>19 && j<22)||(j>23 && j<26)||(j>29 && j<32)||(j>39 && j<42)||(j>53 && j<56))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 15:
                            if((j>1 && j<10)||(j>11 && j<14)||(j>15 && j<26)||(j>29 && j<32)||(j>35 && j<42)||(j>43 && j<60))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 16:
                            if((j>1 && j<4)||(j>5 && j<8)||(j>11 && j<14)||(j>17 && j<20)||(j>29 && j<34)||(j>39 && j<42))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 17:
                            if((j>1 && j<4)||(j>5 && j<10)||(j>11 && j<14)||(j>17 && j<20)||(j>23 && j<26)||(j>29 && j<32)||(j>35 && j<38)||(j>39 && j<48)||(j>49 && j<58))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 18:
                            if((j>1 && j<4)||(j>5 && j<8)||(j>11 && j<14)||(j>17 && j<20)||(j>23 && j<26)||(j>29 && j<32)||(j>33 && j<38)||(j>39 && j<42)||(j>55 && j<58))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 19:
                            if((j>1 && j<4)||(j>11 && j<14)||(j>15 && j<26)||(j>29 && j<32)||(j>35 && j<38)||(j>39 && j<42)||(j>43 && j<46)||(j>49 && j<52)||(j>55 && j<58))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 20:
                            if((j>1 && j<4)||(j>5 && j<8)||(j>9 && j<14)||(j>17 && j<20)||(j>21 && j<24)||(j>29 && j<38)||(j>39 && j<42)||(j>43 && j<46)||(j>49 && j<52))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 21:
                            if((j>5 && j<8)||(j>25 && j<28)||(j>39 && j<42)||(j>43 && j<58))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 22:
                            if((j>5 && j<8)||(j>13 && j<16)||(j>29 && j<32)||(j>39 && j<42)||(j>49 && j<52))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 23:
                            if((j>3 && j<28)||(j>29 && j<32)||(j>39 && j<44)||(j>49 && j<52)||(j>53 && j<60))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 24:
                            if((j>5 && j<8)||(j>13 && j<16)||(j>21 && j<24)||(j>29 && j<32)||(j>33 && j<42)||(j>49 && j<52))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 25:
                            if((j>5 && j<8)||(j>9 && j<12)||(j>13 && j<16)||(j>17 && j<20)||(j>21 && j<24)||(j>25 && j<32)||(j>35 && j<38)||(j>39 && j<42)||(j>49 && j<54)||(j>55 && j<58))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 26:
                            if((j>1 && j<4)||(j>5 && j<8)||(j>9 && j<12)||(j>13 && j<16)||(j>17 && j<20)||(j>21 && j<24)||(j>29 && j<32)||(j>35 && j<38)||(j>39 && j<42)||(j>55 && j<58))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 27:
                            if((j>1 && j<4)||(j>5 && j<8)||(j>9 && j<12)||(j>13 && j<16)||(j>17 && j<20)||(j>21 && j<28)||(j>29 && j<34)||(j>35 && j<38)||(j>39 && j<46)||(j>47 && j<58))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 28:
                            if((j>1 && j<4)||(j>9 && j<12)||(j>17 && j<20)||(j>29 && j<32))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        }
                    }
                }
            }
        }
    }
}
void lvl_3(char m[Y_][X_])
{
    system("COLOR 01");
    for(int i=0 ; i<Y_ ; i++)
    {
        for(int j=0 ; j<X_ ; j++)
        {
            if(i==0 || i==Y_-1)//Limites superiores e inferiores del mapa
            {
                m[i][j]=219;
            }
            else
            {
                if(j==0 || j==1 || j==X_3-2 || j==X_3-1)//Limites laterales del mapa
                {
                    m[i][j]=219;
                    if(i==6 && (j==62 || j==63))//Salida!
                    {
                        m[i][j]=' ';
                    }
                }
                else
                {
                    if(j>=X_3)
                    {
                        m[i][j]=' ';
                    }
                    else
                    {

                        switch(i) //Diseño de las paredes internas del laberinto
                        {
                        case 1:
                            if((j>6 && j<16)||(j>17 && j<20)||(j>23 && j<26)||(j>27 && j<30)||(j>47 && j<50)||(j>53 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 2:
                            if((j>17 && j<20)||(j>23 && j<26)||(j>27 && j<30)||(j>35 && j<46)||(j>47 && j<50)||(j>53 && j<56)||(j>57 && j<60))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 3:
                            if((j>1 && j<6)||(j>9 && j<16)||(j>17 && j<22)||(j>23 && j<26)||(j>31 && j<34)||(j>39 && j<42)||(j>53 && j<56)||(j>57 && j<60))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 4:
                            if((j>9 && j<10)||(j>17 && j<20)||(j>23 && j<26)||(j>31 && j<36)||(j>37 && j<56))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 5:
                            if((j>3 && j<12)||(j>13 && j<16)||(j>17 && j<20)||(j>23 && j<34)||(j>37 && j<40)||(j>43 && j<46)||(j>47 && j<50))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 6:
                            if((j>3 && j<6)||(j>9 && j<12)||(j>17 && j<20)||(j>37 && j<40)||(j>41 && j<46)||(j>47 && j<50)||(j>51 && j<54))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 7:
                            if((j>3 && j<6)||(j>9 && j<20)||(j>21 && j<24)||(j>27 && j<40)||(j>43 && j<46)||(j>47 && j<50)||(j>51 && j<54)||(j>55 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 8:
                            if((j>3 && j<8)||(j>9 && j<12)||(j>21 && j<24)||(j>37 && j<40)||(j>47 && j<50)||(j>57 && j<60))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 9:
                            if((j>9 && j<12)||(j>13 && j<16)||(j>21 && j<24)||(j>31 && j<34)||(j>37 && j<44)||(j>47 && j<50)||(j>57 && j<60))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 10:
                            if((j>13 && j<34)||(j>41 && j<44)||(j>47 && j<56)||(j>57 && j<60))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 11:
                            if((j>3 && j<12)||(j>17 && j<20)||(j>27 && j<30)||(j>31 && j<34)||(j>35 && j<40)||(j>41 && j<44)||(j>47 && j<50)||(j>53 && j<56)||(j>57 && j<60))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 12:
                            if((j>3 && j<6)||(j>27 && j<30)||(j>47 && j<50)||(j>53 && j<56))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 13:
                            if((j>3 && j<6)||(j>9 && j<24)||(j>27 && j<46)||(j>47 && j<50)||(j>57 && j<60))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 14:
                            if((j>3 && j<6)||(j>7 && j<12)||(j>13 && j<16)||(j>21 && j<24)||(j>27 && j<30)||(j>35 && j<38)||(j>43 && j<46)||(j>47 && j<52))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 15:
                            if((j>3 && j<6)||(j>9 && j<12)||(j>13 && j<16)||(j>17 && j<20)||(j>21 && j<24)||(j>25 && j<30)||(j>35 && j<38)||(j>43 && j<46)||(j>47 && j<50)||(j>53 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 16:
                            if((j>3 && j<8)||(j>9 && j<12)||(j>31 && j<42)||(j>43 && j<46)||(j>47 && j<50)||(j>59 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 17:
                            if((j>9 && j<12)||(j>16 && j<24)||(j>25 && j<28)||(j>31 && j<34)||(j>39 && j<42)||(j>43 && j<46)||(j>47 && j<50)||(j>51 && j<54)||(j>59 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 18:
                            if((j>1 && j<8)||(j>9 && j<12)||(j>19 && j<22)||(j>25 && j<28)||(j>39 && j<42)||(j>43 && j<46)||(j>51 && j<54)||(j>55 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 19:
                            if((j>9 && j<12)||(j>13 && j<18)||(j>19 && j<22)||(j>25 && j<38)||(j>39 && j<42)||(j>43 && j<46)||(j>47 && j<50)||(j>51 && j<54)||(j>59 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 20:
                            if((j>9 && j<12)||(j>19 && j<22)||(j>29 && j<32)||(j>35 && j<38)||(j>43 && j<46)||(j>51 && j<54)||(j>59 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 21:
                            if((j>3 && j<8)||(j>9 && j<16)||(j>19 && j<22)||(j>25 && j<28)||(j>29 && j<32)||(j>35 && j<38)||(j>43 && j<56)||(j>57 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 22:
                            if((j>3 && j<6)||(j>25 && j<28)||(j>29 && j<32)||(j>35 && j<38)||(j>39 && j<42)||(j>47 && j<50)||(j>53 && j<56))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 23:
                            if((j>3 && j<6)||(j>11 && j<28)||(j>35 && j<38)||(j>39 && j<42)||(j>47 && j<50)||(j>53 && j<56))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 24:
                            if((j>3 && j<6)||(j>11 && j<14)||(j>25 && j<28)||(j>35 && j<38)||(j>39 && j<42)||(j>43 && j<46)||(j>47 && j<50)||(j>53 && j<60))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 25:
                            if((j>1 && j<10)||(j>11 && j<14)||(j>25 && j<34)||(j>35 && j<38)||(j>47 && j<50)||(j>55 && j<58))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 26:
                            if((j>5 && j<8)||(j>11 && j<14)||(j>15 && j<20)||(j>31 && j<34)||(j>35 && j<46)||(j>51 && j<54)||(j>55 && j<58)||(j>59 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 27:
                            if((j>1 && j<4)||(j>5 && j<8)||(j>11 && j<14)||(j>17 && j<28)||(j>31 && j<34)||(j>43 && j<46)||(j>47 && j<50)||(j>51 && j<54)||(j>55 && j<58))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 28:
                            if((j>1 && j<4)||(j>11 && j<14)||(j>17 && j<20)||(j>43 && j<46)||(j>47 && j<50)||(j>53 && j<54))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        }
                    }
                }
            }
        }
    }
}
void lvl_4(char m[Y_][X_])
{
    system("COLOR 05");
    for(int i=0 ; i<Y_ ; i++)
    {
        for(int j=0 ; j<X_ ; j++)
        {
            if(i==0 || i==Y_-1)//Limites superiores e inferiores del mapa
            {
                m[i][j]=219;
            }
            else
            {
                if(j==0 || j==1 || j==X_4-2 || j==X_4-1)//Limites laterales del mapa
                {
                    m[i][j]=219;
                    if(i==28 && (j==64 || j==65))//Salida!
                    {
                        m[i][j]=' ';
                    }
                }
                else
                {
                    if(j>=X_4)
                    {
                        m[i][j]=' ';
                    }
                    else
                    {

                        switch(i) //Diseño de las paredes internas del laberinto
                        {
                        case 1:
                            if((j>23 && j<26)||(j>29 && j<32)||(j>39 && j<42)||(j>51 && j<54)||(j>59 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 2:
                            if((j>3 && j<12)||(j>15 && j<22)||(j>23 && j<26)||(j>39 && j<42)||(j>43 && j<50)||(j>51 && j<54)||(j>59 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 3:
                            if((j>9 && j<12)||(j>19 && j<22)||(j>23 && j<38)||(j>39 && j<42)||(j>47 && j<50)||(j>51 && j<54)||(j>55 && j<58)||(j>59 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 4:
                            if((j>3 && j<6)||(j>9 && j<12)||(j>19 && j<22)||(j>35 && j<38)||(j>39 && j<42)||(j>47 && j<50)||(j>51 && j<54)||(j>55 && j<58))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 5:
                            if((j>3 && j<6)||(j>9 && j<24)||(j>35 && j<38)||(j>39 && j<42)||(j>47 && j<50)||(j>51 && j<54)||(j>55 && j<58))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 6:
                            if((j>3 && j<6)||(j>13 && j<16)||(j>21 && j<24)||(j>25 && j<34)||(j>35 && j<38)||(j>39 && j<42)||(j>43 && j<46)||(j>47 && j<54)||(j>55 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 7:
                            if((j>3 && j<10)||(j>13 && j<16)||(j>21 && j<24)||(j>31 && j<34)||(j>35 && j<38)||(j>39 && j<42)||(j>43 && j<46)||(j>49 && j<52)||(j>55 && j<58))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 8:
                            if((j>7 && j<10)||(j>13 && j<16)||(j>17 && j<20)||(j>21 && j<24)||(j>31 && j<34)||(j>39 && j<42)||(j>43 && j<46)||(j>49 && j<52)||(j>55 && j<58))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 9:
                            if((j>3 && j<6)||(j>7 && j<10)||(j>13 && j<16)||(j>17 && j<20)||(j>21 && j<28)||(j>31 && j<46)||(j>47 && j<54)||(j>55 && j<64))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 10:
                            if((j>3 && j<6)||(j>7 && j<12)||(j>13 && j<16)||(j>17 && j<20)||(j>25 && j<28)||(j>43 && j<46)||(j>49 && j<52)||(j>59 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 11:
                            if((j>7 && j<10)||(j>13 && j<16)||(j>17 && j<24)||(j>25 && j<28)||(j>29 && j<32)||(j>33 && j<41)||(j>43 && j<46)||(j>59 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 12:
                            if((j>3 && j<6)||(j>7 && j<10)||(j>13 && j<16)||(j>21 && j<24)||(j>25 && j<28)||(j>29 && j<32)||(j>51 && j<58)||(j>59 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 13:
                            if((j>3 && j<6)||(j>7 && j<10)||(j>13 && j<16)||(j>17 && j<20)||(j>21 && j<24)||(j>29 && j<32)||(j>33 && j<36)||(j>37 && j<46)||(j>47 && j<50)||(j>51 && j<54)||(j>55 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 14:
                            if((j>3 && j<6)||(j>13 && j<16)||(j>17 && j<20)||(j>21 && j<24)||(j>29 && j<32)||(j>33 && j<36)||(j>37 && j<40)||(j>43 && j<46)||(j>47 && j<50)||(j>51 && j<54)||(j>55 && j<58))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 15:
                            if((j>3 && j<16)||(j>17 && j<20)||(j>21 && j<32)||(j>33 && j<36)||(j>37 && j<40)||(j>41 && j<46)||(j>47 && j<50)||(j>51 && j<54)||(j>55 && j<58)||(j>59 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 16:
                            if((j>17 && j<20)||(j>27 && j<30)||(j>37 && j<40)||(j>43 && j<46)||(j>51 && j<54)||(j>59 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 17:
                            if((j>3 && j<10)||(j>13 && j<24)||(j>27 && j<30)||(j>37 && j<42)||(j>43 && j<48)||(j>51 && j<54)||(j>59 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 18:
                            if((j>3 && j<6)||(j>13 && j<16)||(j>17 && j<20)||(j>27 && j<40)||(j>43 && j<46)||(j>51 && j<54)||(j>55 && j<58)||(j>59 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 19:
                            if((j>3 && j<6)||(j>7 && j<16)||(j>17 && j<20)||(j>21 && j<24)||(j>37 && j<40)||(j>43 && j<46)||(j>51 && j<54)||(j>59 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 20:
                            if((j>3 && j<6)||(j>17 && j<20)||(j>21 && j<30)||(j>31 && j<34)||(j>43 && j<46)||(j>47 && j<58)||(j>59 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 21:
                            if((j>3 && j<6)||(j>27 && j<30)||(j>31 && j<34)||(j>43 && j<46)||(j>47 && j<50)||(j>55 && j<58)||(j>59 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 22:
                            if((j>3 && j<24)||(j>27 && j<30)||(j>31 && j<46)||(j>47 && j<50)||(j>51 && j<54)||(j>55 && j<58)||(j>59 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 23:
                            if((j>21 && j<24)||(j>27 && j<30)||(j>37 && j<40)||(j>43 && j<46)||(j>51 && j<54)||(j>55 && j<58)||(j>59 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 24:
                            if((j>1 && j<10)||(j>11 && j<20)||(j>21 && j<24)||(j>27 && j<30)||(j>33 && j<36)||(j>37 && j<40)||(j>43 && j<50)||(j>51 && j<54)||(j>59 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 25:
                            if((j>7 && j<10)||(j>17 && j<20)||(j>21 && j<24)||(j>27 && j<30)||(j>33 && j<36)||(j>37 && j<40)||(j>43 && j<46)||(j>51 && j<54)||(j>59 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 26:
                            if((j>3 && j<6)||(j>7 && j<16)||(j>17 && j<20)||(j>21 && j<24)||(j>25 && j<36)||(j>37 && j<40)||(j>43 && j<46)||(j>51 && j<54)||(j>55 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 27:
                            if((j>3 && j<6)||(j>37 && j<40)||(j>51 && j<54)||(j>55 && j<58)||(j>59 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 28:
                            if((j>3 && j<18)||(j>21 && j<36)||(j>37 && j<54)||(j>55 && j<58))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        }
                    }
                }
            }
        }
    }
}
void lvl_5(char m[Y_][X_])
{
    system("COLOR 06");
    for(int i=0 ; i<Y_ ; i++)
    {
        for(int j=0 ; j<X_ ; j++)
        {
            if(i==0 || i==Y_-1)//Limites superiores e inferiores del mapa
            {
                m[i][j]=219;
            }
            else
            {
                if(j==0 || j==1 || j==X_5-2 || j==X_5-1)//Limites laterales del mapa
                {
                    m[i][j]=219;
                    if(i==15 && (j==66 || j==67))//Salida!
                    {
                        m[i][j]=' ';
                    }
                }
                else
                {
                    if(j>=X_5)
                    {
                        m[i][j]=' ';
                    }
                    else
                    {

                        switch(i) //Diseño de las paredes internas del laberinto
                        {
                        case 1:
                            if((j>39 && j<54)||(j>63 && j<66))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 2:
                            if((j>3 && j<6)||(j>7 && j<34)||(j>35 && j<38)||(j>47 && j<50)||(j>51 && j<54)||(j>63 && j<66))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 3:
                            if((j>3 && j<6)||(j>15 && j<18)||(j>23 && j<26)||(j>31 && j<34)||(j>35 && j<46)||(j>51 && j<62)||(j>63 && j<66))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 4:
                            if((j>3 && j<14)||(j>15 && j<18)||(j>19 && j<22)||(j>23 && j<26)||(j>27 && j<30)||(j>31 && j<34)||(j>35 && j<38)||(j>43 && j<50)||(j>63 && j<66))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 5:
                            if((j>3 && j<6)||(j>19 && j<22)||(j>27 && j<30)||(j>31 && j<34)||(j>35 && j<38)||(j>39 && j<42)||(j>43 && j<46)||(j>47 && j<60)||(j>63 && j<66))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 6:
                            if((j>3 && j<6)||(j>7 && j<30)||(j>31 && j<34)||(j>35 && j<38)||(j>39 && j<42)||(j>43 && j<46)||(j>47 && j<50)||(j>57 && j<60))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 7:
                            if((j>3 && j<10)||(j>13 && j<16)||(j>21 && j<24)||(j>31 && j<34)||(j>35 && j<38)||(j>39 && j<42)||(j>43 && j<46)||(j>49 && j<52)||(j>55 && j<58))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 8:
                            if((j>3 && j<6)||(j>7 && j<10)||(j>11 && j<24)||(j>25 && j<28)||(j>35 && j<38)||(j>39 && j<42)||(j>47 && j<50)||(j>53 && j<56)||(j>57 && j<60))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 9:
                            if((j>3 && j<10)||(j>11 && j<14)||(j>19 && j<22)||(j>25 && j<28)||(j>29 && j<34)||(j>35 && j<38)||(j>39 && j<42)||(j>43 && j<52)||(j>53 && j<64))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 10:
                            if((j>5 && j<8)||(j>11 && j<14)||(j>15 && j<18)||(j>19 && j<22)||(j>25 && j<28)||(j>35 && j<38)||(j>39 && j<42)||(j>47 && j<50)||(j>61 && j<64))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 11:
                            if((j>5 && j<8)||(j>11 && j<14)||(j>15 && j<18)||(j>19 && j<22)||(j>23 && j<28)||(j>29 && j<32)||(j>39 && j<42)||(j>47 && j<50)||(j>51 && j<54)||(j>55 && j<64))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 12:
                            if((j>1 && j<4)||(j>5 && j<8)||(j>9 && j<18)||(j>19 && j<22)||(j>25 && j<28)||(j>29 && j<50)||(j>51 && j<54)||(j>55 && j<58)||(j>59 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 13:
                            if((j>1 && j<4)||(j>19 && j<22)||(j>25 && j<28)||(j>29 && j<32)||(j>39 && j<42)||(j>45 && j<48)||(j>51 && j<54)||(j>55 && j<58)||(j>59 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 14:
                            if((j>1 && j<14)||(j>15 && j<18)||(j>19 && j<24)||(j>25 && j<28)||(j>33 && j<36)||(j>45 && j<48)||(j>49 && j<58)||(j>59 && j<66))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 15:
                            if((j>1 && j<4)||(j>5 && j<8)||(j>11 && j<14)||(j>15 && j<18)||(j>21 && j<24)||(j>25 && j<44)||(j>45 && j<48)||(j>49 && j<52))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 16:
                            if((j>1 && j<4)||(j>5 && j<8)||(j>9 && j<24)||(j>25 && j<28)||(j>45 && j<48)||(j>49 && j<52)||(j>53 && j<64))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 17:
                            if((j>5 && j<8)||(j>9 && j<12)||(j>19 && j<22)||(j>25 && j<28)||(j>29 && j<52)||(j>53 && j<56)||(j>57 && j<60)||(j>61 && j<64))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 18:
                            if((j>5 && j<8)||(j>9 && j<12)||(j>13 && j<18)||(j>19 && j<22)||(j>23 && j<28)||(j>29 && j<32)||(j>43 && j<46)||(j>53 && j<56)||(j>57 && j<60)||(j>61 && j<64))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 19:
                            if((j>3 && j<8)||(j>13 && j<16)||(j>25 && j<28)||(j>29 && j<32)||(j>33 && j<42)||(j>43 && j<46)||(j>47 && j<56)||(j>61 && j<64))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 20:
                            if((j>5 && j<8)||(j>9 && j<24)||(j>25 && j<28)||(j>33 && j<36)||(j>39 && j<42)||(j>47 && j<50)||(j>57 && j<60))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 21:
                            if((j>21 && j<24)||(j>25 && j<36)||(j>37 && j<50)||(j>51 && j<64))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 22:
                            if((j>1 && j<20)||(j>21 && j<24)||(j>25 && j<28)||(j>29 && j<32)||(j>45 && j<48)||(j>51 && j<54)||(j>61 && j<64))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 23:
                            if((j>3 && j<6)||(j>9 && j<12)||(j>17 && j<20)||(j>21 && j<24)||(j>25 && j<28)||(j>29 && j<32)||(j>33 && j<36)||(j>39 && j<42)||(j>43 && j<48)||(j>49 && j<60)||(j>61 && j<64))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 24:
                            if((j>3 && j<6)||(j>13 && j<16)||(j>21 && j<24)||(j>29 && j<32)||(j>33 && j<42)||(j>45 && j<48)||(j>53 && j<56)||(j>61 && j<66))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 25:
                            if((j>3 && j<6)||(j>7 && j<28)||(j>29 && j<32)||(j>39 && j<44)||(j>45 && j<48)||(j>49 && j<52)||(j>57 && j<60)||(j>61 && j<64))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 26:
                            if((j>3 && j<6)||(j>7 && j<10)||(j>17 && j<20)||(j>23 && j<26)||(j>29 && j<32)||(j>35 && j<38)||(j>39 && j<42)||(j>45 && j<56)||(j>57 && j<60)||(j>61 && j<64))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 27:
                            if((j>13 && j<16)||(j>23 && j<38)||(j>39 && j<42)||(j>53 && j<60)||(j>61 && j<64))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 28:
                            if((j>1 && j<22)||(j>39 && j<52))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        }
                    }
                }
            }
        }
    }
}
void lvl_6(char m[Y_][X_])
{
    system("COLOR 04");
    for(int i=0 ; i<Y_ ; i++)
    {
        for(int j=0 ; j<X_ ; j++)
        {
            if(i==0 || i==Y_-1)//Limites superiores e inferiores del mapa
            {
                m[i][j]=219;
            }
            else
            {
                if(j==0 || j==1 || j==X_6-2 || j==X_6-1)//Limites laterales del mapa
                {
                    m[i][j]=219;

                    if(i==3 && (j==72 || j==73))//Salida!
                    {
                        m[i][j]=' ';
                    }
                }
                else
                {
                    if(j>=X_6)
                    {
                        m[i][j]=' ';
                    }
                    else
                    {

                        switch(i) //Diseño de las paredes internas del laberinto
                        {
                        case 1:
                            if((j>3 && j<6)||(j>7 && j<20)||(j>25 && j<28)||(j>41 && j<44)||(j>49 && j<52)||(j>53 && j<56)||(j>59 && j<62)||(j>53 && j<66))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 2:
                            if((j>3 && j<6)||(j>7 && j<10)||(j>21 && j<24)||(j>25 && j<28)||(j>29 && j<32)||(j>33 && j<44)||(j>45 && j<48)||(j>49 && j<52)||(j>53 && j<58)||(j>59 && j<62)||(j>63 && j<66)||(j>67 && j<72))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 3:
                            if((j>3 && j<6)||(j>7 && j<16)||(j>17 && j<24)||(j>29 && j<32)||(j>45 && j<48)||(j>53 && j<56)||(j>59 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 4:
                            if((j>3 && j<6)||(j>13 && j<16)||(j>21 && j<52)||(j>53 && j<56)||(j>57 && j<62)||(j>63 && j<66)||(j>69 && j<72))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 5:
                            if((j>3 && j<12)||(j>13 && j<20)||(j>21 && j<24)||(j>27 && j<30)||(j>31 && j<34)||(j>41 && j<44)||(j>49 && j<52)||(j>53 && j<56)||(j>59 && j<62)||(j>63 && j<72))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 6:
                            if((j>27 && j<30)||(j>37 && j<40)||(j>45 && j<48)||(j>53 && j<58)||(j>59 && j<62)||(j>69 && j<72))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 7:
                            if((j>1 && j<8)||(j>9 && j<30)||(j>31 && j<56)||(j>59 && j<68)||(j>69 && j<72))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 8:
                            if((j>5 && j<8)||(j>9 && j<12)||(j>13 && j<16)||(j>21 && j<24)||(j>27 && j<30)||(j>53 && j<56)||(j>57 && j<62)||(j>69 && j<72))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 9:
                            if((j>1 && j<4)||(j>5 && j<8)||(j>9 && j<12)||(j>13 && j<20)||(j>21 && j<24)||(j>25 && j<52)||(j>53 && j<56)||(j>59 && j<62)||(j>63 && j<66)||(j>67 && j<72))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 10:
                            if((j>9 && j<12)||(j>13 && j<16)||(j>21 && j<24)||(j>35 && j<38)||(j>45 && j<48)||(j>53 && j<58)||(j>59 && j<62)||(j>63 && j<72))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 11:
                            if((j>3 && j<12)||(j>17 && j<20)||(j>21 && j<24)||(j>25 && j<28)||(j>29 && j<34)||(j>35 && j<38)||(j>41 && j<44)||(j>49 && j<52)||(j>53 && j<56)||(j>59 && j<62)||(j>69 && j<72))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 12:
                            if((j>9 && j<12)||(j>13 && j<20)||(j>21 && j<24)||(j>25 && j<28)||(j>31 && j<34)||(j>35 && j<38)||(j>39 && j<52)||(j>53 && j<56)||(j>57 && j<66)||(j>69 && j<72))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 13:
                            if((j>1 && j<8)||(j>9 && j<12)||(j>21 && j<24)||(j>25 && j<34)||(j>35 && j<38)||(j>53 && j<56)||(j>61 && j<64)||(j>69 && j<72))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 14:
                            if((j>9 && j<12)||(j>13 && j<20)||(j>21 && j<24)||(j>31 && j<34)||(j>35 && j<38)||(j>39 && j<56)||(j>57 && j<64)||(j>65 && j<68)||(j>69 && j<72))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 15:
                            if((j>3 && j<12)||(j>17 && j<20)||(j>21 && j<30)||(j>31 && j<34)||(j>35 && j<38)||(j>39 && j<42)||(j>43 && j<46)||(j>47 && j<50)||(j>51 && j<54)||(j>61 && j<64)||(j>69 && j<72))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 16:
                            if((j>17 && j<20)||(j>21 && j<24)||(j>31 && j<34)||(j>39 && j<42)||(j>43 && j<46)||(j>47 && j<50)||(j>51 && j<54)||(j>55 && j<60)||(j>61 && j<64)||(j>65 && j<68)||(j>69 && j<72))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 17:
                            if((j>1 && j<20)||(j>21 && j<24)||(j>25 && j<42)||(j>47 && j<50)||(j>51 && j<54)||(j>55 && j<58)||(j>69 && j<72))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 18:
                            if((j>1 && j<4)||(j>21 && j<24)||(j>25 && j<28)||(j>31 && j<34)||(j>47 && j<50)||(j>51 && j<54)||(j>55 && j<72))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 19:
                            if((j>1 && j<4)||(j>5 && j<14)||(j>15 && j<24)||(j>25 && j<28)||(j>31 && j<34)||(j>35 && j<46)||(j>47 && j<50)||(j>51 && j<54))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 20:
                            if((j>1 && j<4)||(j>9 && j<12)||(j>15 && j<18)||(j>25 && j<30)||(j>31 && j<34)||(j>35 && j<38)||(j>47 && j<50)||(j>51 && j<70))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 21:
                            if((j>1 && j<8)||(j>9 && j<12)||(j>13 && j<18)||(j>19 && j<22)||(j>23 && j<28)||(j>31 && j<34)||(j>35 && j<38)||(j>39 && j<50)||(j>55 && j<58)||(j>67 && j<70))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 22:
                            if((j>9 && j<12)||(j>19 && j<22)||(j>25 && j<28)||(j>29 && j<34)||(j>35 && j<38)||(j>39 && j<42)||(j>51 && j<54)||(j>55 && j<58)||(j>59 && j<66)||(j>67 && j<70))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 23:
                            if((j>3 && j<28)||(j>31 && j<34)||(j>35 && j<38)||(j>39 && j<42)||(j>43 && j<58))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 24:
                            if((j>3 && j<6)||(j>9 && j<12)||(j>19 && j<22)||(j>31 && j<34)||(j>35 && j<38)||(j>55 && j<58)||(j>59 && j<62)||(j>63 && j<70))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 25:
                            if((j>13 && j<16)||(j>19 && j<22)||(j>23 && j<26)||(j>27 && j<30)||(j>31 && j<34)||(j>35 && j<46)||(j>49 && j<54)||(j>55 && j<58)||(j>59 && j<62)||(j>67 && j<70))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 26:
                            if((j>1 && j<8)||(j>9 && j<22)||(j>23 && j<26)||(j>27 && j<30)||(j>31 && j<34)||(j>35 && j<38)||(j>55 && j<58)||(j>59 && j<66)||(j>67 && j<70))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 27:
                            if((j>1 && j<4)||(j>23 && j<26)||(j>27 && j<30)||(j>35 && j<38)||(j>39 && j<58)||(j>59 && j<62)||(j>63 && j<66)||(j>67 && j<70))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 28:
                            if((j>1 && j<4)||(j>5 && j<26)||(j>27 && j<38)||(j>59 && j<62))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        }
                    }
                }
            }
        }
    }
}
void lvl_7(char m[Y_][X_])
{
    system("COLOR 0D");
    for(int i=0 ; i<Y_ ; i++)
    {
        for(int j=0 ; j<X_ ; j++)
        {
            if(i==0 || i==Y_-1)//Limites superiores e inferiores del mapa
            {
                m[i][j]=219;
            }
            else
            {
                if(j==0 || j==1 || j==X_7-2 || j==X_7-1)//Limites laterales del mapa
                {
                    m[i][j]=219;

                    if(i==12 && (j==76 || j==77))//Salida!
                    {
                        m[i][j]=' ';
                    }
                }
                else
                {
                    if(j>=X_7)
                    {
                        m[i][j]=' ';
                    }
                    else
                    {

                        switch(i) //Diseño de las paredes internas del laberinto
                        {
                        case 1:
                            if((j>3 && j<6)||(j>37 && j<40)||(j>41 && j<44)||(j>49 && j<52)||(j>59 && j<62)||(j>67 && j<70))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 2:
                            if((j>3 && j<36)||(j>37 && j<40)||(j>41 && j<44)||(j>45 && j<48)||(j>49 && j<52)||(j>55 && j<58)||(j>59 && j<62)||(j>63 && j<66)||(j>67 && j<70)||(j>71 && j<74))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 3:
                            if((j>7 && j<10)||(j>11 && j<14)||(j>19 && j<22)||(j>37 && j<40)||(j>45 && j<48)||(j>49 && j<54)||(j>55 && j<58)||(j>59 && j<62)||(j>63 && j<66)||(j>67 && j<70)||(j>71 && j<74))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 4:
                            if((j>1 && j<6)||(j>7 && j<10)||(j>19 && j<22)||(j>23 && j<32)||(j>33 && j<40)||(j>41 && j<52)||(j>55 && j<58)||(j>59 && j<62)||(j>63 && j<66)||(j>67 && j<70)||(j>71 && j<74))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 5:
                            if((j>3 && j<6)||(j>13 && j<18)||(j>19 && j<22)||(j>27 && j<30)||(j>37 && j<40)||(j>49 && j<52)||(j>53 && j<58)||(j>63 && j<66)||(j>71 && j<74))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 6:
                            if((j>3 && j<12)||(j>13 && j<16)||(j>19 && j<22)||(j>23 && j<36)||(j>37 && j<40)||(j>43 && j<48)||(j>49 && j<52)||(j>55 && j<74))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 7:
                            if((j>3 && j<6)||(j>9 && j<12)||(j>13 && j<16)||(j>19 && j<22)||(j>27 && j<30)||(j>31 && j<34)||(j>37 && j<42)||(j>45 && j<48)||(j>49 && j<54)||(j>55 && j<58))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 8:
                            if((j>9 && j<12)||(j>13 && j<16)||(j>17 && j<22)||(j>23 && j<26)||(j>27 && j<30)||(j>31 && j<34)||(j>37 && j<40)||(j>43 && j<48)||(j>49 && j<52)||(j>55 && j<58)||(j>59 && j<76))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 9:
                            if((j>1 && j<8)||(j>9 && j<12)||(j>13 && j<16)||(j>19 && j<22)||(j>23 && j<26)||(j>27 && j<30)||(j>31 && j<34)||(j>45 && j<48)||(j>49 && j<52)||(j>53 && j<58)||(j>59 && j<62)||(j>71 && j<74))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 10:
                            if((j>13 && j<26)||(j>27 && j<30)||(j>31 && j<48)||(j>49 && j<52)||(j>55 && j<58)||(j>59 && j<62)||(j>63 && j<70)||(j>71 && j<74))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 11:
                            if((j>1 && j<12)||(j>19 && j<22)||(j>27 && j<30)||(j>31 && j<34)||(j>35 && j<38)||(j>45 && j<48)||(j>49 && j<54)||(j>55 && j<58)||(j>59 && j<62)||(j>63 && j<66)||(j>67 && j<70)||(j>71 && j<74))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 12:
                            if((j>15 && j<22)||(j>23 && j<30)||(j>31 && j<34)||(j>41 && j<44)||(j>45 && j<48)||(j>49 && j<52)||(j>55 && j<58)||(j>59 && j<62)||(j>63 && j<66))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 13:
                            if((j>3 && j<14)||(j>19 && j<22)||(j>23 && j<26)||(j>31 && j<34)||(j>35 && j<44)||(j>45 && j<48)||(j>49 && j<52)||(j>53 && j<58)||(j>59 && j<62)||(j>63 && j<76))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 14:
                            if((j>3 && j<6)||(j>11 && j<14)||(j>15 && j<22)||(j>23 && j<26)||(j>27 && j<30)||(j>31 && j<34)||(j>49 && j<52)||(j>55 && j<58)||(j>59 && j<62)||(j>71 && j<74))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 15:
                            if((j>3 && j<6)||(j>7 && j<10)||(j>11 && j<14)||(j>15 && j<18)||(j>27 && j<30)||(j>31 && j<34)||(j>35 && j<54)||(j>55 && j<58)||(j>59 && j<70)||(j>71 && j<74))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 16:
                            if((j>7 && j<10)||(j>11 && j<14)||(j>15 && j<18)||(j>19 && j<24)||(j>31 && j<34)||(j>35 && j<38)||(j>43 && j<46)||(j>51 && j<54)||(j>55 && j<58)||(j>61 && j<64)||(j>67 && j<70)||(j>71 && j<74))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 17:
                            if((j>1 && j<6)||(j>7 && j<10)||(j>15 && j<18)||(j>21 && j<34)||(j>35 && j<38)||(j>39 && j<42)||(j>43 && j<46)||(j>47 && j<50)||(j>51 && j<54)||(j>55 && j<58)||(j>61 && j<64)||(j>71 && j<74))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 18:
                            if((j>3 && j<6)||(j>7 && j<20)||(j>21 && j<24)||(j>35 && j<38)||(j>39 && j<42)||(j>43 && j<46)||(j>47 && j<50)||(j>51 && j<54)||(j>55 && j<60)||(j>61 && j<64)||(j>65 && j<74))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 19:
                            if((j>3 && j<6)||(j>21 && j<24)||(j>25 && j<34)||(j>35 && j<38)||(j>39 && j<42)||(j>43 && j<46)||(j>47 && j<50)||(j>51 && j<54)||(j>61 && j<64)||(j>65 && j<68))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 20:
                            if((j>3 && j<6)||(j>7 && j<24)||(j>35 && j<38)||(j>39 && j<42)||(j>43 && j<46)||(j>47 && j<50)||(j>51 && j<54)||(j>55 && j<60)||(j>61 && j<64)||(j>65 && j<74))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 21:
                            if((j>3 && j<6)||(j>11 && j<14)||(j>21 && j<28)||(j>29 && j<32)||(j>35 && j<38)||(j>39 && j<42)||(j>47 && j<50)||(j>51 && j<54)||(j>55 && j<58)||(j>61 && j<64)||(j>71 && j<74))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 22:
                            if((j>3 && j<10)||(j>11 && j<14)||(j>15 && j<20)||(j>21 && j<24)||(j>29 && j<38)||(j>39 && j<50)||(j>51 && j<54)||(j>55 && j<60)||(j>61 && j<64)||(j>65 && j<70)||(j>71 && j<74))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 23:
                            if((j>3 && j<6)||(j>11 && j<14)||(j>17 && j<20)||(j>25 && j<28)||(j>31 && j<34)||(j>47 && j<50)||(j>51 && j<54)||(j>55 && j<58)||(j>61 && j<64)||(j>67 && j<70)||(j>71 && j<74))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 24:
                            if((j>3 && j<6)||(j>7 && j<16)||(j>17 && j<34)||(j>35 && j<46)||(j>47 && j<50)||(j>51 && j<54)||(j>55 && j<58)||(j>59 && j<66)||(j>67 && j<70)||(j>71 && j<74))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 25:
                            if((j>3 && j<6)||(j>7 && j<10)||(j>11 && j<14)||(j>17 && j<20)||(j>35 && j<38)||(j>47 && j<50)||(j>51 && j<54)||(j>55 && j<58)||(j>61 && j<64)||(j>67 && j<70)||(j>71 && j<74))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 26:
                            if((j>7 && j<10)||(j>11 && j<14)||(j>15 && j<20)||(j>21 && j<24)||(j>25 && j<38)||(j>39 && j<44)||(j>47 && j<50)||(j>55 && j<60)||(j>61 && j<64)||(j>71 && j<74))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 27:
                            if((j>3 && j<10)||(j>11 && j<14)||(j>21 && j<24)||(j>25 && j<28)||(j>35 && j<38)||(j>41 && j<44)||(j>55 && j<58)||(j>61 && j<70)||(j>71 && j<74))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 28:
                            if((j>11 && j<28)||(j>29 && j<34)||(j>41 && j<58))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        }
                    }
                }
            }
        }
    }
}
void lvl_8(char m[Y_][X_])
{
    system("COLOR 08");
    for(int i=0 ; i<Y_ ; i++)
    {
        for(int j=0 ; j<X_ ; j++)
        {
            if(i==0 || i==Y_-1)//Limites superiores e inferiores del mapa
            {
                m[i][j]=219;
            }
            else
            {
                if(j==0 || j==1 || j==X_8-2 || j==X_8-1)//Limites laterales del mapa
                {
                    m[i][j]=219;

                    if(i==9 && (j==82 || j==83))//Salida!
                    {
                        m[i][j]=' ';
                    }
                }
                else
                {
                    if(j>=X_8)
                    {
                        m[i][j]=' ';
                    }
                    else
                    {

                        switch(i) //Diseño de las paredes internas del laberinto
                        {
                        case 1:
                            if((j>13 && j<34)||(j>41 && j<44)||(j>55 && j<58)||(j>79 && j<82))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 2:
                            if((j>3 && j<12)||(j>13 && j<16)||(j>35 && j<40)||(j>45 && j<48)||(j>49 && j<54)||(j>55 && j<58)||(j>59 && j<62)||(j>63 && j<78)||(j>79 && j<82))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 3:
                            if((j>3 && j<6)||(j>9 && j<12)||(j>13 && j<16)||(j>17 && j<24)||(j>25 && j<28)||(j>29 && j<32)||(j>37 && j<40)||(j>41 && j<44)||(j>45 && j<48)||(j>51 && j<54)||(j>59 && j<62)||(j>63 && j<66)||(j>75 && j<78))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 4:
                            if((j>1 && j<8)||(j>9 && j<12)||(j>13 && j<16)||(j>17 && j<20)||(j>25 && j<28)||(j>29 && j<32)||(j>33 && j<36)||(j>37 && j<40)||(j>41 && j<44)||(j>45 && j<50)||(j>51 && j<66)||(j>67 && j<74)||(j>75 && j<80))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 5:
                            if((j>1 && j<4)||(j>9 && j<12)||(j>13 && j<16)||(j>17 && j<20)||(j>21 && j<24)||(j>25 && j<28)||(j>29 && j<32)||(j>33 && j<36)||(j>37 && j<40)||(j>41 && j<44)||(j>45 && j<48)||(j>51 && j<54)||(j>67 && j<70)||(j>71 && j<74)||(j>75 && j<78))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 6:
                            if((j>1 && j<4)||(j>5 && j<8)||(j>9 && j<12)||(j>17 && j<20)||(j>21 && j<24)||(j>25 && j<28)||(j>29 && j<32)||(j>37 && j<40)||(j>41 && j<54)||(j>55 && j<70)||(j>71 && j<74)||(j>75 && j<78)||(j>79 && j<82))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 7:
                            if((j>1 && j<4)||(j>5 && j<8)||(j>9 && j<20)||(j>21 && j<24)||(j>25 && j<28)||(j>29 && j<32)||(j>33 && j<40)||(j>51 && j<54)||(j>71 && j<74)||(j>75 && j<78))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 8:
                            if((j>1 && j<4)||(j>5 && j<8)||(j>25 && j<28)||(j>33 && j<36)||(j>41 && j<50)||(j>51 && j<54)||(j>55 && j<70)||(j>71 && j<74)||(j>75 && j<82))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 9:
                            if((j>1 && j<4)||(j>5 && j<32)||(j>33 && j<36)||(j>37 && j<44)||(j>51 && j<54)||(j>67 && j<70)||(j>71 && j<74)||(j>75 && j<78))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 10:
                            if((j>1 && j<4)||(j>5 && j<8)||(j>13 && j<16)||(j>21 && j<24)||(j>29 && j<32)||(j>33 && j<36)||(j>41 && j<44)||(j>45 && j<66)||(j>67 && j<70)||(j>71 && j<74)||(j>75 && j<78)||(j>79 && j<82))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 11:
                            if((j>1 && j<4)||(j>5 && j<8)||(j>9 && j<12)||(j>17 && j<20)||(j>21 && j<24)||(j>25 && j<28)||(j>29 && j<32)||(j>33 && j<40)||(j>41 && j<44)||(j>45 && j<48)||(j>51 && j<54)||(j>55 && j<58)||(j>63 && j<66)||(j>67 && j<70)||(j>71 && j<74)||(j>75 && j<78)||(j>79 && j<82))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 12:
                            if((j>1 && j<4)||(j>5 && j<8)||(j>9 && j<20)||(j>21 && j<24)||(j>25 && j<28)||(j>29 && j<32)||(j>33 && j<36)||(j>41 && j<44)||(j>45 && j<48)||(j>55 && j<58)||(j>59 && j<62)||(j>63 && j<66)||(j>67 && j<74)||(j>75 && j<78)||(j>79 && j<82))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 13:
                            if((j>1 && j<4)||(j>17 && j<20)||(j>21 && j<24)||(j>25 && j<28)||(j>29 && j<32)||(j>33 && j<36)||(j>37 && j<44)||(j>45 && j<48)||(j>49 && j<52)||(j>55 && j<58)||(j>59 && j<62)||(j>63 && j<66)||(j>69 && j<72)||(j>79 && j<82))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 14:
                            if((j>1 && j<16)||(j>17 && j<20)||(j>21 && j<24)||(j>25 && j<28)||(j>29 && j<32)||(j>33 && j<36)||(j>41 && j<44)||(j>45 && j<48)||(j>49 && j<54)||(j>55 && j<58)||(j>59 && j<62)||(j>63 && j<68)||(j>69 && j<82))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 15:
                            if((j>9 && j<12)||(j>17 && j<20)||(j>25 && j<28)||(j>33 && j<36)||(j>37 && j<40)||(j>41 && j<44)||(j>45 && j<48)||(j>49 && j<52)||(j>65 && j<68)||(j>73 && j<76))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 16:
                            if((j>1 && j<8)||(j>9 && j<12)||(j>13 && j<16)||(j>17 && j<22)||(j>23 && j<40)||(j>41 && j<48)||(j>49 && j<64)||(j>65 && j<68)||(j>69 && j<72)||(j>77 && j<80))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 17:
                            if((j>9 && j<12)||(j>13 && j<16)||(j>17 && j<20)||(j>23 && j<26)||(j>45 && j<48)||(j>61 && j<64)||(j>65 && j<80))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 18:
                            if((j>3 && j<12)||(j>13 && j<16)||(j>17 && j<26)||(j>27 && j<30)||(j>31 && j<34)||(j>35 && j<42)||(j>43 && j<60)||(j>61 && j<64)||(j>65 && j<68)||(j>71 && j<74))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 19:
                            if((j>13 && j<16)||(j>21 && j<24)||(j>27 && j<30)||(j>31 && j<34)||(j>35 && j<38)||(j>39 && j<42)||(j>45 && j<48)||(j>49 && j<52)||(j>53 && j<56)||(j>61 && j<64)||(j>69 && j<74)||(j>75 && j<78))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 20:
                            if((j>1 && j<20)||(j>21 && j<26)||(j>27 && j<30)||(j>31 && j<34)||(j>35 && j<38)||(j>39 && j<42)||(j>53 && j<56)||(j>57 && j<60)||(j>61 && j<68)||(j>71 && j<74))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 21:
                            if((j>1 && j<4)||(j>21 && j<24)||(j>27 && j<30)||(j>31 && j<34)||(j>35 && j<38)||(j>39 && j<52)||(j>53 && j<56)||(j>57 && j<60)||(j>61 && j<64)||(j>65 && j<68)||(j>69 && j<74)||(j>75 && j<78)||(j>79 && j<82))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 22:
                            if((j>1 && j<4)||(j>5 && j<34)||(j>35 && j<38)||(j>49 && j<52)||(j>53 && j<56)||(j>57 && j<60)||(j>61 && j<64)||(j>65 && j<68)||(j>71 && j<74)||(j>75 && j<78))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 23:
                            if((j>1 && j<4)||(j>5 && j<8)||(j>27 && j<30)||(j>31 && j<34)||(j>35 && j<40)||(j>41 && j<48)||(j>49 && j<52)||(j>53 && j<56)||(j>57 && j<60)||(j>61 && j<64)||(j>69 && j<74)||(j>75 && j<80))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 24:
                            if((j>1 && j<4)||(j>5 && j<8)||(j>9 && j<14)||(j>15 && j<18)||(j>19 && j<22)||(j>23 && j<26)||(j>31 && j<34)||(j>37 && j<40)||(j>41 && j<44)||(j>49 && j<52)||(j>53 && j<56)||(j>57 && j<60)||(j>61 && j<64)||(j>65 && j<68)||(j>71 && j<74)||(j>75 && j<78))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 25:
                            if((j>1 && j<4)||(j>5 && j<8)||(j>9 && j<12)||(j>15 && j<18)||(j>19 && j<22)||(j>23 && j<30)||(j>31 && j<36)||(j>41 && j<44)||(j>45 && j<48)||(j>49 && j<52)||(j>53 && j<56)||(j>57 && j<60)||(j>61 && j<64)||(j>65 && j<74)||(j>75 && j<78)||(j>79 && j<82))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 26:
                            if((j>1 && j<4)||(j>5 && j<8)||(j>9 && j<14)||(j>15 && j<18)||(j>19 && j<22)||(j>33 && j<48)||(j>49 && j<52)||(j>53 && j<60)||(j>61 && j<64)||(j>75 && j<78))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 27:
                            if((j>1 && j<4)||(j>15 && j<18)||(j>19 && j<28)||(j>49 && j<52)||(j>61 && j<80))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 28:
                            if((j>1 && j<18)||(j>25 && j<64))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        }
                    }
                }
            }
        }
    }
}
void lvl_9(char m[Y_][X_])
{
    system("COLOR 07");
    for(int i=0 ; i<Y_ ; i++)
    {
        for(int j=0 ; j<X_ ; j++)
        {
            if(i==0 || i==Y_-1)//Limites superiores e inferiores del mapa
            {
                m[i][j]=219;
            }
            else
            {
                if(j==0 || j==1 || j==X_9-2 || j==X_9-1)//Limites laterales del mapa
                {
                    m[i][j]=219;

                    if(i==28 && (j==88 || j==89))//Salida!
                    {
                        m[i][j]=' ';
                    }
                }
                else
                {
                    if(j>=X_9)
                    {
                        m[i][j]=' ';
                    }
                    else
                    {

                        switch(i) //Diseño de las paredes internas del laberinto
                        {
                        case 1:
                            if((j>15 && j<18)||(j>65 && j<68)||(j>73 && j<76)||(j>81 && j<88))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 2:
                            if((j>3 && j<14)||(j>15 && j<18)||(j>19 && j<34)||(j>35 && j<64)||(j>69 && j<72)||(j>73 && j<76)||(j>77 && j<80)||(j>81 && j<84)||(j>85 && j<88))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 3:
                            if((j>11 && j<14)||(j>15 && j<18)||(j>19 && j<22)||(j>31 && j<34)||(j>35 && j<38)||(j>53 && j<56)||(j>61 && j<68)||(j>69 && j<72)||(j>73 && j<76)||(j>77 && j<80))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 4:
                            if((j>1 && j<10)||(j>11 && j<14)||(j>15 && j<18)||(j>19 && j<22)||(j>23 && j<30)||(j>31 && j<34)||(j>35 && j<38)||(j>39 && j<52)||(j>53 && j<56)||(j>57 && j<60)||(j>69 && j<72)||(j>73 && j<76)||(j>77 && j<86))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 5:
                            if((j>7 && j<10)||(j>11 && j<14)||(j>15 && j<18)||(j>19 && j<22)||(j>27 && j<30)||(j>31 && j<34)||(j>35 && j<38)||(j>47 && j<50)||(j>53 && j<72)||(j>73 && j<76)||(j>83 && j<86))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 6:
                            if((j>3 && j<6)||(j>7 && j<10)||(j>11 && j<14)||(j>15 && j<18)||(j>19 && j<22)||(j>23 && j<30)||(j>31 && j<34)||(j>35 && j<46)||(j>47 && j<50)||(j>63 && j<66)||(j>69 && j<72)||(j>73 && j<82)||(j>83 && j<86))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 7:
                            if((j>3 && j<6)||(j>7 && j<10)||(j>11 && j<14)||(j>15 && j<18)||(j>19 && j<22)||(j>27 && j<30)||(j>31 && j<34)||(j>35 && j<38)||(j>39 && j<42)||(j>43 && j<46)||(j>47 && j<62)||(j>63 && j<66)||(j>69 && j<72)||(j>83 && j<86))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 8:
                            if((j>3 && j<6)||(j>7 && j<10)||(j>11 && j<14)||(j>15 && j<18)||(j>19 && j<26)||(j>27 && j<30)||(j>31 && j<34)||(j>35 && j<38)||(j>43 && j<46)||(j>47 && j<50)||(j>51 && j<54)||(j>59 && j<62)||(j>63 && j<66)||(j>67 && j<86))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 9:
                            if((j>3 && j<6)||(j>11 && j<14)||(j>15 && j<18)||(j>19 && j<22)||(j>27 && j<30)||(j>31 && j<34)||(j>35 && j<38)||(j>39 && j<46)||(j>47 && j<50)||(j>51 && j<54)||(j>55 && j<58)||(j>59 && j<62)||(j>63 && j<66)||(j>67 && j<70)||(j>75 && j<78)||(j>83 && j<86))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 10:
                            if((j>3 && j<14)||(j>15 && j<18)||(j>19 && j<22)||(j>23 && j<30)||(j>31 && j<34)||(j>35 && j<38)||(j>47 && j<50)||(j>55 && j<58)||(j>59 && j<62)||(j>63 && j<66)||(j>67 && j<70)||(j>71 && j<74)||(j>75 && j<78)||(j>79 && j<82)||(j>83 && j<86))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 11:
                            if((j>11 && j<14)||(j>15 && j<18)||(j>19 && j<22)||(j>27 && j<30)||(j>31 && j<34)||(j>35 && j<38)||(j>39 && j<46)||(j>47 && j<58)||(j>59 && j<62)||(j>63 && j<66)||(j>71 && j<74)||(j>79 && j<82))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 12:
                            if((j>1 && j<10)||(j>11 && j<14)||(j>15 && j<18)||(j>19 && j<26)||(j>27 && j<30)||(j>31 && j<34)||(j>35 && j<38)||(j>47 && j<50)||(j>59 && j<62)||(j>63 && j<66)||(j>67 && j<88))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 13:
                            if((j>11 && j<14)||(j>15 && j<18)||(j>27 && j<30)||(j>31 && j<34)||(j>35 && j<38)||(j>39 && j<50)||(j>51 && j<62)||(j>63 && j<66)||(j>67 && j<70)||(j>75 && j<78)||(j>81 && j<84))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 14:
                            if((j>3 && j<14)||(j>15 && j<30)||(j>31 && j<34)||(j>35 && j<38)||(j>39 && j<42)||(j>47 && j<50)||(j>51 && j<54)||(j>63 && j<66)||(j>71 && j<74)||(j>81 && j<84)||(j>85 && j<88))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 15:
                            if((j>11 && j<14)||(j>31 && j<34)||(j>35 && j<38)||(j>39 && j<42)||(j>43 && j<46)||(j>47 && j<50)||(j>51 && j<54)||(j>55 && j<80)||(j>81 && j<84))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 16:
                            if((j>1 && j<6)||(j>7 && j<14)||(j>15 && j<28)||(j>29 && j<34)||(j>35 && j<38)||(j>39 && j<42)||(j>43 && j<46)||(j>47 && j<50)||(j>51 && j<54)||(j>55 && j<58)||(j>61 && j<64)||(j>69 && j<72)||(j>77 && j<80)||(j>81 && j<86))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 17:
                            if((j>3 && j<6)||(j>7 && j<10)||(j>29 && j<32)||(j>35 && j<38)||(j>39 && j<42)||(j>43 && j<46)||(j>47 && j<50)||(j>51 && j<54)||(j>55 && j<60)||(j>61 && j<64)||(j>65 && j<68)||(j>69 && j<72)||(j>73 && j<76))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 18:
                            if((j>3 && j<6)||(j>7 && j<10)||(j>13 && j<34)||(j>35 && j<38)||(j>39 && j<42)||(j>43 && j<46)||(j>47 && j<50)||(j>51 && j<54)||(j>65 && j<68)||(j>69 && j<88))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 19:
                            if((j>3 && j<6)||(j>7 && j<10)||(j>11 && j<16)||(j>35 && j<38)||(j>39 && j<42)||(j>43 && j<46)||(j>47 && j<50)||(j>51 && j<68)||(j>69 && j<72)||(j>73 && j<76))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 20:
                            if((j>7 && j<10)||(j>13 && j<16)||(j>17 && j<38)||(j>39 && j<42)||(j>43 && j<46)||(j>65 && j<68)||(j>69 && j<72)||(j>73 && j<76)||(j>77 && j<86))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 21:
                            if((j>3 && j<12)||(j>13 && j<16)||(j>25 && j<28)||(j>29 && j<32)||(j>33 && j<36)||(j>39 && j<42)||(j>43 && j<58)||(j>59 && j<64)||(j>65 && j<68)||(j>69 && j<72)||(j>73 && j<76)||(j>77 && j<80)||(j>83 && j<86))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 22:
                            if((j>7 && j<10)||(j>13 && j<24)||(j>25 && j<28)||(j>29 && j<32)||(j>39 && j<42)||(j>43 && j<46)||(j>55 && j<58)||(j>61 && j<64)||(j>65 && j<68)||(j>69 && j<72)||(j>73 && j<76)||(j>77 && j<80)||(j>83 && j<86))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 23:
                            if((j>1 && j<6)||(j>7 && j<10)||(j>11 && j<14)||(j>21 && j<24)||(j>25 && j<28)||(j>29 && j<32)||(j>33 && j<42)||(j>43 && j<46)||(j>47 && j<50)||(j>51 && j<54)||(j>55 && j<68)||(j>69 && j<72)||(j>73 && j<76)||(j>77 && j<80)||(j>81 && j<86))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 24:
                            if((j>1 && j<4)||(j>7 && j<10)||(j>11 && j<14)||(j>15 && j<24)||(j>25 && j<28)||(j>29 && j<32)||(j>33 && j<36)||(j>39 && j<42)||(j>43 && j<46)||(j>47 && j<50)||(j>51 && j<54)||(j>69 && j<72)||(j>73 && j<76)||(j>77 && j<80))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 25:
                            if((j>1 && j<4)||(j>5 && j<10)||(j>11 && j<14)||(j>17 && j<20)||(j>52 && j<28)||(j>39 && j<42)||(j>43 && j<46)||(j>47 && j<50)||(j>51 && j<54)||(j>55 && j<72)||(j>73 && j<76)||(j>77 && j<80)||(j>81 && j<88))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 26:
                            if((j>1 && j<4)||(j>7 && j<10)||(j>15 && j<20)||(j>21 && j<32)||(j>35 && j<38)||(j>39 && j<42)||(j>43 && j<46)||(j>47 && j<50)||(j>55 && j<58)||(j>61 && j<64)||(j>73 && j<76)||(j>77 && j<80)||(j>81 && j<84)||(j>85 && j<88))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 27:
                            if((j>1 && j<6)||(j>7 && j<12)||(j>17 && j<20)||(j>35 && j<38)||(j>39 && j<42)||(j>43 && j<46)||(j>47 && j<58)||(j>67 && j<76)||(j>77 && j<80)||(j>81 && j<84))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 28:
                            if((j>1 && j<4)||(j>13 && j<34)||(j>35 && j<38)||(j>43 && j<46)||(j>59 && j<66)||(j>77 && j<80))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        }
                    }
                }
            }
        }
    }
}
void lvl_10(char m[Y_][X_])
{
    system("color 03");
    for(int i=0 ; i<Y_ ; i++)
    {
        for(int j=0 ; j<X_ ; j++)
        {
            if(i==0 || i==Y_-1)//Limites superiores e inferiores del mapa
            {
                m[i][j]=219;
            }
            else
            {
                if(j==0 || j==1 || j==X_10-2 || j==X_10-1)//Limites laterales del mapa
                {
                    m[i][j]=219;

                    if(i==2 && (j==94 || j==95))//Salida!
                    {
                        m[i][j]=' ';
                    }
                }
                else
                {
                    if(j>=X_10)
                    {
                        m[i][j]=' ';
                    }
                    else
                    {

                        switch(i) //Diseño de las paredes internas del laberinto
                        {
                        case 1:
                            if((j>13 && j<30)||(j>35 && j<38)||(j>39 && j<44)||(j>63 && j<66)||(j>73 && j<76)||(j>81 && j<94))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 2:
                            if((j>9 && j<12)||(j>13 && j<16)||(j>25 && j<28)||(j>31 && j<34)||(j>45 && j<48)||(j>49 && j<52)||(j>53 && j<56)||(j>57 && j<60)||(j>63 && j<66)||(j>67 && j<70)||(j>71 && j<76)||(j>77 && j<80))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 3:
                            if((j>1 && j<12)||(j>13 && j<16)||(j>17 && j<20)||(j>21 && j<24)||(j>25 && j<28)||(j>31 && j<52)||(j>53 && j<56)||(j>57 && j<62)||(j>67 && j<70)||(j>73 && j<76)||(j>77 && j<94))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 4:
                            if((j>13 && j<16)||(j>17 && j<20)||(j>21 && j<24)||(j>25 && j<28)||(j>49 && j<52)||(j>53 && j<56)||(j>59 && j<76)||(j>77 && j<80)||(j>89 && j<92))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 5:
                            if((j>3 && j<16)||(j>17 && j<24)||(j>25 && j<48)||(j>49 && j<52)||(j>53 && j<58)||(j>59 && j<62)||(j>73 && j<76)||(j>80 && j<81)||(j>88 && j<92))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 6:
                            if((j>3 && j<6)||(j>17 && j<20)||(j>21 && j<24)||(j>25 && j<28)||(j>39 && j<42)||(j>49 && j<52)||(j>53 && j<56)||(j>59 && j<62)||(j>63 && j<70)||(j>71 && j<84)||(j>85 && j<88)||(j>89 && j<92))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 7:
                            if((j>3 && j<6)||(j>7 && j<20)||(j>21 && j<24)||(j>25 && j<28)||(j>29 && j<32)||(j>35 && j<38)||(j>39 && j<42)||(j>43 && j<48)||(j>49 && j<52)||(j>53 && j<62)||(j>63 && j<66)||(j>67 && j<70)||(j>73 && j<76)||(j>85 && j<88)||(j>89 && j<92))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 8:
                            if((j>3 && j<6)||(j>7 && j<10)||(j>17 && j<20)||(j>21 && j<24)||(j>25 && j<28)||(j>29 && j<38)||(j>39 && j<42)||(j>45 && j<48)||(j>49 && j<52)||(j>63 && j<66)||(j>67 && j<70)||(j>71 && j<80)||(j>81 && j<88)||(j>89 && j<92))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 9:
                            if((j>7 && j<10)||(j>11 && j<16)||(j>25 && j<28)||(j>29 && j<32)||(j>35 && j<38)||(j>39 && j<44)||(j>45 && j<48)||(j>49 && j<52)||(j>53 && j<66)||(j>67 && j<70)||(j>77 && j<80)||(j>89 && j<92))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 10:
                            if((j>3 && j<10)||(j>11 && j<28)||(j>35 && j<38)||(j>39 && j<42)||(j>45 && j<48)||(j>49 && j<52)||(j>67 && j<76)||(j>77 && j<80)||(j>83 && j<92))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 11:
                            if((j>3 && j<6)||(j>7 && j<10)||(j>11 && j<14)||(j>15 && j<18)||(j>19 && j<22)||(j>25 && j<34)||(j>35 && j<38)||(j>39 && j<42)||(j>43 && j<48)||(j>49 && j<52)||(j>53 && j<66)||(j>67 && j<70)||(j>73 && j<76)||(j>77 && j<80)||(j>81 && j<86))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 12:
                            if((j>3 && j<6)||(j>11 && j<14)||(j>25 && j<28)||(j>31 && j<34)||(j>35 && j<38)||(j>39 && j<42)||(j>45 && j<48)||(j>49 && j<52)||(j>53 && j<56)||(j>57 && j<60)||(j>63 && j<66)||(j>67 && j<70)||(j>71 && j<76)||(j>77 && j<80)||(j>83 && j<86)||(j>87 && j<92))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 13:
                            if((j>3 && j<6)||(j>7 && j<16)||(j>17 && j<24)||(j>25 && j<28)||(j>29 && j<34)||(j>35 && j<38)||(j>49 && j<52)||(j>53 && j<56)||(j>63 && j<66)||(j>67 && j<70)||(j>73 && j<76)||(j>77 && j<82)||(j>83 && j<86)||(j>87 && j<90))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 14:
                            if((j>3 && j<6)||(j>7 && j<10)||(j>11 && j<14)||(j>17 && j<20)||(j>21 && j<24)||(j>31 && j<34)||(j>35 && j<52)||(j>53 && j<62)||(j>63 && j<66)||(j>67 && j<72)||(j>73 && j<76)||(j>83 && j<86)||(j>87 && j<90)||(j>91 && j<94))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 15:
                            if((j>3 && j<6)||(j>7 && j<10)||(j>11 && j<16)||(j>17 && j<20)||(j>21 && j<30)||(j>31 && j<34)||(j>49 && j<52)||(j>73 && j<86)||(j>87 && j<90))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 16:
                            if((j>3 && j<6)||(j>17 && j<20)||(j>21 && j<24)||(j>27 && j<30)||(j>31 && j<48)||(j>49 && j<64)||(j>65 && j<76)||(j>77 && j<80)||(j>87 && j<92))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 17:
                            if((j>3 && j<6)||(j>7 && j<20)||(j>21 && j<24)||(j>27 && j<30)||(j>39 && j<42)||(j>49 && j<52)||(j>57 && j<60)||(j>61 && j<64)||(j>65 && j<68)||(j>81 && j<84))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 18:
                            if((j>3 && j<6)||(j>21 && j<24)||(j>25 && j<38)||(j>39 && j<42)||(j>43 && j<46)||(j>49 && j<52)||(j>53 && j<56)||(j>61 && j<64)||(j>65 && j<68)||(j>69 && j<72)||(j>73 && j<92))
                                 m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 19:
                            if((j>3 && j<20)||(j>21 && j<24)||(j>29 && j<32)||(j>35 && j<38)||(j>39 && j<42)||(j>43 && j<48)||(j>49 && j<52)||(j>53 && j<60)||(j>61 && j<64)||(j>65 && j<68)||(j>69 && j<72)||(j>77 && j<80))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 20:
                            if((j>3 && j<6)||(j>13 && j<16)||(j>21 && j<24)||(j>25 && j<28)||(j>29 && j<34)||(j>35 && j<38)||(j>49 && j<52)||(j>55 && j<58)||(j>61 && j<64)||(j>65 && j<68)||(j>69 && j<72)||(j>73 && j<76)||(j>77 && j<80)||(j>81 && j<94))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 21:
                            if((j>3 && j<6)||(j>7 && j<16)||(j>17 && j<24)||(j>25 && j<28)||(j>29 && j<32)||(j>35 && j<54)||(j>55 && j<58)||(j>59 && j<64)||(j>65 && j<68)||(j>69 && j<72)||(j>73 && j<76)||(j>77 && j<80))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 22:
                            if((j>13 && j<16)||(j>17 && j<20)||(j>21 && j<24)||(j>25 && j<28)||(j>29 && j<32)||(j>33 && j<40)||(j>47 && j<50)||(j>55 && j<58)||(j>61 && j<64)||(j>69 && j<72)||(j>73 && j<76)||(j>77 && j<92))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 23:
                            if((j>3 && j<16)||(j>25 && j<28)||(j>37 && j<42)||(j>43 && j<46)||(j>51 && j<54)||(j>55 && j<60)||(j>61 && j<72)||(j>73 && j<76)||(j>77 && j<80))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 24:
                            if((j>5 && j<8)||(j>9 && j<12)||(j>13 && j<36)||(j>37 && j<40)||(j>43 && j<58)||(j>61 && j<64)||(j>69 && j<72)||(j>73 && j<76)||(j>77 && j<80)||(j>81 && j<94))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 25:
                            if((j>1 && j<4)||(j>5 && j<8)||(j>25 && j<28)||(j>33 && j<36)||(j>37 && j<42)||(j>43 && j<46)||(j>51 && j<54)||(j>55 && j<58)||(j>59 && j<64)||(j>65 && j<68)||(j>69 && j<72)||(j>73 && j<76))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 26:
                            if((j>5 && j<8)||(j>9 && j<20)||(j>21 && j<24)||(j>25 && j<28)||(j>29 && j<32)||(j>43 && j<46)||(j>47 && j<50)||(j>51 && j<54)||(j>65 && j<68)||(j>69 && j<90)||(j>91 && j<94))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 27:
                            if((j>3 && j<8)||(j>9 && j<12)||(j>17 && j<20)||(j>21 && j<24)||(j>25 && j<28)||(j>29 && j<32)||(j>33 && j<46)||(j>47 && j<54)||(j>55 && j<68)||(j>69 && j<72))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        case 28:
                            if((j>13 && j<16)||(j>17 && j<20)||(j>29 && j<32)||(j>69 && j<72)||(j>73 && j<88)||(j>89 && j<92))
                                m[i][j]=219;
                            else
                                m[i][j]=' ';
                            break;
                        }
                    }
                }
            }
        }
    }
}
/************************************************/

/**Funcion relacionada al nivel actual**/
void set_lvl_info(int lvl,plySettings s_user)
{
    switch(lvl)//ubica el indicador del nivel en cuestion
    {
    case 1:
        gotoxy(64,2);
        break;
    case 2:
        gotoxy(66,2);
        break;
    case 3:
        gotoxy(68,2);
        break;
    case 4:
        gotoxy(70,2);
        break;
    case 5:
        gotoxy(72,2);
        break;
    case 6:
        gotoxy(78,2);
        break;
    case 7:
        gotoxy(82,2);
        break;
    case 8:
        gotoxy(89,2);
        break;
    case 9:
        gotoxy(94,2);
        break;
    case 10:
        gotoxy(98,2);
        break;
    }
    SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),s_user.color);
    printf("Nivel %d",lvl);
}
/************************************************/

/**Funciones relacionadas al cronometro**/
void define_chronometer(int* time, int lvl)
{
    switch(lvl)//dependiendo el nivel, el tiempo maximo será diferente
    {
    case 1:
        (*time)=31;
        break;
    case 2:
        (*time)=36;
        break;
    case 3:
        (*time)=41;
        break;
    case 4:
        (*time)=46;
        break;
    case 5:
        (*time)=51;
        break;
    case 6:
        (*time)=61;
        break;
    case 7:
        (*time)=71;
        break;
    case 8:
        (*time)=76;
        break;
    case 9:
        (*time)=91;
        break;
    case 10:
        (*time)=101;
        break;
    }
}
void set_chronometer_position(int lvl)
{
    switch(lvl)//ubica el cronómetro en pantalla dependiendo del nivel
    {
    case 1:
        gotoxy(64,5);
        break;
    case 2:
        gotoxy(66,5);
        break;
    case 3:
        gotoxy(68,5);
        break;
    case 4:
        gotoxy(70,5);
        break;
    case 5:
        gotoxy(72,5);
        break;
    case 6:
        gotoxy(78,5);
        break;
    case 7:
        gotoxy(82,5);
        break;
    case 8:
        gotoxy(89,5);
        break;
    case 9:
        gotoxy(94,5);
        break;
    case 10:
        gotoxy(98,5);
        break;
    }
}
void chronometer(int* time, int* time_aux,int lvl,plySettings s_user)
{
    (*time) = (*time)+150;

    if((*time)==1050) //Al cabo de un segundo aprox
    {
        if((*time_aux)>0)//Si todavia hay tiempo
        {
            (*time_aux)--;//Disminuye el tiempo restante en uno
            set_chronometer_position(lvl);//Lo posiciona en pantalla
            SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),s_user.color);
            if(lvl!=10)
                printf("Tiempo restante: %.2d",(*time_aux));//Lo muestra (solo dos digitos)
            else
                printf("Tiempo restante: %.3d",(*time_aux));//Lo muestra (tres digitos ya que
        }                                                   //este nivel tiene mas de 100 seg)
        (*time)=0;//Setea la variable auxiliar nuevamnte
    }
}
/************************************************/

/**Funciones relacionadas al puntaje**/
int define_lvl_score(int lvl)
{
    int aux;
    switch(lvl)//dependiendo el nivel, el puntaje será diferente
    {
    case 1:
        aux=10;
        break;
    case 2:
        aux=15;
        break;
    case 3:
        aux=20;
        break;
    case 4:
        aux=25;
        break;
    case 5:
        aux=30;
        break;
    case 6:
        aux=40;
        break;
    case 7:
        aux=50;
        break;
    case 8:
        aux=70;
        break;
    case 9:
        aux=90;
        break;
    case 10:
        aux=100;
        break;
    }
    return aux;
}
void set_lvl_score_position(int score, int lvl, int time)
{
    switch(lvl)//ubica el puntaje final en el lugar de la pantalla donde lo mostrará dependiendo del nivel
    {
    case 1:
        gotoxy(64,8);
        break;
    case 2:
        gotoxy(66,8);
        break;
    case 3:
        gotoxy(68,8);
        break;
    case 4:
        gotoxy(70,8);
        break;
    case 5:
        gotoxy(72,8);
        break;
    case 6:
        gotoxy(78,8);
        break;
    case 7:
        gotoxy(82,8);
        break;
    case 8:
        gotoxy(89,8);
        break;
    case 9:
        gotoxy(94,8);
        break;
    case 10:
        gotoxy(98,8);
        break;
    }
    printf("Puntaje obtenido: %d",score);//muestra el puntaje

    if(!time)//Si se acabo el tiempo mostrara dicho mensaje
    {
        switch(lvl)//ubica el puntaje final en el lugar de la pantalla donde lo mostrará dependiendo del nivel
        {
        case 1:
            gotoxy(64,11);
            break;
        case 2:
            gotoxy(66,11);
            break;
        case 3:
            gotoxy(68,11);
            break;
        case 4:
            gotoxy(70,11);
            break;
        case 5:
            gotoxy(72,11);
            break;
        case 6:
            gotoxy(78,11);
            break;
        case 7:
            gotoxy(82,11);
            break;
        case 8:
            gotoxy(89,11);
            break;
        case 9:
            gotoxy(94,11);
            break;
        case 10:
            gotoxy(98,13);
            break;
        }
        printf("SE AGOTO EL TIEMPO!!");//muestra el mensaje
    }
}
int lvl_score(int t_remaining,int lvl)
{
    return t_remaining * define_lvl_score(lvl);//multiplica el timepo restante por lo que vale este nivel
}
/************************************************/

/**Funciones relacionadas a la salida**/
void set_exit(int e[], int lvl)
{
    switch(lvl)//dependiendo el nivel la salida se ubicará en diferentes lugares
    {
    case 1:
        e[0]=1;
        e[1]=58;
        SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),11);
        gotoxy(60,0);
        printf("%c",219);
        gotoxy(61,0);
        printf("%c",219);
        gotoxy(60,2);
        printf("%c",219);
        gotoxy(61,2);
        printf("%c",219);
        break;
    case 2:
        e[0]=28;
        e[1]=60;
        SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),2);
        gotoxy(62,27);
        printf("%c",219);
        gotoxy(63,27);
        printf("%c",219);
        gotoxy(62,29);
        printf("%c",219);
        gotoxy(63,29);
        printf("%c",219);
        break;
    case 3:
        e[0]=6;
        e[1]=62;
        SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),1);
        gotoxy(64,5);
        printf("%c",219);
        gotoxy(65,5);
        printf("%c",219);
        gotoxy(64,7);
        printf("%c",219);
        gotoxy(65,7);
        printf("%c",219);
        break;
    case 4:
        e[0]=28;
        e[1]=64;
        SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),5);
        gotoxy(66,27);
        printf("%c",219);
        gotoxy(67,27);
        printf("%c",219);
        gotoxy(66,29);
        printf("%c",219);
        gotoxy(67,29);
        printf("%c",219);
        break;
    case 5:
        e[0]=15;
        e[1]=66;
        SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),6);
        gotoxy(68,14);
        printf("%c",219);
        gotoxy(69,14);
        printf("%c",219);
        gotoxy(68,16);
        printf("%c",219);
        gotoxy(69,16);
        printf("%c",219);
        break;
    case 6:
        e[0]=3;
        e[1]=72;
        SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),4);
        gotoxy(74,2);
        printf("%c",219);
        gotoxy(75,2);
        printf("%c",219);
        gotoxy(74,4);
        printf("%c",219);
        gotoxy(75,4);
        printf("%c",219);
        break;
    case 7:
        e[0]=12;
        e[1]=76;
        SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),13);
        gotoxy(78,11);
        printf("%c",219);
        gotoxy(79,11);
        printf("%c",219);
        gotoxy(78,13);
        printf("%c",219);
        gotoxy(79,13);
        printf("%c",219);
        break;
    case 8:
        e[0]=9;
        e[1]=82;
        SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),8);
        gotoxy(84,8);
        printf("%c",219);
        gotoxy(85,8);
        printf("%c",219);
        gotoxy(84,10);
        printf("%c",219);
        gotoxy(85,10);
        printf("%c",219);
        break;
    case 9:
        e[0]=28;
        e[1]=88;
        SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),7);
        gotoxy(90,27);
        printf("%c",219);
        gotoxy(91,27);
        printf("%c",219);
        gotoxy(90,29);
        printf("%c",219);
        gotoxy(91,29);
        printf("%c",219);
        break;
    case 10:
        e[0]=2;
        e[1]=94;
        SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),3);
        gotoxy(96,1);
        printf("%c",219);
        gotoxy(97,1);
        printf("%c",219);
        gotoxy(96,3);
        printf("%c",219);
        gotoxy(97,3);
        printf("%c",219);
        break;
    }
}
int check_finish(int c[], int e[])
{
    int ans;

    if(e[1]==c[1] && e[0]==c[0])//Si se encuentra la salida se termina el nivel
    {
        ans=1;
    }
    else
    {
        ans=0;
    }

    return ans;
}
/************************************************/

/**Printeo de niveles**/
void draw_lvl(char m[Y_][X_],int lvl,int x, int y)
{
    system("cls");

    switch(lvl)//segun el nivel carga la matriz
    {
    case 0:
        intro(m);
        break;
    case 1:
        lvl_1(m);
        break;
    case 2:
        lvl_2(m);
        break;
    case 3:
        lvl_3(m);
        break;
    case 4:
        lvl_4(m);
        break;
    case 5:
        lvl_5(m);
        break;
    case 6:
        lvl_6(m);
        break;
    case 7:
        lvl_7(m);
        break;
    case 8:
        lvl_8(m);
        break;
    case 9:
        lvl_9(m);
        break;
    case 10:
        lvl_10(m);
        break;
    }

    print_lvl(m,x,y);//"dibuja" el mapa
}
void print_lvl(char m[Y_][X_],int x, int y)
{
    for(int i=0; i<y; i++)
    {
        for(int j=0; j<x; j++)
        {
            if(x==X_)
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1+rand()%4);

            printf("%c",m[i][j]);
        }
        printf("\n");
    }
}
/************************************************/
