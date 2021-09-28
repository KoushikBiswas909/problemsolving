#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int cntA=0,cntB=0,cntC=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A')
                cntA++;
            else if(s[i]=='B')
                cntB++;
            else
                cntC++;
        }

        if((cntA+cntC)==cntB)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}