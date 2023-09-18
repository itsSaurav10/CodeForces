#include<bits/stdc++.h>
#define pb push_back
#define p_b pop_back
using namespace std;

void display(vector<int> &answer){
	for(int i=0;i<answer.size();i++){
		cout<<answer[i]<<" ";
	}
}

void subsequence(int n, int arr[], vector<int>&answer,int index){
	if(index>=n){
		display(answer);
		cout<<endl;
		return;
	}
	answer.pb(arr[index]);
	subsequence(n,arr,answer,index+1);
	answer.p_b();
	subsequence(n,arr,answer,index+1);
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	vector<int>answer;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	subsequence(n,arr,answer,0);
}
