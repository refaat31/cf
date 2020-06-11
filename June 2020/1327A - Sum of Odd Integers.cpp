#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(pow(k,2)>n) cout<<"NO\n";
        else if (k%2!=n%2) cout<<"NO\n";
        else cout<<"YES\n";
    }
}