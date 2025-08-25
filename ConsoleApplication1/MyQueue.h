#pragma once
#include "DblLinkedList.h"
template <class T>
class MyQueue
{
protected:
	DblLinkedList <T> _list;
	
public:
	void push(T value)
	{
		_list.insertAtEnd(value);
	}
	void pop()
	{
		_list.deleteFirstNode();
	}

	int size()
	{
		return _list.size();
	}
	void print()
	{
		_list.printList();

	}
	T front()
	{
		return _list.getItem(0);
	}
	T back()
	{
		return _list.getItem(size()-1);
	}
	bool isEmpty()
	{
		return _list.isEmpty();
	}
	
};

