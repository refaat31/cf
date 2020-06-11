#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    int angleInterior;
    cin>>t;
    while(t--){
        cin>>angleInterior;
        int angleExterior=180-angleInterior;
        if(360%angleExterior==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
}