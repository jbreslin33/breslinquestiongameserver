
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
//	std::cout << "in translateMessage!!!\n";
        std::string u = "username";
	std::string delimiter = ",";

	std::string currentParameter = "";

	int lastDelimiterSpot = 0;

	std::vector<std::string> functionVector;

	int i;
	for (i=1;i < message.length(); i++)
	{
		std::cout << "evaluate char:\n";
		if (message.compare(i,1,delimiter) == 0) //check for delimiter
		{
			std::cout << "delimiter reached\n";
		}
		else
		{
			std::cout << "regular char\n";
		}
	}
}
