#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,n,m;
        cin>>x>>n>>m;
        
        while(x>40 && n>0){
            x=floor(x/2)+10;
            n--;
        }
        while(n>0 && x>20){
             x=floor(x/2)+10;
             n--;
         }
        
        x-=(m*10);
        
        
        
        
        if(x>0) cout<<"NO\n";
        else cout<<"YES\n";
    }
}