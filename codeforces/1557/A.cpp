// https://www.geeksforgeeks.org/iomanip-setprecision-function-in-c-with-examples/
// https://www.geeksforgeeks.org/precision-of-floating-point-numbers-in-c-floor-ceil-trunc-round-and-setprecision/


#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
    cin >> n;
    vector <double> v;;
    double sum = 0;
    for(ll i = 0; i < n; ++i) {
        ll val;
        cin >> val;
        v.push_back(val);
        sum = sum + (double)val;
    }
 
    double mx = *max_element(v.begin(),v.end());
    // debug(mx);
    sum -= mx;
    cout <<fixed << setprecision(14) << (double)sum / (n - 1) + (double)mx << endl;
	}
}