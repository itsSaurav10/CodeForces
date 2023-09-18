#include<iostream>
#include<bits/stdc++.h>
#define vi vector<int>
#define pb push_back
// #define ll long long
// #define lli long long int
// #define x (arr.begin(), arr.end())
// #define mp make_pair
// #define v_pair vector<pair<int, int>>


using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vi count;
	    for(int i=2;i<=n;i++){
	        if(n%i==0){
	            count.pb(i);
	        }
	    }
	    sort(count.begin(), count.end());
	    if(count.size()<2){
	        std::cout << -1 << std::endl;
	    }
	    else{
	        std::cout << arr[0] <<" "<< arr[1] <<" "<< (n/(arr[0]*arr[1])) << std::endl;
	    }
	}
	return 0;
}

