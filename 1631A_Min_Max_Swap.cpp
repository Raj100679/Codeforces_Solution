#include <bits/stdc++.h>
using namespace std;
#define int int64_t

void solve()
{
  int n;
  cin>>n;
  int a[n],b[n];
  int maxa=INT_MIN;
  int maxb=INT_MIN;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    cin>>b[i];
  }
 for(int i=0;i<n;i++){
   if(a[i]<b[i]){
     swap(a[i],b[i]);
   }
 }
 for(int i=0;i<n;i++){
  maxa=max(maxa,a[i]);
  maxb=max(maxb,b[i]);
 }
cout<<maxa*maxb<<endl;
}
int32_t main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--)
    solve();

  return 0;
}