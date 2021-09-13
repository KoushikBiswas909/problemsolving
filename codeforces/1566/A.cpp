#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n,s;
        cin>>n>>s;
        if(n==1){
            cout<<s<<endl;
            continue;
        }
        // k= no of elements right to the median, with median
        ll k=(n/2)+1;
        ll low=0,high=s/k,ans=0;
        while(low<=high){
            ll mid=(low+high)/2;
            if(mid*k<=s){
                low=mid+1;
                ans=mid;
            }
            else
                high=mid-1;
        }
        cout<<ans<<endl;
    }
}