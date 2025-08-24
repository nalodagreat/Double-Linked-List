#include<iostream>
#include<string>
#include <vector>
#include <iostream>
#include "DblLinkedList.h"
using namespace std;
int main()
{
	DblLinkedList <int> dbllLinkedList;
	dbllLinkedList.insertAtBegining(1);
	dbllLinkedList.insertAtBegining(2);
	dbllLinkedList.insertAtBegining(3);
	dbllLinkedList.insertAtBegining(4);
	cout << "the list content\n";
	dbllLinkedList.printList();
	DblLinkedList<int>::Node* found = dbllLinkedList.find(2);
	if(found != NULL)
	{
		cout << "\nFound " <<found->value << "\n";
	}
	else
	{
		cout << "\nNot Found\n";
	}
	dbllLinkedList.deleteFirstNode();
	cout << "the list content after deleting first node\n";
	dbllLinkedList.printList();
	dbllLinkedList.deleteLastNode();
	cout << "\nthe list content after deleting last node\n";
	dbllLinkedList.printList();
	dbllLinkedList.deleteNode(found);
	cout << "\nthe list content after deleting node with value 2\n";
	dbllLinkedList.printList();
	dbllLinkedList.insertAtEnd(5);
	cout << "\nthe list content after inserting 5 at the end\n";
	dbllLinkedList.printList();
	cout << "\nlist size: " << dbllLinkedList.size() << endl;;
	if(dbllLinkedList.isEmpty())
	{
		cout << "list is empty\n";
	}
	else
	{
		cout << "list is not empty\n";
	}
	cout << "after reversing\n";
	dbllLinkedList.reverse();
	dbllLinkedList.printList();
	cout << "list after clearing all\n";
	dbllLinkedList.clear();
	dbllLinkedList.insertAtBegining(1);
	dbllLinkedList.insertAtBegining(2);
	dbllLinkedList.insertAtBegining(3);
	dbllLinkedList.insertAtBegining(4);
	cout << "new list cntent\n";
	dbllLinkedList.printList();

	DblLinkedList<int>::Node* N = dbllLinkedList.GetNode(3);
	cout << "\nlist value with index 2:";
	if(N!=NULL)
		cout<<N->value<<endl;
	else
		cout << "is NULL\n";
	cout << "Item with index 1 is: " << dbllLinkedList.getItem(1) << endl;
	if (dbllLinkedList.upadateItem(1, 500))
	{
		cout << "new list content after updating value of Item with index 1 is: ";
		dbllLinkedList.printList();
	}
	

	return 0;

    
}
