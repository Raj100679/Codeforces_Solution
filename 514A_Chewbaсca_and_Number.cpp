#include <bits/stdc++.h>
using namespace std;
#define int int64_t

void solve()
{
  int n;
  cin >> n;
  vector<int> ans;
  int sum=0;
  while (n != 0)
  {
    ans.push_back(n % 10);
    n = n / 10;
  }
  for (int i = 0; i < ans.size()-1; i++)
  {
    if(ans[i]>=5){
      ans[i]=9-ans[i];
    }
  }
  if(ans[ans.size()-1]!=9 && ans[ans.size()-1]>=5){
    ans[ans.size()-1]=9-ans[ans.size()-1];
  }
  for (int i = ans.size()-1; i >= 0; i--)
  {
    sum=sum*10+ans[i];
  }
  cout<<sum<<endl;
}
int32_t main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  // int t;
  // cin >> t;
  // while (t--)
  // {
  solve();
  // }

  return 0;
}