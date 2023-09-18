#include<bits/stdc++.h>
using namespace std;

#define vi vector<long long>
#define pb push_back
#define ll long long

int main(){
    int testcases;
    scanf("%d", &testcases);
    while(testcases--){
        helper_function();
    }
    return 0;
}

void helper_function(){
    int n;
    cin>>n;
    vi v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll sum=0;
    ll start=0, end=*max_element(v.begin(), v.end());;
    ll answer=end;
    while(start<=end){
        int middle=(start+end)/2;
        if(helper_function2(v, middle, n)){
            end=middle-1;
            answer=middle;
        }
        else{
            start=middle+1;
        }
    }
    printf("%lld\n", answer);
}

bool helper_function2(vi arr, ll middle, int n){
    for(int i=arr.size()-1;i>0;i--){
        if(arr[i]>middle){
            arr[i-1]=arr[i-1]+arr[i]-middle;
        }
    }
    if(arr[0]>middle){
        return false;
    }
    else{
        return true;
    }
}
