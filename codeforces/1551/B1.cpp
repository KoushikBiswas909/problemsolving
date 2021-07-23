#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int ans;
		if(s.size()<2)
			ans=0;
		else{
			int value=0;
			unordered_map<char,int> mp;
			for(int i=0;i<s.size();i++){
				mp[s[i]]++;
			}
			for(auto x: mp){
				if(x.second>2){
					value=value+2;
				}
				else{
					value=value+x.second;
				}
			}

			ans=value/2;
		}
		cout<<ans<<endl;
	}
}