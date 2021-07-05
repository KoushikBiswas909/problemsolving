#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll n;
	cin >> n;
	ll arr[n][3];
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cin >> arr[i][j];
		}
	}
	ll a=0,b=0,c=0;
	for(int i=0;i<n;i++){
		a+=arr[i][0];
	}
	for(int i=0;i<n;i++){
		b+=arr[i][1];
	}
	for(int i=0;i<n;i++){
		c+=arr[i][2];
	}
	if(a==0 && b==0 && c==0)
		cout << "YES";
	else
		cout << "NO";
}  