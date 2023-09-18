#include<iostream>
#include<bits/stdc++.h>

#define si set<int>
#define endl "\n"
#define pi pair<int, int>
#define um map<int ,int>
#define vvi vector<vector<int> >
#define vi vector<int>
#define pb push_back
#define eb emplace_back
#define ll long long
#define lli long long int
#define vl vector<ll>
#define all(arr) arr.begin(), arr.end()
#define mp make_pair
#define v_pair vector<pair<int, int>>
#define rep(i, a, n) for (int i = a;i < n;i++)
#define repe(i, a, n) for (int i = a;i <= n;i++)

using namespace std;

class Solution{
	private:
		ll t;

	public:
		void test_cases(){
			cin >> t;
			while(t--){
				solve();
			}
		}
		
		void solve(){
			if(solver()){
				cout << "Yes" << endl;
			}
			else{
				cout << "No" << endl;
			}
		}

		bool solver(){
			string S;
			cin >> S;
			vi k_indices, q_indices, r_indices, b_indices, n_indices;
			
			for (int i = 0; i < S.size(); i++) {
		        if (S[i] == 'K') {
		            k_indices.push_back(i);
		        } 
				else if (S[i] == 'Q') {
		            q_indices.push_back(i);
		        } 
				else if (S[i] == 'R') {
		            r_indices.push_back(i);
		        } 
				else if (S[i] == 'B') {
		            b_indices.push_back(i);
		        } 
				else if (S[i] == 'N') {
		            n_indices.push_back(i);
		        }
		    }
		    rep(i, 0, b_indices.size()){
		        rep(j, i + 1, b_indices.size()){
		            if ((b_indices[i] + b_indices[j]) % 2 == 0) {
		                return false;
		            }
		        }
		    }
		    if (r_indices.size() != 2 || k_indices.size() != 1) {
			    return false;
			}
		    int k_index = k_indices[0];
		    int r_index_1 = r_indices[0];
		    int r_index_2 = r_indices[1];
		    if (!(r_index_1 < k_index && k_index < r_index_2)) {
		        return false;
		    }
		    return true;
		}
};


int main() {
	Solution sol;
	//sol.test_cases();
	sol.solve();
	return 0;
}
