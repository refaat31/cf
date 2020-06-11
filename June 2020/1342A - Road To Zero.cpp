#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll x,y,a,b;
        cin>>x>>y;
        cin>>a>>b;
        ll cost=0;

        if(x>y) swap(x,y);
      
        if((2*a)<b)
            cost+=(x+y)*a;
        
        else{
            cost+=(x*b);
            cost+=(y-x)*a;
        }
        
        cout<<cost<<"\n";
       
    }
}