/*
-----------------------------------------------------------------------------
Filename:    QuestionGame.cpp
*/

#include "QuestionGame.h"
#include "QuestionGameServer.h"

#include <iostream>

//-------------------------------------------------------------------------------------
QuestionGame::QuestionGame()
{
	std::cout << "Starting Question Game\n";
	QuestionGameServer* gs = new QuestionGameServer();
	setGameServer(gs);
	
}
//-------------------------------------------------------------------------------------
QuestionGame::~QuestionGame(void)
{
}


