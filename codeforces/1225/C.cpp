/* CF Bitmusk 
Q. In problem C, why does n−kp has to be at least k can someone please throw some light on it?
A. Because you’re writing it as sum of k power of 2s which are all bigger than or equal to 1

*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int bits(ll n)
{
    int count = 0 ;
    while(n) n=n&(n-1),count++ ;
    return count ;
    
}

int main(){
    ll n,p;
    cin>>n>>p;

    ll arr[30];
    arr[0]=p;

    for(int i=1;i<30;i++){
        arr[i] = arr[i-1]+p;
    }
    for(int i=0;i<30;i++){
        arr[i] = n-arr[i];
    }

    for(int i=0;i<30;i++){
        int b = bits(arr[i]) ;
        if(arr[i]>=i+1 && b!=0 && b<=i+1) 
        {
            cout<<i+1<<endl ;
            return 0;
        }
    }
    cout<<-1<<endl;
}