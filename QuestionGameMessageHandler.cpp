
/*
-----------------------------------------------------------------------------
Filename:    QuestionGameMessageHandler.cpp
*/

#include "QuestionGameMessageHandler.h"
#include "../breslinlistenserver/ListenServer.h"

#include <string>
#include <iostream>

//-------------------------------------------------------------------------------------
QuestionGameMessageHandler::QuestionGameMessageHandler()
{

	std::cout << "QuestionGameMessageHandler Constructor\n";

	//mListenServer->setMessageHandler(this);

}
//-------------------------------------------------------------------------------------
QuestionGameMessageHandler::~QuestionGameMessageHandler(void)
{
}

/*this should call a function on the client or the server */
void QuestionGameMessageHandler::translateMessage(std::string message)
{
	std::cout << "in translateMessage!!!\n";
        std::string u = "u";
	if (message.compare(0,1,u))
	{
		std::cout << "call username function" << std::endl;
	}
	else
	{
		std::cout << "call something" << std::endl;
	}

}
