#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,t;
	cin >> n >> t;
	vector<char> q;
	for(int i=0;i<n;i++){
		char temp;
	    cin >>temp;
	    q.push_back(temp);

	}
	while(t--){
		for(int i=0;i<q.size();i++){
			if(q[i]=='G' && q[i-1]=='B'){
				swap(q[i-1],q[i]);
				i++;
			}
		}
	}
	for(int i=0;i<q.size();i++)
		cout <<q.at(i);
}