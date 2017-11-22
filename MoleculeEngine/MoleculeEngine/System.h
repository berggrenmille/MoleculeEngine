#pragma once
#include "IMessageObserver.h"


///<summary>
///System is the base class for all of Molecule's systems.
///</summary>
class System :
	public IMessageObserver
{
public:
	System();
	virtual ~System() = 0;

	std::string system_name = "NONAME";
	bool system_ready = false;
};

