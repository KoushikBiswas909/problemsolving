#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll num;
        cin>>num;
        ll fa=0;
        if(num%3==1){
            fa=((num/3)+1);
        }
        else
            fa=(num/3);

        ll sa= ((num-fa)/2);

        cout<<fa<<" "<<sa<<endl;
    }
}