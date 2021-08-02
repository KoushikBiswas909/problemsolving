#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   vector<int> v;
   for(int i=0;i<n;i++){
      int x;
      cin>>x;
      v.push_back(x);
   }
   int numofcombination=(1<<n);
   bool flag=0;

   for(int i=0;i<numofcombination;i++){
      int sum=0;
      for(int j=0;j<n;j++){
         if((i & (1<<j)) != 0)
            sum+=v[j];
         else
            sum-=v[j];
      }

      if((sum%360)==0){
         flag=1;
         break;
      }

   }
   if(flag==1)
      cout<<"YES"<<endl;
   else
      cout<<"NO"<<endl;
}