#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ll n,k;
    cin>>n>>k;
    ll temp;
    while(k--){
        temp=n%10;
        if(temp==0) n/=10;
        else n-=1;
    }
    cout<<n<<"\n";
}