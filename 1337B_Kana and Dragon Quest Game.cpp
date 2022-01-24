#include <bits/stdc++.h>
using namespace std;
#define int int64_t

void solve()
{
  int x, n, m;
  cin >> x >> n >> m;
  while (n != 0)
  {
    if (x <= 10 && m > 0)
    {
      x = x - 10;
      m--;
      break;
    }
    else
    {
      x = (x / 2) + 10;
      n--;
    }
  }
  while (m != 0)
  {
    x = x - 10;
    m--;
  }

  if (x > 0)
  {
    cout << "NO" << endl;
  }
  else
  {
    cout << "YES" << endl;
  }
}
int32_t main()
{
  int t;
  cin >> t;
  while (t--)
    solve();

  return 0;
}