#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll k=10e9+7;

ll solve(ll n){
  if(n==0)
    return 1;
  else if(n%2==0){
    ll temp1=solve(n/2);
    return (temp1*temp1)%k;
  }
  else{
    ll temp2=solve(n-1);
    return (2*temp2)%k;
  }
}

int main(){
  ll n,m;
  cin>>n>>m;
  if(n>=27)
    cout<<m<<endl;
  else{
    ll val=solve(n);
    cout<<m%val<<endl;
  }
 
}