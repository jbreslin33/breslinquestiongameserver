/*
-----------------------------------------------------------------------------
Filename:    QuestionGameServer.cpp
*/

#include "QuestionGameServer.h"
#include "QuestionGameMessageHandler.h"
#include "../breslinlistenserver/ListenServer.h"
#include "QuestionGame.h"

#include <iostream>

//-------------------------------------------------------------------------------------
QuestionGameServer::QuestionGameServer()
{
	
	std::cout << "QuestionGameServer Constructor\n";

	//now this is where I will start process of creating helper classes for GameServer....


	std::cout << "Creating QuestionGameServerMessageHandler\n";
	QuestionGameMessageHandler* questionGameMessageHandler = new QuestionGameMessageHandler();

	std::cout << "setMassageHandler(questionGameMessageHandler) in QuestionGameServer Constructor\n";
	setMessageHandler(questionGameMessageHandler);

	std::cout << "creating ListenServer\n";
	mListenServer = new ListenServer();

	std::cout << "creating QuestionGame\n";
	QuestionGame* questionGame = new QuestionGame();

	std::cout << "setGame(questionGame)\n";
	setGame(questionGame);	
	


}
//-------------------------------------------------------------------------------------
QuestionGameServer::~QuestionGameServer(void)
{
}

void QuestionGameServer::serverLoop()
{


	serverLoop();
}

