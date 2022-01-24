#include <bits/stdc++.h>
using namespace std;
#define int int64_t

void solve()
{
 string s;
 cin>>s;
 int onec=0,zeroc=0;
 for(int i=0;i<s.length();i++){
   if(s[i]=='1'){
     onec++;
   }
   else{
     zeroc++;
   }
 }
 
 int mini=min(onec,zeroc);
 if(mini&1){
   cout<<"DA"<<endl;
 }
 else{
   cout<<"NET"<<endl;
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
