#include <iostream>
#include <gsl/span>

using namespace std;
using namespace gsl;

void increment(span<int> p)
{
  for (int& x : p) ++x;
}

int main()
{
  const int n = 10;
  int a[n] = {};
  increment(a);

  cout << "hello" << endl;

  for (auto&& x : a) cout << x << endl;

  cout << "bye" << endl;

  return 0;
}
