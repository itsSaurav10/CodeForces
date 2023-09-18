#include<bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n) {
	int largest = 0, secondLargest = -1;
	for (int i = 1; i < n; i++) {
		if (arr[i] > arr[largest])
			largest = i;
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] != arr[largest]) {
			if (secondLargest == -1)
				secondLargest = i;
			else if (arr[i] > arr[secondLargest])
				secondLargest = i;
		}
	}
	return secondLargest;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int maximum=*max_element(a, a+n);
		int sl=secondLargest(a, n);
		vector<int>answer;
		for(int i=0;i<n;i++){
			if(a[i]==maximum){
				answer.push_back(a[maximum]-sl);
			}
			else{
				answer.push_back(a[i]-maximum);
			}
		}
		for(int i=0;i<answer.size();i++){
			cout<<answer[i]<<" ";
		}
		cout << endl;
	}
	return 0;
}
