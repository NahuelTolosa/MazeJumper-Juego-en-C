#include "TDAs.h"
void in_user_list(userNode** list)
{
    *list = NULL;
}
void in_ply_list(playerNode** list)
{
    *list = NULL;
}
userNode* new_user_node(stPlayerRecord aux)
{
    userNode* newNode = (userNode*) malloc(sizeof(userNode));

    strcpy(newNode->userName,aux.userName);
    strcpy(newNode->nickName,aux.nickName);
    strcpy(newNode->email,aux.email);
    strcpy(newNode->password,aux.password);
    newNode->playerID = aux.playerID;
    newNode->condition = aux.condition;
    newNode->active = aux.active;
    newNode->nextUser = NULL;

    return newNode;
}
playerNode* new_ply_node(stPlayerRecord aux)
{
    playerNode* newNode = (playerNode*) malloc(sizeof(playerNode));

    newNode->playerID = aux.playerID;
    newNode->lvlList = NULL;
    newNode->nextPly = NULL;

    return newNode;
}
lvlNode* new_lvl_node(stPlayerRecord aux)
{
    lvlNode* newNode = (lvlNode*) malloc(sizeof(lvlNode));

    newNode->playerID = aux.playerID;
    newNode->score = aux.score;
    newNode->lvl = aux.lvl;
    newNode->nextlvl = NULL;

    return newNode;
}
void add_ply_node(playerNode** list,playerNode* newNode)
{
    if(!*list)
    {
        *list = newNode;
    }
    else
    {
        if((*list)->playerID > newNode->playerID)
        {
            newNode->nextPly = *list;
            *list=newNode;
        }
        else
        {
            playerNode* ante = *list;
            playerNode* seg = (*list)->nextPly;

            while(seg && seg->playerID < newNode->playerID)
            {
                ante = seg;
                seg = seg->nextPly;
            }

            ante->nextPly = newNode;
            newNode->nextPly = seg;
        }
    }
}
void add_user_node(userNode** list,userNode* newNode)
{
    if(!*list)
    {
        *list = newNode;
    }
    else
    {
        if((*list)->playerID > newNode->playerID)
        {
            newNode->nextUser = *list;
            *list = newNode;
        }
        else
        {
            userNode* ante = *list;
            userNode* seg = (*list)->nextUser;
            while(seg && seg->playerID < newNode->playerID)
            {
                ante = seg;
                seg = seg->nextUser;
            }

            ante->nextUser = newNode;
            newNode->nextUser = seg;
        }
    }

}
void add_lvl_node(lvlNode** list,lvlNode* newNode)
{
    if(!*list)
    {
        *list = newNode;
    }
    else
    {
        if((*list)->lvl > newNode->lvl)
        {
            newNode->nextlvl = *list;
            *list=newNode;
        }
        else
        {
            lvlNode* ante = *list;
            lvlNode* seg = (*list)->nextlvl;
            while(seg && seg->lvl < newNode->lvl)
            {
                ante = seg;
                seg = seg->nextlvl;
            }

            ante->nextlvl = newNode;
            newNode->nextlvl = seg;
        }
    }
}
userNode* check_user(userNode* list,int id)
{
    while(list && list->playerID != id)
    {
        list = list->nextUser;
    }

    return list;
}
playerNode* check_ply(playerNode* list,int id)
{
    while(list && list->playerID != id)
    {
        list = list->nextPly;
    }

    return list;
}
int get_last_ID(userNode* list)
{
    int newID=0;

    if(list)
    {
        while(list->nextUser)
        {
            list = list->nextUser;
        }

        newID = list->playerID;
    }

    return newID;
}
int check_email(userNode* list,char* info,userNode** user)
{
    int ans = 0;
    if(list)
    {
        while(!ans && list)
        {
            if(!strcmpi(list->email,info))
            {
                ans = 1;
                *user = list;
            }

            list = list->nextUser;
        }
    }

    return ans;
}
lvlNode* look_for_node(lvlNode* list,int lvl)
{
    while(list && (list->lvl != lvl))
    {
        list = list->nextlvl;
    }

    return list;
}
lvlNode* pl_look_for_node(playerNode* list,int id)
{
    while(list->playerID != id)
    {
        list = list->nextPly;
    }

    return list->lvlList;
}
void delete_score_record(playerNode* list,int id)
{
    lvlNode* aux = pl_look_for_node(list,id);
    if(aux)
    {
        while(aux)
        {
            aux->score=0;
            aux = aux->nextlvl;
        }
    }
}
void change_active(userNode** u_list)
{
    if((*u_list)->active)
        (*u_list)->active = 0;

    else
        (*u_list)->active = 1;

}
void show_user_statistics(playerNode* list,int id)
{
    lvlNode* aux = pl_look_for_node(list,id);
    int i=1;

    if(aux)
    {
        while(aux && i<=10)
        {
            switch(i)
            {
            case 1:
                gotoxy(5,13);
                break;
            case 2:
                gotoxy(5,16);
                break;
            case 3:
                gotoxy(5,19);
                break;
            case 4:
                gotoxy(5,22);
                break;
            case 5:
                gotoxy(5,25);
                break;
            case 6:
                gotoxy(32,13);
                break;
            case 7:
                gotoxy(32,16);
                break;
            case 8:
                gotoxy(32,19);
                break;
            case 9:
                gotoxy(32,22);
                break;
            case 10:
                gotoxy(32,25);
                break;
            }
            printf("Nivel %d: %d\n",i,aux->score);
            i++;
            aux = aux->nextlvl;
        }
    }
}
int total_score(lvlNode* list)
{
    int final_score=0;

    if(list)
    {
        while(list)
        {
            final_score += list->score;
            list = list->nextlvl;
        }
    }

    return final_score;
}
userNode* return_nickname(userNode* u_list,int id)
{
    userNode* aux = NULL;
    while(u_list && !aux)
    {
        if(u_list->playerID == id)
            aux=u_list;

        u_list = u_list->nextUser;
    }

    return aux;
}
void delete_first_node(userNode** u_list)
{
    if(*u_list)
    {
        userNode* aux = *u_list;
        *u_list = (*u_list)->nextUser;
        free(aux);
    }
}
void read_file(userNode** users_list, playerNode** plys_list, char* file_name)
{
    FILE* p_file = fopen(file_name,"rb");

    if(p_file)
    {
        stPlayerRecord aux;

        while(fread(&aux,sizeof(stPlayerRecord),1,p_file))
        {

            if(!check_user(*users_list,aux.playerID))//Si no esta en la lista de ususarios, lo agrega
                add_user_node(users_list,new_user_node(aux));

            if(!check_ply(*plys_list,aux.playerID))//si no esta en la lista de jugadores, lo agrega
                add_ply_node(plys_list,new_ply_node(aux));

            playerNode* aux_list = check_ply(*plys_list,aux.playerID);//Busca el ususario donde agregar los datos del nivel

            add_lvl_node(&(aux_list->lvlList),new_lvl_node(aux));//Caraga el registro


        }
        fclose(p_file);
    }
}
void create_record(userNode* u_list,playerNode* p_list,stPlayerRecord rec[10])
{
    for(int i=0;i<10;i++)
    {
        strcpy(rec[i].userName,u_list->userName);
        strcpy(rec[i].nickName,u_list->nickName);
        strcpy(rec[i].email,u_list->email);
        strcpy(rec[i].password,u_list->password);
        rec[i].playerID = u_list->playerID;
        rec[i].condition = u_list->condition;
        rec[i].active = u_list->active;
    }

    playerNode* ply_list = check_ply(p_list,u_list->playerID);//busca el ID del jugador

    lvlNode* lvl_list = ply_list->lvlList;//envia la lista de niveles

    int i=0;

    while(lvl_list && i<=10)
    {
        rec[i].lvl = lvl_list->lvl;
        rec[i].score = lvl_list->score;
        lvl_list = lvl_list->nextlvl;
        i++;
    }

}
void write_file(userNode* u_list, playerNode* p_list, char* file)
{
    FILE* p_file = fopen(file,"wb");

    if(p_file)
    {
        stPlayerRecord aux[10];
        while(u_list)
        {
            create_record(u_list,p_list,aux);
            for(int i=0;i<10;i++)
            {
                fwrite(&aux[i],sizeof(stPlayerRecord),1,p_file);
            }
            u_list = u_list->nextUser;
        }
        fclose(p_file);
    }
}

