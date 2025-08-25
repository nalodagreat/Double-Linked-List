#include<iostream>
#include<string>
#include <vector>
#include "MyQueue.h"
#include "Mystack.h"
#include "DblLinkedList.h"
using namespace std;
int main()
{
	cout << "-----------------------------------------------------------------------------\n"
		<< "\t\t\t\t\tDOUBLE LINKED LIST\n";

	cout << "-----------------------------------------------------------------------------\n\n";
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
	cout << "\n\n-----------------------------------------------------------------------------\n"
		<< "\t\t\t\t\t\QUEUE\n";

	cout << "-----------------------------------------------------------------------------\n\n";
	MyQueue <int> queue;
	queue.push(10);
	queue.push(20);
	queue.push(30);
	queue.push(40);
	cout << "the Queue content\n";
	queue.print();
	cout << "\n Queue size: " << queue.size()<<endl;
	cout << "Queue front: " << queue.front()<<endl;
	cout << "Queue back: " << queue.back()<<endl;
	queue.pop();
	cout << "After pop()" <<  endl;
	queue.print();
	
	cout << "\n\n-----------------------------------------------------------------------------\n"
		<< "\t\t\t\t\t\Stack\n";

	cout << "-----------------------------------------------------------------------------\n\n";



	MyStack <int> MyStack;

	MyStack.push(10);
	MyStack.push(20);
	MyStack.push(30);
	MyStack.push(40);
	MyStack.push(50);


	cout << "\nStack content: \n";
	MyStack.print();

	cout << "\nStack Size: " << MyStack.size();
	cout << "\nStack Top: " << MyStack.Top();
	cout << "\nStack Bottom: " << MyStack.Bottom();

	MyStack.pop();

	cout << "\n\nStack after pop() : \n";
	MyStack.print();

	//Extension #1
	cout << "\n\n Item(2) : " << MyStack.getItem(2);

	//Extension #2
	MyStack.reverse();
	cout << "\n\nStack after reverse() : \n";
	MyStack.print();

	//Extension #3
	MyStack.updateItem(2, 600);
	cout << "\n\nStack after updating Item(2) to 600 : \n";
	MyStack.print();

	//Extension #4
	MyStack.insertAfter(2, 800);
	cout << "\n\nStack after Inserting 800 after Item(2) : \n";
	MyStack.print();


	//Extension #5
	MyStack.insertAtFront(1000);
	cout << "\n\nStack after Inserting 1000 at top: \n";
	MyStack.print();

	//Extension #6
	MyStack.insertAtBack(2000);
	cout << "\n\nStack after Inserting 2000 at bottom: \n";
	MyStack.print();

	//Extension #7
	MyStack.clear();
	cout << "\n\nStack after Clear(): \n";
	MyStack.print();



	return 0;

    
}
