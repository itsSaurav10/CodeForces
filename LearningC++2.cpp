#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cout << "Enter the size of array: " << endl;
	cin >> n;
	vector<int> arr(n);
	cout << "Enter the elements of array: " << endl;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	int val;
	cout << "Enter value to be found: " << endl;
	cin >> val;
	int lb = lower_bound(arr.begin(), arr.end(), val) - arr.begin();
	int ub = upper_bound(arr.begin(), arr.end(), val) - arr.begin();
	cout << "Lower_Bound_Index is : " << lb << endl;
	cout << "Upper_Bound_Index is : " << ub << endl;
	return 0;
}
