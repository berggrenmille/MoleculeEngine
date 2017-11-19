#pragma once
#include "MessageSubject.h"
#include <memory>

//Forward declararation to prevent include circles
class Message;

///<summary>
///MessageObserver is an implementation of a message observer pattern.
///Observers are able to recieve messages from all systems.
///</summary>
class MessageObserver
{
public:
	virtual void OnNotify(Message _msg) = 0;
	void Notify(Message _msg) const;
	std::shared_ptr<MessageSubject> m_subject;
};