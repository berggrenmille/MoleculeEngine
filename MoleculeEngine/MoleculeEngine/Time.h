#pragma once
#include "MoleculeEngine.h"
#include "System.h"
class MoleculeEngine::TIME :
	public System
{
public:
	float time = 0;
	float delta = 0;
	void OnNotify(Message _msg);

	static MoleculeEngine::TIME* GetInstance();
	//~TIME();
private:
	TIME() {};

};

