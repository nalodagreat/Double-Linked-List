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
	T getItem(int index)
	{
		return _list.getItem(index);
	}
	void reverse()
	{
		_list.reverse();
	}

	void updateItem(int index, T newValue)
	{
		_list.upadateItem(index, newValue);
	}
	void insertAtFront(T value)
	{
		_list.insertAtBegining(value);
	}
	void insertAtBack(T value)
	{
		_list.insertAtEnd(value);
	}
	void clear()
	{
		_list.clear();
	}
	void insertAfter(int index,T value)
	{
		_list.insertAfter(index, value);
	}
};

