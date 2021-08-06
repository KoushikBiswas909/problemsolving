#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(b!=1){
            cout<<"YES"<<endl;
            cout<<a<<' '<<a*b<<' '<<a*(b+1)<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}