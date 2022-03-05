#include <bits/stdc++.h>
using namespace std;
#define int int64_t

void solve()
{
  int n, m;
  cin >> n >> m;
  char a[n][m];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if ((i + j) % 2 == 0)
      {
        a[i][j] = 'B';
      }
      else
      {
        a[i][j] = 'W';
      }
    }
  }
  a[n - 1][m - 1] = 'B';

  if (n % 2 == 0 && m%2 == 0)
  {
    a[0][m - 1] = 'B';
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << a[i][j];
    }
    cout << endl;
  }
}
int32_t main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;

  while (t--)
  {
    solve();
  }

  return 0;
}