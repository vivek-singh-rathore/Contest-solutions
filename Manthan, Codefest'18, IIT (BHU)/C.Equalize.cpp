#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
string a,b;
cin>>a>>b;
int count=0;
for(int i=0;i<a.length()-1;i++){
    if(a[i]!=b[i]){
        if(a[i+1]==b[i] && a[i]==b[i+1]){
            a[i+1]=a[i];
            a[i]=b[i];
            count++;
        }
        else count++;
    }
   
}
if(a[n-1]!=b[n-1])count++;
cout<<count;
}