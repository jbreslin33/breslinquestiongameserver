/*
-----------------------------------------------------------------------------
Filename:    QuestionGameServer.cpp
*/

#include "QuestionGameServer.h"

#include <iostream>

//-------------------------------------------------------------------------------------
QuestionGameServer::QuestionGameServer()
{
	std::cout << "Creating QuestionGameServer\n";
	QuestionGameMessageHandler* questionGameMessageHandler = new QuestionGameMessageHandler();
	


}
//-------------------------------------------------------------------------------------
QuestionGameServer::~QuestionGameServer(void)
{
}


