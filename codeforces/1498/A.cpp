/* A. GCD Sum  */
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

long long int gcdd(long long int n,long long int sum){
    if(sum==0)
        return n;
    else
        return gcdd(sum,n%sum);
}

long long int GCDSUM(long long int n){
    long long int sum=0,tem=n;
    while(tem!=0){
        sum+=tem%10;
        tem=tem/10;
    }

    long long int temp=gcdd(n,sum);
    return temp;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        if(GCDSUM(n)!=1){
            cout<<n<<endl;
        }
        else if(GCDSUM(n+1)!=1)
            cout<<n+1<<endl;
        else if(GCDSUM(n+2)!=1)
            cout<<n+2<<endl;
    }
}