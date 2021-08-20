#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        ll temp=2*(abs(a-b));
        if(temp<c || temp<a || temp<b){
            
            cout<<-1<<endl;
        }
        else{
            
            ll d=c+(temp/2);
            while(d>temp){
                d=d-temp;
            }
            cout<<d<<endl;
        }
    }
    
}