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
		char ch=s.back();
		//cout<<s.back()<<endl;
		string str="abcdefghijklmnopqrstuvwxyz";
		for(int i=0;i<str.length();i++){
			if(str[i]==ch){
				answer=i;
				break;
			}
		}
		cout<<answer+1<<"\n";
	}
	return 0;
}
