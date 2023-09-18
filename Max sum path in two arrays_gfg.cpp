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

		ll solve(){
			ll m, n;
			cin >> m >> n;
			vi arr1(m), arr2(n);
			rep(i, 0, m){
				cin >> arr1[i];
			}
			rep(i, 0, n){
				cin >> arr2[i];
			}
			int i = 0, j = 0;
			ll sum1 = 0, sum2 = 0, answer = 0;
			while(i < m and j < n){
				if(arr1[i] < arr2[j]){
					sum1 += arr1[i];
					i++;
				}
				else if(arr1[i] > arr2[j]){
					sum2 += arr2[j];
					j++;
				}
				else{
					answer += max(sum1, sum2);
					sum1 = 0, sum2 = 0;
					while(arr1[i] == arr2[j] and i < m and j < n){
						answer += arr1[i];
						i++;
						j++;
					}
				}
			}
			while(i < m){
				sum1 += arr1[i];
				i++;
			}
			while(j < n){
				sum2 += arr2[j];
				j++;
			}
			answer += max(sum1, sum2);
			return answer;
		}
};


int main() {
	Solution sol;
	//sol.test_cases();
	cout << sol.solve();
	return 0;
}
