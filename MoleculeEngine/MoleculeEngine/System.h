#pragma once
#include "MessageObserver.h"


///<summary>
///System is the base class for all of Molecule's systems.
///</summary>
class System :
	public MessageObserver
{
public:
	System();
	virtual ~System() = 0;

	std::string system_name = "NONAME";
	bool system_initialized = false;
};

