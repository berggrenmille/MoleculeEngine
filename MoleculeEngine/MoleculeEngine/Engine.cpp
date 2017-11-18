#include "stdafx.h"
#include "Engine.h"
#include "System.h"

class Engine
{
	///<summary>
	///The constructor initializes the engine and it's systems
	///</summary>
	Engine();

	///<summary>
	///The destructor shuts off the engine and it's systems
	///</summary>
	~Engine();

	///<summary>
	///CreateSystem instantiates and initializes a system
	///</summary>
	bool CreateSystem(System* _system, int _flag);

};