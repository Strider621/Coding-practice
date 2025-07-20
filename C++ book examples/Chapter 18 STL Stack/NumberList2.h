#include <iostream> 
using namespace std;
class NumberList2
{
protected:
    // Declare a class for the list node
    struct ListNode
    {
       double value;
       ListNode *next;
       ListNode(double value1, ListNode *next1 = nullptr)
       {
          value = value1;
          next = next1;
       }
    };
    ListNode *head;                  // List head pointer
public:
    NumberList2() { head = nullptr; }   // Constructor
    ~NumberList2();                  // Destructor
    void add(double value) { head = add(head, value);}
    void remove(double value) {head = remove(head, value);}
    void displayList() const {displayList(head);}
    int size() const {return size(head);}
private:
    // Recursive implementations
    ListNode *add(ListNode *aList, double value);
    ListNode *remove(ListNode *aList, double value);
    void displayList(ListNode *aList) const;
    int size(ListNode *aList) const;
};

int NumberList2::size(ListNode* aList) const
{
    if (aList == nullptr)
        return 0;
    else
        return 1 + size(aList->next);
}

//*******************************************
// Prints all elements stored in a list     *
//*******************************************
void NumberList2::displayList(ListNode* aList) const
{
    if (aList != nullptr)
    {
        cout << aList->value << "  ";
        displayList(aList->next);
    }
}
//***********************************************
// Adds a value at the end of a list            *
//***********************************************
NumberList2::ListNode* NumberList2::add(ListNode* aList, double value)
{
    if (aList == nullptr)
        return new ListNode(value);
    else
    {
        // add the value to the end of the tail
        aList->next = add(aList->next, value);
        return aList;
    }
}

//*************************************************
// Removes a value from the list and returns      *
// the resulting list                             *
//*************************************************
NumberList2::ListNode* NumberList2::remove(ListNode* aList, double value)
{
    if (aList == nullptr) return nullptr;
    // The list is not empty

    // See if value is first on the list
    // If so, delete the value and return the tail
    if (aList->value == value)
    {
        ListNode* tail = aList->next;
        delete aList;
        return tail;
    }
    else
    {
        // Value is not the first on the list
        // Return the list with the value removed
        // from the tail of the list
        aList->next = remove(aList->next, value);
        return aList;
    }
}

//***********************************
// Destructor                       *
//***********************************
NumberList2::~NumberList2()
{
    ListNode* ptr = head;
    while (ptr != nullptr)
    {
        // Point to the node to be deleted
        ListNode* garbage = ptr;
        // Go on to the next node
        ptr = ptr->next;
        // Delete the current node
        delete garbage;
    }
}
