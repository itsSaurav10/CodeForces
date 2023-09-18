#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int answer=0;
		sort(s.begin(), s.end());
		cout<<s.back();
		string str="abcdefghijklmnopqrstuvwxyz";
		for(int i=0;i<n;i++){
			if(str[i]==ch){
				answer=i;
			}
		}
		cout<<answer;
	}
	return 0;
}
