#include "stdafx.h"
#include "Time.h"
#include "SDL.h"
#include "Message.h"
namespace MoleculeEngine {

	void TIME::OnNotify(Message _msg)
	{
		auto tick_time = SDL_GetTicks() / 1000.0f;
		delta = tick_time - time;
		time = tick_time;
	}
	TIME* TIME::GetInstance()
	{
		static TIME time;
		return &time;
	}
}
