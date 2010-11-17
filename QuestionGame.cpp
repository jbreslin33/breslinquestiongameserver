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
	std::cout << "QuestionGame Constructor\n";

	std::cout << "Creating Instance of QuestionGameServer\n";
	QuestionGameServer* gs = new QuestionGameServer();

	std::cout << "call setGameServer(gs) on Base Class Game Server and pass in QuestionGameServer\n";
	setGameServer(gs);
	
}
//-------------------------------------------------------------------------------------
QuestionGame::~QuestionGame(void)
{
}


