#include<bits/stdc++.h>
using namespace std;

void helper_function(long long int n){
    if(n%2==0){
        cout<<"YES"<<endl;
        for(int i=0;i<n/2;i++){
            cout<<"1, -1"<<endl;
        }
        cout<<endl;
    }
    if(n==3)
        cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        int temp=n/2;
        for(int i=0;i<temp;i++){
            cout<<1-temp<<" "<<temp<<" ";
        }
        cout<<1-temp<<endl;
    }
}


int main(){
    long long int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++){
        long long int n;
        cin>>n;
        cout<<helper_function(n)<<endl;
    }
    return 0;
}
