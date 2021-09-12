#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt;
    cin>>tt;
    while(tt--){
      ll n,s;
      cin>>n>>s;
      ll ans=s/((n/2)+1);
      cout<<ans<<endl;
    }
}