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

void solve(){
    int n;
    cin >> n;

    if(n%2==0) cout << -1 << endl;
    else{
     int cnt = 40;

     vector<int> moves;
     while(n!=1 && cnt--){
      if(((n+1)/2)%2){
       n = (n+1)/2;
       moves.push_back(1);
      }
      else{
       n = (n-1)/2;
       moves.push_back(2);
      }
     }

     if(cnt<0) cout << -1 << endl;
     else if(n==1){
      cout << moves.size() << endl;
      reverse(moves.begin(), moves.end());
      for(auto i: moves) cout << i << " ";
       cout << endl;
     }
     else{
      cout << -1 << endl;
     }
    }
}  

int main() {
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}

