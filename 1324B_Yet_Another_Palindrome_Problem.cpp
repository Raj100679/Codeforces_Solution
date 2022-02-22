#include <bits/stdc++.h>
using namespace std;
#define int int64_t

void solve()
{
  int n;
  cin >> n;
  int a[n];
  map<int, int> mp;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (a[j] == a[i] && j - i > 1)
      {
        cout << "YES" << endl;
        return;
      }
    }
  }
  cout << "NO" << endl;
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