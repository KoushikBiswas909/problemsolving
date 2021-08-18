#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        int j=0,res=0,a=1;
        while(j<k){
            if(a%3!=0 && a%10!=3){
                res=a;
                j++;
            }
            a++;
        }
        cout<<res<<endl;
    }
    
}