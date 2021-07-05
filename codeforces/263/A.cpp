#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	int arr[5][5];
	int val=0;
	for(int i=1;i<6;i++){
		for(int j=1;j<6;j++){
			cin >> val;
			if(val==1){
				cout << ((abs(3-i)) + (abs(3-j))) <<endl;

			}
		}
	}
}