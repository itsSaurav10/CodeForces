#include<iostream>
#include<bits/stdc++.h>

#define si unordered_set<int>
#define endl "\n"
#define pi pair<int, int>
#define um unordered_map<int ,int>
#define us unordered_map<string, int>
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
#define rep(i, a, n) for (int i = a; i < n; i++)
#define repe(i, a, n) for (int i = a; i <= n; i++)
#define repd(i, a, n) for(int i = n; i > a; i--)
#define reped(i, a, n) for(int i = n - 1; i >= a; i--)
#define feach(arr) for(auto it : arr)
#define inp ll n; cin >> n;
#define read(arr) rep(i, 0, n) cin >> arr[i]
#define print(arr) rep(i, 0, n) cout << arr[i] << " "
#define LIMIT 1000000

using namespace std;

class Solution {
	private:
		ll t;

	public:
		bool isPrime(ll n){
			if(n <= 1){
				return false;
			}
			for(int i = 2; i <= sqrt(n); i++){
				if(n % i == 0){
					return false;
				}
			}
			return true;
		}

		ll i, j;
		ll prime_flag[LIMIT];
		void calculate_prime_flag(){
			prime_flag[0] = prime_flag[1] = 1;
			rep(i, 2, LIMIT){
				if (prime_flag[i]==0){
					for(j=i*i;j<LIMIT;j+=i){
						prime_flag[j] = 1;
					}
				}
			}
		}

		bool isPerfectSquare(ll n){
			double temp = sqrt(n);
			if(temp == (int) temp){
				return true;
			}
			return false;
		}

		void test_cases(){
			cin >> t;
			while(t--){
				solve();
			}
		}

		void solve(){
			calculate_prime_flag();
			ll n;
			cin >> n;
			vi arr(n);
			rep(i, 0, n){
				cin >> arr[i];
			}
			rep(i, 0, n){
				if(isPrime(arr[i])){
					cout << "NO" << endl;
				}
				else if(arr[i] > 4 and arr[i] % 2 == 0){
					cout << "NO" << endl;
				}
				else if(arr[i] == 4){
					cout << "YES" << endl;
				}
				else if(isPerfectSquare(arr[i]) and prime_flag[int(sqrt(n))]==0){
					cout << "YES" << endl;
				}
				else{
					cout << "NO" << endl;
				}
			}
		}
};


int main() {
	Solution sol;
	//sol.test_cases();
	sol.solve();
	return 0;
}
