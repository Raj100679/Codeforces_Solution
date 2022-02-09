#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int gcd(int a, int b)
{
  return b == 0 ? a : gcd(b, a % b);
}

void solve()
{
  int n;
  cin >> n;
  map<string,int>mp;
  while(n--){
    string s;
    cin>>s;
    if(mp.find(s)==mp.end() ){
      mp[s]++;
      cout<<"OK"<<endl;
    }
    else{
      cout<<s<<mp[s]<<endl;
      mp[s]++;
    }
  }
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