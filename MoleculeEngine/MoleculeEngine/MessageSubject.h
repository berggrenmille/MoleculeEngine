#pragma once
#include <list>
#include "MessageObserver.h"

class MessageSubject 
{
	std::list<MessageObserver*> observers;

	bool Subscribe(MessageObserver* _observer);
	bool Unsubscribe(MessageObserver* _observer);


};

