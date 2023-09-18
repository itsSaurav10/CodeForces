#include<bits/stdc++.h>
using namespace std;

void helper_function(){
    int n;
    cin>>n;
    int temp=2*n;
    vector<int>arr;
    for(int i=0;i<temp;i++){
    	int temp;
    	cin>>temp;
        arr.push_back(temp);
    }
    //sort(arr, arr+n);
    sort(arr.begin(), arr.end());
    int answer=1e9;
    for(int i=0;i<=n;i++){
        answer=min(answer, arr[n+i-1]-arr[i]);
    }
    cout<<answer<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        helper_function();
    }
    return 0;
}
