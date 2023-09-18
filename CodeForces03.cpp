#include<bits/stdc++.h>
using namespace std;

void helper_function(int n, string str){
    int start=0, end=n-1;
    int answer=n;
    while(start<=end){
        if((str[start]=='1' and str[end]=='1') or (str[start]=='0' and str[end]=='0')){
            cout<<answer<<"\n";
            return;
        }
        else if((str[start]=='1' and str[end]=='0') or (str[start]=='0' and str[end]=='1')){
            answer=answer-2;
            start++;
            end--;
        }
        else{
            cout<<answer<<"\n";
            return;
        }
    }
    cout<<answer<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        helper_function(n, str);
    }
    return 0;
}
