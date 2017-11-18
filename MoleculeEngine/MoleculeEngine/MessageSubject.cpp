#include "stdafx.h"
#include "MessageSubject.h"
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
	observers.push_back(_observer);
}