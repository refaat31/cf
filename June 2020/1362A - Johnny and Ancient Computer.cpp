#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int t;
    ll a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        
        if(a==b) cout<<"0\n";
        else{
            ll ans=0;
            if(a<b) swap(a,b);
            while(a>b){
                if(a%8==0 && a/8>=b){
                    a/=8;
                    ans++;
                }
                else if(a%4==0 && a/4>=b){ 
                    a/=4;
                    ans++;
                }
                else if(a%2==0 && a/2>=b){
                    a/=2;
                    ans++;
                }      
                else break;                      
            }

            if(a!=b) cout<<"-1\n";
            else cout<<ans<<"\n";
        }
    }
}