#include "stdafx.h"
#include "MessageSubject.h"
#include "MessageObserver.h"
#include "Message.h"
bool MessageSubject::Subscribe(MessageObserver* _observer)
{
	if (_observer == nullptr)
		return 0;
	observers.push_back(_observer);
	return 1;
}

bool MessageSubject::Unsubscribe(MessageObserver* _observer)
{
	if (_observer == nullptr)
		return 0;
	_observer->m_subject = nullptr;
	observers.push_back(_observer);
	return 1;
}

void MessageSubject::OnNotify(Message _msg)
{
	if(observers.size() > 0)
	{
		for (MessageObserver* msgObs : observers)
		{
			msgObs->OnNotify(_msg);
		}
	}
}
