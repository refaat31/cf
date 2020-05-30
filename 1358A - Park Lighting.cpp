//1358 A - CF Div 2 - 26 May 2020
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        int ans=n*(m/2);
        if(m%2!=0){
            if(n%2==0) ans+=(n/2);
            else ans=ans+(n/2)+1;
        }

        cout<<ans<<"\n";

    }
}