/******ARBOLES*******/

void in_tree(treeNode** tree)
{
    *tree=NULL;
}
void list2tree(playerNode* p_list, userNode* u_list, treeNode** tree)
{
    while(p_list)
    {
        add_tree_node(tree,new_tree_node(return_nickname(u_list,p_list->playerID),p_list->playerID,total_score(p_list->lvlList)));//crea nodo de arbol
        p_list = p_list->nextPly;
    }
}
void add_tree_node(treeNode** tree,treeNode* newNode)
{
    if(!*tree)
    {
        *tree=newNode;
    }
    else
    {
        if(newNode->score < (*tree)->score)
        {
            add_tree_node(&((*tree)->left),newNode);
        }
        else if(newNode->score > (*tree)->score)
        {
            add_tree_node(&((*tree)->right),newNode);
        }
    }
}
treeNode* new_tree_node(userNode* u_node,int id,int score)
{
    treeNode* newNode = (treeNode*) malloc(sizeof(treeNode));

    strcpy(newNode->nickName,u_node->nickName);
    newNode->playerID = id;
    newNode->score = score;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}
void show_node(treeNode* tree)
{
    printf("\t\t\t\t\t\t\t\t\t%s -> %d puntos\n",tree->nickName,tree->score);
}
void in_order(treeNode* tree)
{
    if(tree)
    {
        in_order(tree->left);
        show_node(tree);
        in_order(tree->right);
    }
}
void show_global_statistics(treeNode* tree)
{
    gotoxy(0,13);
    in_order(tree);
}

