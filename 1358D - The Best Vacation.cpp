// Took help from https://www.youtube.com/watch?v=JnGwOVE16-g

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll n,x;
    cin>>n>>x;
    ll a[2*n+1]={};
    ll pre1[2*n+1]={},pre2[2*n+1]={};

    for(ll i=1;i<=n;i++){
        cin>>a[i];
        a[n+i]=a[i];
    }

    

    for(ll i=1;i<(2*n)+1;i++){
        pre1[i]=pre1[i-1] + a[i]*((a[i]+1))/2;
        pre2[i]=pre2[i-1]+a[i];
    }

    ll maxi=0;

    for(ll i=2*n;i>n;i--){
        ll low=1;
        ll high=i;
        ll ans=i;

        while(low<=high){
            ll mid=(high+low)/2;
            if(pre2[i]-pre2[mid]<x){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }

        ll temp=pre2[i]-pre2[ans-1]-x;
        ll sum=pre1[i]-pre1[ans-1];
        sum-=(temp*(temp+1))/2;
        maxi=max(sum,maxi);
    }

    cout<<maxi;
}