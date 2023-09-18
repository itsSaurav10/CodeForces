#include<iostream>
#include<bits/stdc++.h>

#define si set<int>
#define endl "\n"
#define pi pair<int, int>
#define um unordered_map<int ,int>
#define vvi vector<vector<int>>
#define vi vector<int>
#define pb push_back
#define ll long long
#define lli long long int
#define x sort(arr.begin(), arr.end())
#define rev reverse(arr.begin(), arr.end())
#define mp make_pair
#define v_pair vector<pair<int, int>>


using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	int arr[t*t];
	ll sum=0;
	for(int i=0;i<t;i++){
		cin>>arr[i];
		sum=sum+arr[i];
	}
	if(sum==0){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
	return 0;
}

