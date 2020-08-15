#include <iostream>
#include <CList.h>

int main()
{
    CList myList;
    myList.AddNode(3);
    myList.AddNode(5);
    myList.AddNode(7);
    myList.AddNode(10);
    myList.AddNode(11);
    myList.printList();
    
    myList.DeleteNode(2);
    myList.printList();
    
    myList.DeleteNode(5);
    myList.printList();
}
