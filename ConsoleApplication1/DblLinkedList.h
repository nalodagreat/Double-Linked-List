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
	}
	Node * find(T value)
	{
		if (head == NULL)
			return NULL;
		Node* current = head;
		while (current->next!=NULL)
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
	}

};

