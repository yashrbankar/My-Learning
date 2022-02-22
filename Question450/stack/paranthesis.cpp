#include <bits/stdc++.h>
using namespace std;

bool paranthesis()
{
    stack<char> s;
    string str = "{{[(yash bankar]}}(";
    char ch, top;
    for (int i = 0; i < str.length(); i++)
    {
        ch = str[i];
        if (ch == '{' || ch == '[' || ch == '(')
        {
            s.push(ch);
        }
        else if(ch == '}' || ch == ']' || ch == ')')
        {
            if (!s.empty())
            {
                top = s.top();
                if ((top == '(' && ch == ')') || (top == '{' && ch == '}') || (top == '[' && ch == ']'))
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    if (s.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout<<"result :: "<< paranthesis();
}