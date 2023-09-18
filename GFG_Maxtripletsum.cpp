#include<iostream>
#include<bits/stdc++.h>

#define si set<int>
#define endl "\n"
#define pi pair<int, int>
#define um unordered_map<int ,int>
#define vvi vector<vector<int>>
#define vi vector<int>
#define pb push_back
#define eb emplace_back
#define ll long long
#define lli long long int
#define x sort(arr.begin(), arr.end())
#define rev reverse(arr.begin(), arr.end())
#define mp make_pair
#define v_pair vector<pair<int, int>>


using namespace std;

long long maxTripletProduct(long long arr[], int n){
	ll mini=INT_MAX;
	ll s_mini=INT_MAX;
	ll maxi=INT_MIN;
	ll s_maxi=INT_MIN;
	ll t_maxi=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]>maxi){
			t_maxi=s_maxi;
			s_maxi=maxi;
			maxi=arr[i];
		}
		else if(arr[i]>s_maxi){
			t_maxi=s_maxi;
			s_maxi=arr[i];
		}
		else if(arr[i]>t_maxi){
			t_maxi=arr[i];
		}
		if(arr[i]<mini){
			s_mini=mini;
			mini=arr[i];
		}
		else if(arr[i]<s_mini){
			s_mini=arr[i];
		}
	}
	
	cout<<mini<<" "<<maxi<<" ";
	
//	for(int i=0;i<n;i++){
//		if(arr[i]<=maxi and arr[i]>s_maxi){
//			s_maxi=arr[i];
//		}
//		if(arr[i]<s_mini and arr[i]>mini){
//			s_mini=arr[i];
//		}
//	}
//	
	cout<<s_mini<<" "<<s_maxi<<" ";
//	
//	for(int i=0;i<n;i++){
//        if (arr[i]>t_maxi and arr[i]<s_maxi){
//            t_maxi=arr[i];
//        }
//    }
//    
    cout<<t_maxi<<" ";
    
	return max(mini*s_mini*maxi, maxi*s_maxi*t_maxi);
}

int main() {
	ll t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ll arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		cout<<maxTripletProduct(arr, n)<<endl;
	}
	return 0;
}

