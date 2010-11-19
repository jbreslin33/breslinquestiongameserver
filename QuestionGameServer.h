/*
-----------------------------------------------------------------------------
Filename:    QuestionGameServer.h
*/
#ifndef __QuestionGameServer_h_
#define __QuestionGameServer_h_

#include "../breslingameserver/GameServer.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


class QuestionGameServer : public GameServer
{

public:
    QuestionGameServer();
    virtual ~QuestionGameServer(void);


	void serverLoop();
protected:

};

#endif


