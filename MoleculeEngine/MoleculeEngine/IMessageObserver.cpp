#include "stdafx.h"
#include "IMessageObserver.h"
#include "Message.h"
void IMessageObserver::Notify(Message _msg) const
{
	m_subject->OnNotify(_msg);
}
