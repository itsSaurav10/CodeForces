//#include<iostream>
//#include<bits/stdc++.h>
//
//#define si set<int>
//#define endl "\n"
//#define pi pair<int, int>
//#define um unordered_map<int ,int>
//#define vvi vector<vector<int> >
//#define vi vector<int>
//#define pb push_back
//#define eb emplace_back
//#define ll long long
//#define lli long long int
//#define x sort(arr.begin(), arr.end())
//#define rev reverse(arr.begin(), arr.end())
//#define mp make_pair
//#define v_pair vector<pair<int, int>>
//#define rep(n) for (int i=0;i<n;i++)
//#define irep(n) for (int j=0;j<n;j++)
//#define vs vector<string>
//
//using namespace std;
//
//int main() {
//	ll n;
//	cin >> n;
//	vs arr(n);
//	rep(n){
//		cin>>arr[i];
//	}
//	bool flag = true;
//	rep(n){
//		if(arr[i] != "and" or arr[i] != "not" or arr[i] != "that" or arr[i] != "the" or arr[i] != "you"){
//			flag = false;
//		}
//		else{
//			flag = true;
//			break;
//		}
//	}
//	if(flag){
//		cout << "Yes" << endl;
//	}
//	else{
//		cout << "No" << endl;
//	}
//	return 0;
//}

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
	set<string> banned_words = {"and", "not", "that", "the", "you"};

    bool contains_banned_word = false;
    for (int i = 0; i < n; i++) {
        string w;
        cin >> w;
        if (banned_words.count(w)) {
            contains_banned_word = true;
            break;
        }
    }

    if (contains_banned_word) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}


