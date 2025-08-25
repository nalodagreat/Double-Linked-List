#pragma once

#include <iostream>
#include "MyQueue.h"
using namespace std;
template <class T>

class  clsMyStack:public MyQueue <T>
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
	
};

