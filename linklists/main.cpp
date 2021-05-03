#include <iostream>
using namespace std;

// Linked list !== Array;
//      - Not fixed in size, flexible length
//      - Random access is not allowed (unable to select by index) (must find by pointer + traverse list to get value);
//      - Each index has a value and a pointer, only get value through traversing through pointers

class Node {
    public:
        int Value;
        Node* Next;
};

void printList(Node*nodePointer)
{
    while(nodePointer != NULL)
    {
        cout << nodePointer->Value << "\n";
        nodePointer = nodePointer-> Next;
    }
};

void addToFront(Node**head, int value)
// 1. Prepare a new node;
// 2. Put new node in front of current head;
// 3. Move head of list to point to the new node;
{
    // Step 1;
    Node * newNode = new Node();
    newNode->Value = value;
    // Step 2;
    newNode->Next = *head;
    // Step 3;
    *head = newNode;
};
// 1
void addToBack(Node**head, int value)
// 1. Prepare new value;
// 2. If linked list is empty, new node will be head node;
// 3. Find last node;
// 4. Insert new node after last node;
{
    // Step 1;
    Node* newNode = new Node();
    newNode->Value = value;
    newNode->Next = NULL;
    // Step 2;
    if (*head == NULL)
    {
        *head = newNode;
        return;
    };
    // Step 3;
    Node*last = *head;
    while(last->Next != NULL)
    {
        last = last->Next;
    };
    // Step 4;
    last->Next = newNode;
}
int main()
{
    // Initializing linked list
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    // Assigning Values to list
    head->Value = 1;
    head->Next = second;
    second->Value = 2;
    second->Next = third;
    third->Value = 3;
    third-> Next = NULL;
    // Adding to front of list
    addToFront(&head, 0);
    // Adding another....
    addToFront(&head, -1);
    // Adding to end of list
    addToBack(&head, 4);
    // Adding another...
    addToBack(&head, 5);
    // Printing list
    printList(head);
    return 0;
}