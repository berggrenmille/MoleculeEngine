#include "stdafx.h"
#include "MessageObserver.h"
#include "Message.h"
void MessageObserver::Notify(Message _msg) const
{
	m_subject->OnNotify(_msg);
}
