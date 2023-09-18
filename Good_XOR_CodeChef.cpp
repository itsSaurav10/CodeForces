#include<iostream>
#include<bits/stdc++.h>

#define si set<int>
#define endl "\n"
#define pi pair<int, int>
#define um unordered_map<int ,int>
#define vvi vector<vector<int> >
#define vi vector<int>
#define pb push_back
#define eb emplace_back
#define ll long long
#define lli long long int
#define x sort(arr.begin(), arr.end())
#define rev reverse(arr.begin(), arr.end())
#define mp make_pair
#define v_pair vector<pair<int, int>>
#define rep(n) for (int i=0;i<n;i++)
#define irep(n) for (int j=0;j<n;j++)

using namespace std;

void helper_function(){
	ll n;
	cin >> n;
	vi arr(n);
	ll zero = 0, one = 0;
	rep(n){
		cin >> arr[i];
		if(arr[i] == 0) zero++;
		else one++;	
	}
	int diff = abs(one - zero);
	if(diff == 0){
		cout << 0 << endl;
	}
	if(n % 2 or zero == n){
		cout<< -1 <<endl;
	}
	else if(n == 2 and one == 2){
		cout<< -1 << endl;
	}
	else if(zero == 0){
		cout << 0 << endl;
	}
	else if(zero > one){
		cout << diff / 2 << endl;
	}
	else if(zero == 2){
		cout << 2 << endl;
	}
	else if(zero % 4){
		cout << zero / 4 + 2 << endl;
	}
	else{
		cout << zero / 4 << endl;
	}
}

int main() {
	ll t;
	cin >> t;
	while(t--){
		helper_function();
	}
	return 0;
}
