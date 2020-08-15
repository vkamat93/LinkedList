#include <iostream>
#include <CList.h>

void CList::CList()
{
	head = NULL;
	curr = NULL;
	temp = NULL;
}
        
void CList::AddNode(int addData)
{
	nodePtr n = new node;
	n->next = NULL;
	n->data = addData;
	
	if(head != NULL)
	{
		curr = head;
		while(curr->next != NULL)
		{
		  curr = curr->next;  
		}
		curr->next = n;
	}
	else
	{
		head = n;
	}
}
        
void CList::DeleteNode(int delData)
{
	nodePtr delPtr = NULL;
	temp = head;
	curr = head;
	
	//chk to see if current node is the one to delete, if not advance the curr ptr and
	// keep temp ptr one step behind
	while(curr != NULL && curr->data != delData) 
	{
		temp = curr;
		curr = curr->next;
	}
	
	//passed through entire list and didnt find value we were looking for
	if(curr == NULL)
	{
		cout << "The value " << delData << " was not in the list!!" <<endl;
		delete delPtr; //delete the floating pointer for garbage collection
	}
	
	//we found the node with the passed delData
	else
	{
		delPtr = curr;
		curr = curr->next;
		temp->next = curr;
		delete delPtr;
		cout << "The value " << delData << " was deleted!"<<endl;
	}
}
        
void CList::printList()
{
	curr = head; // point the current ptr to front of the list
	while (curr != NULL)
	{
		cout <<curr->data <<endl;
		curr = curr->next;
	}
	cout<<endl;
}
