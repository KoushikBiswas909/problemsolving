#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll k,r,c;
		cin>>k;
		ll srt=ceil(sqrt(k));
		ll d= (srt*srt)-k; //distance between last and given element
		if(d<srt){
			r=srt;
			c=d+1;
		}
		else{
			c=srt;
			ll temp=((srt-1)*(srt-1)+1);
			r=(k-temp)+1;
		}
		cout<<r<<" "<<c<<endl;
	}

}	