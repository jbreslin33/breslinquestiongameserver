
/*
-----------------------------------------------------------------------------
Filename:    QuestionGameMessageHandler.cpp
*/

#include "QuestionGameMessageHandler.h"
#include "../breslinlistenserver/ListenServer.h"
#include "../breslingameserver/GameServer.h"

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
        std::string u = "username";


	char * cstr, *p;

  	//std::string str ("Please,split,this,phrase,into,tokens");

  	cstr = new char [message.size()+1];
  	strcpy (cstr, message.c_str());

  	// cstr now contains a c-string copy of str

  	p=strtok (cstr,",");
  	while (p!=NULL)
  	{
    		std::cout << p << std::endl;
		functionVector.push_back(p);
    		p=strtok(NULL,",");
  	}

  	delete[] cstr;  

/**************check what function***************************/

	//client to server
	if (functionVector.at(0).compare("joingame") == 0)
	{	//joinGame("Name","IP of client","port");
		getGameServer()->joinGame(functionVector.at(1),functionVector.at(2),functionVector.at(3));		
	}

	

	//server to client
	if (functionVector.at(0).compare("nameTaken") == 0)
	{
		//getGameServer()->joinGame(functionVector.at(1),functionVector.at(2),functionVector(3));		
	}

	functionVector.clear();


/************************end check what function***********/
}
