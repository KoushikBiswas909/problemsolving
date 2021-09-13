// sol link https://www.youtube.com/watch?v=yOIYD05Dc-4&t=774s&ab_channel=CodewithAmbarsariya
/*
Logic: If we get 0 & 1 oviously it will +2
If we get 0 & 0 oviously it will +1
If we get 1 & 1 it will contribute +0, but we can increase it by
checking 0 & 0 before and after 1 & 1.
Simply add +1 if 0 & 0 got before 1 & 1 and
add +1 if 0 & 0 got after 1 & 1 with making them other string to handel 
count same 0 & 0 twice.

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        int sum=0;
        for(int i=0;i<n;i++){
            if((a[i]=='0' and b[i]=='1') || (a[i]=='1' and b[i]=='0')){
                sum=sum+2;
            }
            else if(a[i]=='0' and b[i]=='0'){
                sum=sum+1;
                if(i-1>=0 and a[i-1]=='1' and b[i-1]=='1'){
                    sum=sum+1;
                }
                else if(i+1<=n and a[i+1]=='1' and b[i+1]=='1'){
                    sum=sum+1;
                    a[i+1]='s';// used 1 1 col initilized with other than 0 1 string
                    b[i+1]='s';
                }
            }
        }
        cout<<sum<<endl;
    }
}