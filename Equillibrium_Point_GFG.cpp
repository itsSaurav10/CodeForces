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

		/*

		long long sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }

        int s=0;

        for(int i=n-1;i>=0;i--){
            if(sum-a[i]-(2*s) == 0)
                return i+1;
            s+=a[i];
        }

        return -1;
    }


		*/

		void solve(){
			int n;
			cin >> n;
			vi arr(n);
			rep(i, 0, n){
				cin >> arr[i];
			}
			int sum_total = 0, curr_Sum = 0;
			rep(i, 0, n){
				sum_total += arr[i];
			}
			for(int i = n - 1; i >= 0; i--){
				if(sum_total - arr[i] - (2 * curr_Sum) == 0){
					cout << i + 1 << endl;
					return;
				}
				curr_Sum += arr[i];
			}
			return;
		}
};


int main() {
	Solution sol;
	//sol.test_cases();
	sol.solve();
	return 0;
}
