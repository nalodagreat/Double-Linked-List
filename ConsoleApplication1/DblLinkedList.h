#pragma once
#include<iostream>
#include<string>
#include <vector>
using namespace std;
template <class T>
class DblLinkedList
{
	int _size = 0;
public:

	class Node
	{
	public:
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
		if (head != NULL)
		{
			head->prev = newNode;
		}
		head = newNode;
		_size++;
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
		_size++;
	}
	void insertAfter(Node* preevious, T value)
	{
		//head-1-2-3-null

		if (head == NULL || preevious == NULL)
		{
			return;
		}
		Node* newNode = new Node();

		newNode->value = value;
		newNode->next = preevious->next;
		newNode->prev = preevious;

		if (preevious->next != NULL)
		{
			preevious->next->prev = newNode;
		}
		preevious->next = newNode;
		_size++;
	}
	Node * find(T value)
	{
		if (head == NULL)
			return NULL;
		Node* current = head;
		while (current!=NULL)
		{
			if (current->value == value)
				return current;
			current = current->next;
		}
		return NULL;
	}

	void deleteFirstNode()
	{
		//Head-1-2-NULL
		if (head == NULL)
			return;
		Node* current = head;
		head = current->next;

		if (current->next != NULL)

			current->next->prev = NULL;
		delete current;
		_size--;
	}
	void deleteLastNode()
	{
		//head-1-2-null
		if (head == NULL)
			return;
		Node* current = head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		if (current->prev == NULL)
		{
			delete head;
			head = NULL;
			return;
		}
		
			current->prev->next = NULL;
		
		delete current;
		_size--;
	}
	void deleteNode(Node* nodeToDelete)
	{
		//-head-1-2-3-null
		if (head == NULL)
			return;
		if (nodeToDelete->prev == NULL)
		{
			head = nodeToDelete->next;
		}

		if (nodeToDelete->prev != NULL)
		{
			nodeToDelete->prev->next = nodeToDelete->next;
		}
		if (nodeToDelete->next != NULL)
		{
			nodeToDelete->next->prev = nodeToDelete->prev;
		}
		
		delete nodeToDelete;
		_size--;
	}
	void printList()
	{
		Node* current = head;
		while (current != NULL)
		{
			cout << current->value<<" ";
			current = current->next;
		}
		
	}
	int size()
	{
		return _size;

	}
	bool isEmpty()
	{
		return (_size == 0);
	}
	void clear()
	{
		while (size > 0)
		{
			deleteFirstNode();
		}
	}
};

