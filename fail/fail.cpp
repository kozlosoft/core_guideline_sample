#include <iostream>

using namespace std;

void increment(int* p, const int n)
{
  for (int i = 0; i < n; i++)
  {
    p[i]++;
  }
}

int main()
{
  const int n = 10;
  int a[n] = {};
  increment(a, n);

  cout << "hello" << endl;

  for (auto&& x : a) cout << x << endl;

  cout << "bye" << endl;

  return 0;
}
