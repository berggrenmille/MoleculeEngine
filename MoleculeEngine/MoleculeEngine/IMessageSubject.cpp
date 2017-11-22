#include "stdafx.h"
#include "IMessageSubject.h"
#include "IMessageObserver.h"
#include "Message.h"
bool IMessageSubject::Subscribe(IMessageObserver* _observer)
{
	if (_observer == nullptr)
		return 0;
	observers.push_back(_observer);
	return 1;
}

bool IMessageSubject::Unsubscribe(IMessageObserver* _observer)
{
	if (_observer == nullptr)
		return 0;
	_observer->m_subject = nullptr;
	observers.push_back(_observer);
	return 1;
}

void IMessageSubject::OnNotify(Message _msg)
{
	if(observers.size() > 0)
	{
		for (IMessageObserver* msgObs : observers)
		{
			msgObs->OnNotify(_msg);
		}
	}
}
