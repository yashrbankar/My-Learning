#include <stdio.h>
#include<iostream>
using namespace std;
#include <stdlib.h>
class Node
{
public:
    int data;
    struct Node *next;
} *first = NULL;
void create(int A[], int n , Node first)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node)); // first = 1011
    first.data = A[0]; // 1
    first.next = NULL; // 1504
    last = first; // last = 1011

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node)); // t= 1504 ,1212
        t->data = A[i]; // 2
        t->next = NULL; // 0
        last->next = t; // 1011.next
        last = t; // update 1504
    }
}
void Display(struct Node *p)
{
    cout<<"this is the display"<<endl;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
void RDisplay(struct Node *p)
{
    if (p != NULL)
    {
        RDisplay(p->next);
        printf("%d ", p->data);
    }
}
int main()
{
    struct Node first;
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(A, 8 , Node first);
    Display(Node first);

    return 0;
}