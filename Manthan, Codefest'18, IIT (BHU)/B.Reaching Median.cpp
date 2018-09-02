#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,s;
 cin>>n>>s;
 vector<int> a;
 for(int i=0;i<n;i++){
     int temp;
     cin>>temp;
     a.push_back(temp);
 }
 sort(a.begin(),a.end());
 if(a[n/2]<s){
     long long int ans=0;
     for(int i=n/2;i<n;i++){
         if(a[i]<s)ans+=abs(a[i]-s);
         else break;
     }
      cout<<ans<<endl;
     
 }
 else if(a[n/2]>s){
     long long int ans=0;
     for(int i=n/2;i>=0;i--){
         if(a[i]>s)ans+=abs(a[i]-s);
         else break;
     }
      cout<<ans<<endl;
 }
 else{
     cout<<0<<endl;
     
 }
 
}