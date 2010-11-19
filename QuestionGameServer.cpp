/*
-----------------------------------------------------------------------------
Filename:    QuestionGameServer.cpp
*/

#include "QuestionGameServer.h"
#include "QuestionGameMessageHandler.h"

#include <iostream>

//-------------------------------------------------------------------------------------
QuestionGameServer::QuestionGameServer()
{
	std::cout << "Creating QuestionGameServer\n";
	QuestionGameMessageHandler* questionGameMessageHandler = new QuestionGameMessageHandler();
	std::cout << "setMassageHandler(questionGameMessageHandler) in QuestionGameServer Constructor\n";
	setMessageHandler(questionGameMessageHandler);	
	


}
//-------------------------------------------------------------------------------------
QuestionGameServer::~QuestionGameServer(void)
{
}


