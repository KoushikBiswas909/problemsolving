#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

long long int Prime(long long int n){
    for(long long int i=2;i*i<=n;i++){
        if(n%i==0)
            return i;
    }
    return n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin>>n;
    ll cnt=0;

    if(n%2 !=0){
        n=n-Prime(n);
        cnt++;
    }

    cout<<cnt+(n/2)<<endl;

}