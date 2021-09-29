#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto &e:v){
        cin>>e;
    }
    sort(v.begin(),v.end());

    // Print all even position 
    for(ll i=0;i<n;i+=2){
        cout<<v[i]<<" ";
    }

    // Print all odd position from back
    for(ll i=n-1;i>0;i--){
        if(i%2!=0)
            cout<<v[i]<<" ";
    }
    cout<<endl;

}