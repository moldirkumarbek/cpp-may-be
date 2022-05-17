#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, m, counter = 0, arr[100][100];
  cin >> n >> m;

  //Assigning values of massive
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++) {
      arr[i][j] = counter;
      counter++;
    }
  
  //Output
  for (int i = 0; i < n; i++) {
    //If mod is 0 then output is from left to rifht
    if (i % 2 == 0)
      for (int j = 0; j < m; j++)
        cout << arr[i][j] << ' ';
    //If mod is 1 then output is from left to rifht
    else
      for (int j = m - 1; j > -1; j--)
        cout << arr[i][j] << ' ';
    cout << endl;
  }
}


