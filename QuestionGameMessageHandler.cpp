
/*
-----------------------------------------------------------------------------
Filename:    QuestionGameMessageHandler.cpp
*/

#include "QuestionGameMessageHandler.h"


//-------------------------------------------------------------------------------------
QuestionGameMessageHandler::QuestionGameMessageHandler()
{
}
//-------------------------------------------------------------------------------------
QuestionGameMessageHandler::~QuestionGameMessageHandler(void)
{
}

/*this should call a function on the client or the server */
QuestionGameMessageHandler::translateMessage(char* message)
{
	if (message[0] == "u")
	{
		std::cout << "call username function" << std::endl;
	}
	else
	{
		std::cout << "call something" << std::endl;
	}
}
