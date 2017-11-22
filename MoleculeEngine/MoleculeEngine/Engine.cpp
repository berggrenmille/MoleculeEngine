#include "stdafx.h"
#include "Engine.h"
#include "System.h"
#include "Display.h"
#include "Message.h"
#include "MoleculeEngine.h"
using namespace MoleculeEngine;
Engine::Engine()
{
	CreateSystem(new Display());
	while (1)
	{
		m_messageHub.OnNotify(Message(0, MSG_UPDATE));
	}
}

bool Engine::CreateSystem(System* _system)
{
	if (_system == nullptr && !_system->system_ready)
		return false;
	m_systems.push_back(_system);
	m_messageHub.Subscribe(_system);
}


Engine::~Engine()
{
	
}



