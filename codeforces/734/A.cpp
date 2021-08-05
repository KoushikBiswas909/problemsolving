#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    int cnta=0,cntb=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A')
            cnta++;
        else
            cntb++;
    }
    if(cnta>cntb)
        cout<<"Anton"<<endl;
    else if(cnta<cntb)
        cout<<"Danik";
    else
        cout<<"Friendship";
}