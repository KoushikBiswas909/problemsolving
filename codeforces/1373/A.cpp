#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;

        if(a<c)
            cout<<1;
        else
            cout<<-1;
        cout<<" ";
        if(a*b>c)
            cout<<b;
        else
            cout<<-1;

        cout<<endl;
    }
    
}