#include <bits/stdc++.h>
using namespace std;
#define int int64_t

void solve()
{
  int n;
  cin >> n;
  if(n==1){
    cout<<1<<endl;
    return;
  }
  if(n==2){
    cout<<-1<<endl;
    return;
  }
  int st=1;
  int sst;
  if(n*n%2==0){
    sst=n*n/2+1;
  }
  else{
    sst=(n*n/2)+2;
  }
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if((i+j)%2==0){
        cout<<st<<" ";
        st++;
      }
      else{
        cout<<sst<<" ";
        sst++;
      }
    }
    cout<<endl;
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
    // {
    solve();
  // }
  return 0;
}