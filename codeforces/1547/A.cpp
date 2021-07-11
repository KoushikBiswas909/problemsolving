#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    while(n--){
        int ax,ay,bx,by,fx,fy;
        cin>>ax>>ay>>bx>>by>>fx>>fy;
        int ans=0;
        ans=abs(ax-bx)+abs(ay-by);
        if(fx==ax && fx==bx){
            if((fy<max(ay,by)) && (fy>min(ay,by))){
                ans=ans+2;
            }
        } 
        else if(fy==ay && fy==by){
            if((fx<max(ax,bx)) && (fx>min(ax,bx))){
                ans=ans+2;
            }
        }
        cout << ans <<endl;
    }
}