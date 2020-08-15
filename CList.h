// implemented from the lesson of Creating a Linked List Project in C++ by Paul Programming
// https://www.youtube.com/channel/UCcDGsN3JxMavDkM9INRLGFA

#include <iostream>

using namespace std;

class CList
{
    private:
        typedef struct node
        {
            int data;
            node *next;
        }*nodePtr;
        
        //typedef struct node* nodePtr;
        
		nodePtr head;
        nodePtr curr;
        nodePtr temp;
    
    public:
        CList();
        void AddNode(int addData);
        void DeleteNode(int delData);
        void printList();
};



