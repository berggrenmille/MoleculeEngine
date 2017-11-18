#include "stdafx.h"
#include "Message.h"

Message::Message(int _msgID, int _dataID, void* _data)
{
	this->msgID = _msgID;
	this->dataID = _dataID;
	this->data = _data;
}
Message::~Message()
{
	if (data == nullptr)
		return;

	switch (dataID)
	{
	default: 
		break;
	}
}

bool* Message::GetBool()
{
	return static_cast<bool*>(data);
}
char* Message::GetChar()
{
	return static_cast<char*>(data);
}
int* Message::GetInt()
{
	return static_cast<int*>(data);
}
double* Message::GetDouble()
{
	return static_cast<double*>(data);
}