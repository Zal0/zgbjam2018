#ifndef ZGBMAIN_H
#define ZGBMAIN_H

#include "main.h"

typedef enum {
	STATE_SPLASH,
	STATE_GAME,
	STATE_WIN,
	STATE_LEVEL_INTRO,

	N_STATES
} STATE;

typedef enum {
	SPRITE_PLAYER,
	SPRITE_BALL,

	N_SPRITE_TYPES
} SPRITE_TYPE;

#endif