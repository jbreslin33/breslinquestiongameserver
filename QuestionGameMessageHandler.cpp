
/*
-----------------------------------------------------------------------------
Filename:    QuestionGameMessageHandler.cpp
*/

#include "QuestionGameMessageHandler.h"
#include "../breslinlistenserver/ListenServer.h"

#include <string>
#include <iostream>
#include <vector>

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
        std::string u = "username";
	std::string delimiter = "^";

	std::string currentParameter = "";

	int lastDelimiterSpot = 0;

	std::vector<std::string> functionVector;

	int i;
	for (i=0;i < message.length(); i++)
	{
		if (message.compare(i,1,delimiter) == 0)
		{
			std::cout << "delimiter reached\n";
			
	
			currentParameter = message.substr(lastDelimiterSpot,i-lastDelimiterSpot);
			std::cout << currentParameter;
			lastDelimiterSpot = i;
			//functionVector			
						
			
			
			



		}
	}
/*	
	if (message.compare(0,1,u) == 0)
	{
		std::cout << "call username function" << std::endl;
	}
	else
	{
		std::cout << "call something" << std::endl;
	}
*/
}
