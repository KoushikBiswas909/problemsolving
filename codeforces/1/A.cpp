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

    ll n,m,a;
    cin>>n>>m>>a;
    ll len=n/a;
    ll bre=m/a;
    if(n%a != 0)
        len++;
    if(m%a != 0)
        bre++;
    cout<<len*bre<<endl;
}