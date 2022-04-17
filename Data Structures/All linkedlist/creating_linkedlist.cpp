#include <iostream>
using namespace std;

class Node
{
    int data;
    Node *next;

public:
    friend void create(int *, int);
};

void create(int arr[], int n)
{

    Node *first, *temp, *last;
    /*
      1. create pointer to node  name as first last and temp
         first = this points on head ( 1st node )
         last = to save the address of the first node (this is used for assigning value of the next )
         temp = this is used for the temporary obj pointer creating
    */
    first = new Node; // first =1000;(random address)
    first->data = arr[0]; // value is store at first node
    first->next = NULL; 1011  // only one node is created 
    last = first; // end of the last node till this
    // 1000  
    for (int i = 1; i <= n; i++)
    {
        temp = new Node;     // 1089 (random address) // 1011
        temp->data = arr[i]; // value is store at  node
        temp->next = NULL;
        last->next = temp;  //  node is linked with previous node 
        // last is used for linked  with previous node 
        last = temp; // 1011
    }

    Node *ptr = first;
    while (ptr->next != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    create(arr, 5);
    return 0;
}