#include <iostream>
using namespace std;
// Stack 
class Stack
{
    int size; // due to array has fixed size
    int top;  // stack integer pointer
    int *s;   // DMA for creating the new pointer

public:

    Stack();
    void Display();
    void push(int);
    int pop();
    int peak(int);
    int isempty();
    int isfull();
    int stacktop();

};

int main()
{
    Stack st;
    // st.Display();
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // st.push(60);// over flow stack
    st.Display();
    cout << "deleted :: " << st.pop() << endl;
    st.Display();
    // st.pop();
    /*
    st.pop(); // under flow
    st.pop(); // under flow
    */
    // st.Display();
    cout << "element is " << st.peak(0) << endl;
    cout << "element is " << st.peak(2) << endl;
    cout << "element is " << st.peak(4) << endl;
    return 0;
}

Stack::Stack()
{
    cout << "enter the size ::";
    cin >> size;
    top = -1; // top is intailed 
    s = new int[size];
}

void Stack::Display()
{
    for (int i = top; i >= 0; i--)
    {
        cout << s[i] << " ";
    }
    cout << endl;
}

void Stack::push(int x)
{
    if (top == size - 1)
    {
        cout << "Stack is overflow" << endl;
    }
    else
    {
        top++;
        s[top] = x;
    }
}

int Stack::pop()
{
    int x = -1;
    if (top == -1)
    {
        cout << "stack underflow" << endl;
    }
    else
    {
        x = s[top];
        top--;
    }
    return x;
}

int Stack::peak(int pos)
{
    int x = -1;
    if (top - pos + 1 < 0)
    {
        cout << "invalid index";
    }
    else
    {
        x = s[top - pos + 1];
    }
    return x;
}

int Stack::isempty()
{
    if (top == -1)
    {
        return 1;
    }
    return 0;
}
int Stack::isfull()
{
    if (top == size - 1)
    {
        return 1;
    }
    return 0;
}

int Stack::stacktop()
{
    if (!isempty())
    {
        return s[top];
    }
    return -1;
}