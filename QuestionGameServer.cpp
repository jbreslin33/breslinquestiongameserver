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

	std::cout << "creating ListenServer\n";
	mListenServer = new ListenServer();

	std::cout << "Creating QuestionGameMessageHandler\n";
	mMessageHandler = new QuestionGameMessageHandler();
	
	std::cout << "setMassageHandler(questionGameMessageHandler) in QuestionGameServer Constructor\n";
	setMessageHandler(mMessageHandler);

	std::cout << "mListenServer->setMessageHandler(mMessageHandler)\n";
	mListenServer->setMessageHandler(mMessageHandler);

	std::cout << "creating QuestionGame\n";
	mGame = new QuestionGame();

	serverLoop();
}
//-------------------------------------------------------------------------------------
QuestionGameServer::~QuestionGameServer(void)
{
}

void QuestionGameServer::serverLoop()
{
	mListenServer->processRequests();

	serverLoop();
}

