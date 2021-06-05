#include "Audio.h"

void play_music(int lvl)
{
    switch(lvl)
    {
    case 0:
        PlaySound("audio/menu.wav",NULL,SND_LOOP|SND_ASYNC);
        break;

    case 1:
        PlaySound("audio/level1.wav",NULL,SND_LOOP|SND_ASYNC);
        break;

    case 2:
        PlaySound("audio/level2.wav",NULL,SND_LOOP|SND_ASYNC);
        break;

    case 3:
        PlaySound("audio/level3.wav",NULL,SND_LOOP|SND_ASYNC);
        break;

    case 4:
        PlaySound("audio/level4.wav",NULL,SND_LOOP|SND_ASYNC);
        break;

    case 5:
        PlaySound("audio/level5.wav",NULL,SND_LOOP|SND_ASYNC);
        break;

    case 6:
        PlaySound("audio/level6.wav",NULL,SND_LOOP|SND_ASYNC);
        break;

    case 7:
        PlaySound("audio/level7.wav",NULL,SND_LOOP|SND_ASYNC);
        break;

    case 8:
        PlaySound("audio/level8.wav",NULL,SND_LOOP|SND_ASYNC);
        break;

    case 9:
        PlaySound("audio/level9.wav",NULL,SND_LOOP|SND_ASYNC);
        break;

    case 10:
        PlaySound("audio/level10.wav",NULL,SND_LOOP|SND_ASYNC);
        break;

    case 11:
        PlaySound("audio/gameOver.wav",NULL,SND_LOOP|SND_ASYNC);
        break;
    }
}

void stop_music()
{
    PlaySound(NULL,0,0);
}
