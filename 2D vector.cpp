#include<bits/stdc++.h>
using namespace std;

vector<vector<int> >fun(){
	vector<vector<int> >vec;
	int r;
	cin>>r;
	int c;
	cin>>c;
	for(int i=0;i<r;i++){
		vector<int>v;
		int temp;
		for(int j=0;j<c;j++){
			cin>> temp;
			v.push_back(temp);
		}
		vec.push_back(v);
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<vec[i][j]<<" ";
		}
	}
	return vec;
}

int main(){
	cout<<fun();
	return 0;
}
