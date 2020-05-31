#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[5];
    for(int i=1;i<5;i++)
        cin>>a[i];
        
    string s;
    cin>>s;
    long long sum=0;

    for(int i=0;i<s.length();i++){
        int temp=s[i]-'0';
        sum+=(long long)a[temp] ;
    }

    cout<<sum;
}