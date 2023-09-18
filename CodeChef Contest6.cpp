#include<bits/stdc++.h>
using namespace std;
bool helper_function(long long arr[], long long mid, long long n);
int main(){
	int testcases;
	scanf("%d", &testcases);
	while(testcases--){
		long long n;
		scanf("%lld", &n);
		long long arr[n];
		for(int i=0;i<n;i++){
			scanf("%lld", &arr[i]);
		}
		long long result=0;
		long long start=0;
		long long maxi_element=0;
		for(int i=0;i<n;i++){
			maxi_element=max(maxi_element, arr[i]);
		}
		long long end=maxi_element;
		long long answer=maxi_element;
		while(start<=end){
			int mid=(start+(end-start))/2;
			if(helper_function(arr, mid, n)){
				end=mid-1;
				answer=mid;
			}
			else{
				start=mid+1;
			}
		}
		printf("%lld\n", answer);
	}
	return 0;
}

bool helper_function(long long arr[], long long mid, long long n){
	for(int i=n-1;i>0;i--){
        if(arr[i]>mid){
            arr[i-1]=arr[i-1]+arr[i]-mid;
        }
    }
    if(arr[0]>mid){
        return false;
    }
    else{
        return true;
    }
}
