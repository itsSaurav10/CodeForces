// Author : Saurav Mishra
// Linear Search Algorithm

// Here we are finding an element in an array in time complexity of O(N), where N is the size of the given array!
// Time complexity : O(N)
// Space Complexity : O(1)


#include<bits/stdc++.h>
using namespace std;

class LinearSearch{
	private:
		int n, key;
		bool flag = false;
		int index = 0;
	
	public:
		void setter_function(){
			cout << "Enter the size of the array: " << endl;
			cin >> n;
			vector<int> arr(n);
			for(int i = 0;i < n;i++){
				cin >> arr[i];
			}	
			cout << "Enter the element you want to search : "<< endl;
			int key;
			cin >> key;
			linearSearch(arr, key);
		}
		
		void linearSearch(vector<int> arr, int key){
			int n = arr.size();
			for(int i = 0;i < n;i++){
				if(arr[i] == key){
					flag = true;
					index = i;
					break;
				}
			}
			if(flag == true){
				cout << "Successfully found at index " << index + 1 << endl;
			}
			else{
				cout << "UnSuccessful(Error 404, Not Found)" << endl;
			}
		}
};

int main(){
	LinearSearch ls;
	ls.setter_function();
	return 0;
}
