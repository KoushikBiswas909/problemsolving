#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
//long long int flag=0;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<int> v(n);
        for (int &e : v) {
            cin >> e;
        }


        int maxPos = max_element(v.begin(), v.end()) - v.begin();
        int minPos = min_element(v.begin(), v.end()) - v.begin();

        int x=0,y=0,z=0;
        x= max(maxPos,minPos)+1;
        y= (n-1)-min(maxPos,minPos)+1;

        z= (min(maxPos,minPos)+1)+((n-1)-max(maxPos,minPos)+1);

        cout<<min({x,y,z})<<endl;
    }
    
}