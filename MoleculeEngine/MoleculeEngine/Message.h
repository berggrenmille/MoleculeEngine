#pragma once
class Message
{
public:
	Message(int _msgID, int _dataID, void* _data = nullptr);
	~Message();
	int msgID;
	int dataID;
	void* data;

	bool* GetBool();
	int* GetInt();
	double* GetDouble();
	char* GetChar();
};