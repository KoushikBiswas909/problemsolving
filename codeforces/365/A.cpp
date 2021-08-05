#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
   ll n,k;
   cin>>n>>k;
   int cnt=0;
   while(n--){
      ll x;
      cin>>x;
      set<ll> s;
      while(x!=0){
         int temp=(x%10);
         if(temp<=k)
            s.insert(temp);
         x=x/10;
      }
      if(s.size()==k+1)
         cnt++;
   }
   cout<<cnt<<endl;
}