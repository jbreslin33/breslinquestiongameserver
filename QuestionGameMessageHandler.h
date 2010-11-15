
/*
-----------------------------------------------------------------------------
Filename:    MessageHandler.h
*/
#ifndef __MessageHandler_h_
#define __MessageHandler_h_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class MessageHandler
{

public:
    MessageHandler();
    virtual ~MessageHandler(void);


	translateMessage(char* message);
protected:
char* mMessage;



};

#endif
