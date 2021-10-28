#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(auto &e:v){
        cin>>e;
    }
    ll temp=v[k-1];
    ll cnt=0;
    for(auto it:v){
        if(it>=temp and it!=0)
            cnt++;

    }
    cout<<cnt<<endl;

}