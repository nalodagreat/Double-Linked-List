#pragma once
#include<iostream>
#include<string>
#include <vector>
using namespace std;
template <class T>
class DblLinkedList
{
public:

	class Node
	{
		Node* prev;
		T value;
		Node* next;
	};
	Node* head = NULL;
	void insertAtBegining(T value)
	{
		//head-1-2-3-null
		Node* newNode = new Node();
		newNode->value = value;
		newNode->next = head;
		newNode->prev = NULL;
		
		head = newNode;
	}
	void insertAtEnd(T value)
	{
		//head-1-2-3-null
		//4
		Node* newNode = new Node();
		newNode->value = value;
		newNode->next = NULL;
		if (head == NULL)
		{
			newNode->prev = NULL;
			head = newNode;
			return;
		}
		Node* current = head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newNode;
		newNode->prev = current;
	}
		
};

