/*
-----------------------------------------------------------------------------
Filename:    QuestionGame.h
*/
#ifndef __QuestionGame_h_
#define __QuestionGame_h_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


class GameServer;

class QuestionGame
{

public:
    QuestionGame();
    virtual ~QuestionGame(void);


	void setGameServer(GameServer* gameServer);

protected:
GameServer* gameServer;

};

#endif


