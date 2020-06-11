#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ll n,l;
    cin>>n>>l;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);


    
    double subtractions[n+1];
    subtractions[0]=a[0];
    for(ll i=1;i<n;i++)
        subtractions[i]=(a[i]-a[i-1])/2.0;
    subtractions[n]=(l-a[n-1])*1.0;
    sort(subtractions,subtractions+n+1,greater<int>());
    
    // for(ll i=0;i<=n;i++)
    //     cout<<subtractions[i]<<" ";
    printf("%0.10lf",subtractions[0]);
}