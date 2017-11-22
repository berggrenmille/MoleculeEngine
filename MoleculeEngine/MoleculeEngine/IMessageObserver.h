#pragma once
#include "IMessageSubject.h"
#include <memory>

//Forward declararation to prevent include circles
class Message;

///<summary>
///MessageObservers are able to recieve messages from all systems.
///</summary>
class IMessageObserver
{
public:
	virtual void OnNotify(Message _msg) = 0;
	void Notify(Message _msg) const;
	std::shared_ptr<IMessageSubject> m_subject;
};