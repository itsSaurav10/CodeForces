// Sliding Window 
// Maximum/Minimum Sum of all subarray of size K
// In order to find the minimum of all subarray change max in line 50 to min and ENJOY Yourself!
// start_of_window=i, end_of_window=j
// To use brute force code, change sliding_window to sliding_window_brute in line 72 and uncomment that function!


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define pb push_back
#define endl "\n"


//Brute Force:
//Time Complexity: O(n^2)
//Space Complexity: O(1)

ll sliding_window_brute(vi &arr, ll k){
	ll i=0, j=0, answer=0;
	ll n=arr.size();
	for(i=0;i+k<=n;i++){ //i<n it will check even for size<k and i+k<=n will kind of be optimised
		int sum=0;
		for(j=i;j<i+k;j++){
			sum=sum+arr[j];
		}
		if(sum>answer){
			answer=sum;
		}	
	}
	return answer;
}


//Optimised Code:
//Time Complexity: O(n)
//Space Complexity: O(1)

ll sliding_window(vi &arr, ll k){
	ll i=0, j=0, sum=0, answer=0;
	ll n=arr.size();
	while(j<n){
		sum=sum+arr[j];
		if(j-i+1<k){
			j++;
		}
		else if(j-i+1==k){
			answer=max(answer, sum);
			sum=sum-arr[i];
			i++;
			j++;
		}
	}
	return answer;
}

int main(){
	ll n;
	cout<<"Enter the size of array: "<<endl;
	cin>>n;
	vi arr(n);
	cout<<"Enter the elements of the array: "<<endl;
	cout<<"Keep on entering until the size, please!"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	ll k;
	cout<<"Enter the window size: "<<endl;
	cin>>k;
	cout<<"The maximum sum of window size "<<k<<" is "<< sliding_window(arr, k)<<endl;
	return 0;
}
