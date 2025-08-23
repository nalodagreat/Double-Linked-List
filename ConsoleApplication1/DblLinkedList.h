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
};

