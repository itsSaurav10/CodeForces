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

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
		char arr[3];
		int sum=0;
		for(int i=0;i<3;i++){
			cin>>arr[i];
		}
		for(int i=0;i<3;i++){
			if(arr[i]>='0' and arr[i]<='9'){
				sum=sum+int(arr[i]-'0');
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
