/*
-----------------------------------------------------------------------------
Filename:    QuestionGame.cpp
*/

#include "QuestionGame.h"
#include "QuestionGameServer.h"

//-------------------------------------------------------------------------------------
QuestionGame::QuestionGame()
{
	QuestionGameServer* gs = new QuestionGameServer();
	setGameServer(gs);
	
}
//-------------------------------------------------------------------------------------
QuestionGame::~QuestionGame(void)
{
}


