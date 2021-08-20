#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll> v(n);
		for(auto &e:v){
			cin>>e;
		}
		int ans=v[0];
		for(int i=1;i<n;i++){
			ans= ans & v[i];
		}
        cout<<ans<<endl;
		
	}
}