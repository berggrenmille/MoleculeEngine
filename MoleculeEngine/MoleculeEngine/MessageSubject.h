#pragma once
#include <list>
class Message;
class MessageObserver;

class MessageSubject 
{
public:
	std::list<MessageObserver*> observers;

	bool Subscribe(MessageObserver* _observer);
	bool Unsubscribe(MessageObserver* _observer);

	void OnNotify(Message _msg);
};

