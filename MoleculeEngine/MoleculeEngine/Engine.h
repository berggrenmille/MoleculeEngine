#pragma once
#include "IMessageSubject.h"
class System;

class Engine
{
public:
	///<summary>
	///The constructor initializes the engine and it's systems
	///</summary>
	Engine();

	///<summary>
	///The destructor shuts off the engine and it's systems
	///</summary>
	~Engine();

	///<summary>
	///Update notifies all observers of message hub that an update has occured
	///</summary>

	///<summary>
	///CreateSystem prepares and initializes a system
	///</summary>
	bool CreateSystem(System* _system);

	
private:
	std::list<System*> m_systems;
	IMessageSubject m_messageHub;
};

namespace ListHelper
{
	template <typename T>
	T GetListElementAtIndex(std::list<T> _list, int _index)
	{
		std::list<T>::iterator it = _list.begin();
		for (auto i = 0; i < _index; i++) {
			++it;
		}
		return *it;
	}
}
