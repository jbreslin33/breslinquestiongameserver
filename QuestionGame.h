/*
-----------------------------------------------------------------------------
Filename:    QuestionGame.h
*/
#ifndef __QuestionGame_h_
#define __QuestionGame_h_

#include "../breslingame/Game.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


class QuestionGame : public Game
{

public:
    QuestionGame();
    virtual ~QuestionGame(void);

	void gameLoop();
protected:

};

#endif


