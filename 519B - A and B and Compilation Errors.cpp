//519B - A and B and Compilation Errors
#include<bits/stdc++.h>
using namespace std;
int corrected(int a[],int b[],int n);
int main(){
    int n;
    cin>>n;
    int i;
    int a[n],b[n],c[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    
    b[0]=0;
    for(i=1;i<n;i++)
        cin>>b[i];

    c[0]=0;
    c[1]=0;
    for(i=2;i<n;i++)
        cin>>c[i];
    
    sort(a,a+n,greater<int>());
    sort(b,b+n,greater<int>());
    sort(c,c+n,greater<int>());

    int first_error=corrected(a,b,n);
    int second_error=corrected(b,c,n);

    cout<<first_error<<endl;
    cout<<second_error<<endl;
}
int corrected(int a[],int b[],int n){
    int correction=0;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            correction=a[i];
            break;
        }
    }
    return correction;
}