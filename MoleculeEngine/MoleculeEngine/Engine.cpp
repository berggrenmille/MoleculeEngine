#include "stdafx.h"
#include "Engine.h"
#include "System.h"

Engine::Engine()
{
	
}

bool Engine::CreateSystem(System* _system)
{
	if (_system == nullptr && !_system->system_initialized)
		return false;
	m_systems.push_back(_system);
}


Engine::~Engine()
{
	
}



