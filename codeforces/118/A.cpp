#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    string s,s1;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y'){
            continue;

        }
        else{
            s1+='.';
            s1=s1+s[i];
        }
    }
    cout<<s1;
    
}