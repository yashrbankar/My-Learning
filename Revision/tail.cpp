#include <bits/stdc++.h>
using namespace std;

int recursion(int n)
{
  if (n > 0)
  {
    cout << n << "-> calling time"<< "\n";
    int x = recursion(n - 1);
    //  changes
    cout << n << "-> returning time"<< "\n";
    return n;
  }
  else
  {
    return 0;
  }
}

int main()
{
  recursion(5);
  return 0;
}
