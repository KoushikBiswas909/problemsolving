#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
using namespace std;


int main()
{
	int t , n;
	cin>>t;
	
	while(t--)
	{
		string st;
		cin>>n>>st;
		
		int T = 0 , M = 0;
		int flag = true;
		
		for(char ch : st)
		{
			if(ch == 'T') T++;
			else
			{
				M++;
				if(M > T)
				{
					flag = false;
					break;
				}
			}
		}
		
		if(2*M != T) flag = false;
		
		if(flag == false)
		{
			cout<<"NO\n";
			continue;
		}
		
		T = M = 0;
		
		for(int i = st.size()-1;i>=0;i--)
		{
			char ch = st[i];
			if(ch == 'T') T++;
			else
			{
				M++;
				if(M > T)
				{
					flag = false;
					break;
				}
			}
		}
		
		if(flag == false)
		{
			cout<<"NO\n";
			continue;
		}
		else
		cout<<"YES\n";
	}
}

