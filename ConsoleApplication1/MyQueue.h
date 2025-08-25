#pragma once
#include "DblLinkedList.h"
template <class T>
class MyQueue
{
protected:
	DblLinkedList _list;
	
public:
	void push(T value)
	{
		_list.insertAtEnd(value);
	}
	void pop()
	{
		_list.deleteFirstNode();
	}
	

};

