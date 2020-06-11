//used reverse prefix sum & sets
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n+1];
    for(int i=1;i<n+1;i++)
        cin>>a[i];
    set <int> s;
    int a_reversePS[n+1]={};

    a_reversePS[n]=1;
    s.insert(a[n]);
    for(int i=n-1;i>0;i--){
        if(s.find(a[i])==s.end()) {
            s.insert(a[i]);
            a_reversePS[i]=a_reversePS[i+1]+1;
        }
        else a_reversePS[i]=a_reversePS[i+1];
    }
    
    for(int i=0;i<m;i++){
        int l;
        cin>>l;
        cout<<a_reversePS[l]<<"\n";
        
    }
}