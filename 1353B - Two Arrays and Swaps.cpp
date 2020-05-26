#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n],b[n]; 
        int i;
        for(i=0;i<n;i++)
            cin>>a[i];

        for(i=0;i<n;i++)
            cin>>b[i];    
            
         //sort A in ascending order, B in descending order
        sort(a,a+n);   
        sort(b,b+n,greater<int>());

        for(int z=0;z<k;z++){
            if(a[z]>=b[z]) break;
            swap(a[z],b[z]);
        }
        
        int sum=0;
        sum=accumulate(a,a+n,sum);   
        cout<<sum<<endl;


       
    }
}