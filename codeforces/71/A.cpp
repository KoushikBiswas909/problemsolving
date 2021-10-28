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

    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.size()<=10)
            cout<<s<<endl;
        else{
            cout<<*s.begin();
            int k=s.size();
            cout<<k-2;
            cout<<*s.rbegin();
            cout<<endl;
        }
    
    }
}