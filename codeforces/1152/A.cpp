#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll N,M;
    cin>>N>>M;
    vector<ll>n(N);
    vector<ll>m(M);
    ll cntNe=0,cntNo=0,cntMe=0,cntMo=0;
    for(auto &e:n){
        cin>>e;
        if(e%2==0)
            cntNe++;
        else
            cntNo++;
    }
    for(auto &e:m){
        cin>>e;
        if(e%2==0)
            cntMe++;
        else
            cntMo++;
    }
    
    cout<<(min(cntNe,cntMo)+min(cntNo,cntMe))<<endl;
}