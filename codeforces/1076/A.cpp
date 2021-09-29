#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin>>n;
    string s;
    cin>>s;

    ll pos=0;
    ll flag=-1;

    for(ll i=0;i<n-1;i++){
        if(s[i]>s[i+1]){
            pos=i;
            flag=1;
            break;

        }
    }
    if(flag==-1){
        s.pop_back();
    }
    else{
        s.erase(s.begin()+pos);
    }

    cout<<s;
}
