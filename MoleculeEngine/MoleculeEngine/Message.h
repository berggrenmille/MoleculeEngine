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
namespace MoleculeEngine
{
	enum MsgDataID
	{
		MSG_START,
		MSG_UPDATE,
		MSG_LATE_UPDATE,
		MSG_RENDER,
		MSG_BOOL,
		MSG_INT,
		MSG_DOUBLE,
		MSG_CHAR,
		MSG_NUM_DATA_ID
	};
}