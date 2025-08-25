#pragma once

#include <iostream>
#include "MyQueue.h"
using namespace std;
template <class T>

class MyStack:public MyQueue <T>
{

public :
	
	void push(T value)
	{
		MyQueue <T>::_list.insertAtBegining(value);
	}

	T Top()
	{
		return MyQueue <T>::front();
		
	}

	T Bottom()
	{
		return MyQueue <T>::back();

	}
	//now since MyStack extend DblLinkedlist we can acceess to all it s 3 extension without rewriting it
	
};

