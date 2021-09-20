#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
    int n;
    cin>>n;
    for(int k=1;k<=n;k++){
        int x=n,y=n;
        while(x>0){
            for(int i=1;i<=k&&x>0;i++){
                cout<<"(";
                x--;
            }
            cout<<")";
            y--;
        }
        for(int j=1;j<=y;j++){
            cout<<")";
        }
        cout<<endl;
    }
    }
}