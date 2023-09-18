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
	int temp=0;
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			cin>>temp;
			if(temp==1){
				cout<<abs(i-3)+abs(j-3)<<endl;
			}
		}
	}
	return 0;
}

