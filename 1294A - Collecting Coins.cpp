#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int abc[3],n;
        cin>>abc[0]>>abc[1]>>abc[2]>>n;
        sort(abc,abc+3,greater<int>());

        //first make sure the three sisters have equal coins
        //and if they do not, then subtract it from Polycarp.

        int diff1=abc[0]-abc[1];
        int diff2=abc[0]-abc[2];

        n=n-diff1-diff2;

        if(n<0) cout<<"NO\n";
        else if(n==0) cout<<"YES\n";
        else{
            if(n%3==0) cout<<"YES\n";
            else cout<<"NO\n";
        }

        
    }
}