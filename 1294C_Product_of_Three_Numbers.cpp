#include <bits/stdc++.h>
using namespace std;
#define int int64_t

void solve()
{
  int n;
  cin >> n;
  vector<int> v;

  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      if (n / i == i)
      {
        if (find(v.begin(), v.end(), i) == v.end())
        {
          v.push_back(i);
        }
      }
      else
      {
        if (find(v.begin(), v.end(), i) == v.end())
        {
          v.push_back(i);
        }
        if (find(v.begin(), v.end(), n / i) == v.end())
        {
          v.push_back(n / i);
        }
      }
    }
  }
  bool flag = true;
  sort(v.begin(), v.end());
  for (int i = 0; i + 2 < v.size(); i++)
  {
    for (int j = i + 1; j + 1 < v.size(); j++)
    {
      for (int k = i + 2; k < v.size(); k++)
      {
        if (v[i] * v[j] * v[k] == n)
        {
          cout << "YES" << endl;
          cout << v[i] << " " << v[j] << " " << v[k] << endl;
          flag = false;
          return;
        }
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