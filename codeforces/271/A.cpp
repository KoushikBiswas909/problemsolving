#include<bits/stdc++.h>
using namespace std;

int main(){
	int x;
	cin >>x;
	while(true){
		x++;
		int a=x%10;
		int b=(x/10)%10;
		int c=(x/100)%10;
		int d=(x/1000)%10;
		if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
			break;
		}
	}
	cout <<x;
}