// Sliding Window problem
// First negative integer in every window of size k
// define TC time complexity
// define SC space complexity
// You can change the function in the main according to your choice to use either the brute force or the optimised solution!
// Thank You!

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define vi vector<ll>
#define p_b pop_back
#define endl "\n"


// Brute Force
// Time complexity: O((n-k+1)*k)
// Space complexity: O(1)
vi negative_integer(vi &arr, ll k, vi &answer){
	int n=arr.size();
	bool flag=true;
	for(int i=0;i<n-k+1;i++){
		flag=false;
		for(int j=0;j<k;j++){
			if(arr[i+j]<0){
				answer.pb(arr[i+j]);
				flag=true;
				break;
			}
		}
		if(!flag){
			answer.pb(0);
		}
	}
	return answer;
}

// A better solution
// Time complexity: O(N)
// Space complexity: O(N)

vi negative(vi &arr, ll k, vi &answer){
	int i=0, j=0;
	queue<ll>q;
	while(j<arr.size()){
		if(arr[j]<0){
			q.push(arr[j]);
		}
		if(j-i+1==k){
			if(q.size()==0){
				answer.pb(0);
				i++;
			}
			else{
				answer.pb(q.front());
				if(arr[i]<0){
					q.pop();
				}
				i++;
			}
		}
		j++;
	}
	return answer;
}

int main(){
	int n;
	cout<<"Enter the size of array: "<<endl;
	cin>>n;
	cout<<"Enter the elements of the array: "<<endl;
	cout<<"Keep on entering until you have enetred the size!"<<endl;
	vi arr(n);
	vi answer;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	ll k;
	cout<<"Enter the size of the window: "<<endl;
	cin>>k;
	cout<<"The first negative in every window of size "<<k<<" is: "<<endl;
	negative(arr ,k, answer);
	for(int i=0;i<answer.size();i++){
		cout<<answer[i]<<" ";
	}
	return 0;
}
