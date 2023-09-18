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

bool check_prime(ll n){
	if(n <= 1){
		return false;
	}
	for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
	ll n, m;
	cin >> n >> m;
	ll answer = 1;
	if(n * n < m){
		cout << -1 << endl;
	}
	else if(m % n == 0){
		cout << m << endl;
	}
	else if(check_prime(m)){
		cout << m + 1 << endl;
	}
	else{
		for(int i = 2; i <= n; i++){
			ll temp = i * n;
			if(temp >= m){
				answer = temp;
				break;
			}
		}
		cout << answer << endl;
	}
	return 0;
}
