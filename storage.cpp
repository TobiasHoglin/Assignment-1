
#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }

    // Constructor with data
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

};

class Storage
{
public:
    Node *head;

    /** Default constructor
     * 
    */
    Storage()
    {
        head = NULL;
    }

    /** Create a Node to hold the data, then put it at the head of the list.
<<<<<<< HEAD:Assignments/Assignement  1_1/Cpp/storage.cpp
     * @param int The data for the new node
=======
     * @param data The data for the new node
>>>>>>> 73706eb296a32bf8c71e7bac4c88d15f2c61c15a:Assignments/Assignment 1_1/Cpp/storage.cpp
    */
    void push(int data)
    {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
               
    }

    /** Remove the head Node and return its data.
     * 
     * @param [out] The data (only valid if return true)
     * @return True if there is a node to return
    */
    bool pop(int &data)
    {
        if(head == NULL)
        {
            return false;
        }
        else
        {
        data = head->data;
        Node* temp = head;
        head = head->next;
        delete temp;
        return true;
        }


    }


    /**
     * Return the data from the head Node, without removing it.
     * 
     * @param [out] The data (only valid if return true)
     * @return True if text has been returned successfully (there is a node)
    */    
    bool peek(int &data)
    {
        if(head != NULL)
        {
            data = head->data;
            return true;
        }
        return false;
        
    }

    /**
<<<<<<< HEAD:Assignments/Assignement  1_1/Cpp/storage.cpp
     * Returns true if list is empty, otherwise false.
     * 
     
     * @return Returns true if list is empty, otherwise false.
=======
     * Return True if the list is empty, otherwise False  
     * 
     * @return True if the list is empty, otherwise False
>>>>>>> 73706eb296a32bf8c71e7bac4c88d15f2c61c15a:Assignments/Assignment 1_1/Cpp/storage.cpp
    */
    bool isEmpty()
    {
        if(head != NULL)
        {
            return false;
        }
    return true;
    }

    

    /**
     * Swaps the nodes at position i and j.
     * 
     * @return Returns true if successful, otherwise false (e.g. outside range)
    */
    /**  Frivillig, avkommentera om du implementerar. Avkommentera även i test_storage.cpp
    bool swap(int i, int j);
    */
   bool swap(int I, int J)
   {
    if(I == J)
    {
        return false;
    }
    // Finds position for I and J and handles current and prevpointers.
    Node* currentI = head;
    Node* prevI = NULL;
    int counterI = 0;
    while(counterI != I && currentI != NULL) 
    {   
        prevI = currentI;
        currentI = currentI->next;
        counterI++; 
    }

    Node* currentJ = head;
    Node* prevJ = NULL;
    int counterJ = 0;
    while(counterJ != J && currentJ != NULL)
    {   
        prevJ = currentJ;
        currentJ = currentJ->next;
        counterJ++;
    }

    // swaps and if I is head sets J to head
    if (currentI == NULL || currentJ == NULL)
    {
        return false;
    }

    if(prevI != NULL)
    {
        prevI->next = currentJ;
    }
    else
    {
        head = currentJ;
    }

    // swaps and if J is head sets I to head
    if(prevJ != NULL)
    {
        prevJ->next = currentI;
    }
    else
    {
        head = currentI;
    }

    // next pointers shuffle
    Node* temp = prevI->next;
    prevI->next = currentJ->next;
    prevJ->next = temp;

    return true;

   }
};



int main() 
{
    Storage *s = new Storage();
    s->push(1);
    int pop;
    s->pop(pop);
    cout << pop << endl;
    return 0;
}

