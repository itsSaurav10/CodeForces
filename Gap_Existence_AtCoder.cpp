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
//#define x sort(arr.begin(), arr.end())
#define rev reverse(arr.begin(), arr.end())
#define mp make_pair
#define v_pair vector<pair<int, int>>
#define rep(n) for (int i=0;i<n;i++)
#define irep(n) for (int j=0;j<n;j++)

using namespace std;

bool findPair(vector<int>& A, int X) {
    set<int> s;
    for (int i = 0; i < A.size(); i++) {
        if (s.find(A[i] - X) != s.end() or s.find(A[i] + X) != s.end()) {
            return true;
        }
        s.insert(A[i]);
    }
    return false;
}

int main() {
	ll n, x;
	cin >> n >> x;
	vi arr(n);
	rep(n){
		cin >> arr[i];
	}
	bool flag = findPair(arr, x);
	if(flag){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}
	return 0;
}

