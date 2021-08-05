#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
   ll n,h;
   cin>>n>>h;
   ll ans=0;
   for(ll i=0;i<n;i++){
      ll x;
      cin>>x;
      if(x<=h)
         ans+=1;
      else
         ans+=2;
   }
   cout<<ans<<endl;
}