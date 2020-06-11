#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int sum=0;
    sum=accumulate(a,a+n,sum);

    if(sum>0) cout<<"HARD";
    else cout<<"EASY";
}