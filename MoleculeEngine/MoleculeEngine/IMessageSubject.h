#pragma once
#include <list>
class Message;
class IMessageObserver;

class IMessageSubject 
{
public:
	std::list<IMessageObserver*> observers;

	bool Subscribe(IMessageObserver* _observer);
	bool Unsubscribe(IMessageObserver* _observer);

	void OnNotify(Message _msg);
};

