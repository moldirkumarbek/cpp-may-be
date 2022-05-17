#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>

using namespace std;

bool myXor (bool x, bool y)
{
  if (x+y!=0)
  cout << 1;
  else
  cout << 0;
}

int main()
{
  bool x, y;
  cin >> x >> y;
  myXor(x, y);
}
