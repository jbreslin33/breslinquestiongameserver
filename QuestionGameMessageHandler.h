
/*
-----------------------------------------------------------------------------
Filename:    QuestionGameMessageHandler.h
*/
#ifndef __QuestionGameMessageHandler_h_
#define __QuestionGameMessageHandler_h_

#include "../breslinmessagehandler/MessageHandler.h"
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>

class QuestionGameMessageHandler : public MessageHandler
{

public:
    QuestionGameMessageHandler();
    virtual ~QuestionGameMessageHandler(void);

virtual void translateMessage(std::string message);

protected:

	std::vector<std::string> functionVector;
};

#endif
