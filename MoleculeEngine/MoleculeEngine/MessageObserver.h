#pragma once

//Forward declararation to prevent include circles
class Message;

///<summary>
///MessageObserver is an implementation of a message observer pattern.
///Observers are able to recieve messages from all systems.
///</summary>
class MessageObserver
{
	virtual void OnMessage(Message _msg) = 0;
};