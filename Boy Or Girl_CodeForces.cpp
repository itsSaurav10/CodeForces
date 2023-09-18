#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	set<char>st;
	for(int i=0;i<s.length();i++){
		st.insert(s[i]);
	}
	cout<<st.size()<<endl;
	if(st.size()%2!=0){
		cout<<"IGNORE HIM!"<<endl;
	}
	else{
		cout<<"CHAT WITH HER!"<<endl;
	}
	return 0;
}
