#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll tt;
    cin>>tt;
    while(tt--){
        ll p,q;
        cin>>p>>q;
        if(p==q && p==0){
          
          cout<<0<<endl;
      }else if(p==q && p!=0){
          
          cout<<1<<endl;
          
      }else if( (p+q)%2==0 ){
          
          cout<<2<<endl;
          
      }else{
          
          cout<<-1<<endl;
          
      }
    }
}