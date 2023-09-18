#include <cctype>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <unordered_map>

bool checkUniqueString(std::string str) {
	// Method 1 - Naive solution
	/*
		TC: O(N)
		SC: O(N)
	*/
	if(isspace(str[0])) {
		return true;
	}
	std::unordered_map<char, int>mp;
	for(char it:str) {
		mp[it]++;
	}
	for(auto it:mp){
		if(it.second != 1) {
			return false;
		}
	}
	return true;
	
	// Method 2 - Sorting solution
	/*
		TC: O(NlogN)
		SC: O(1) 
	*/
	std::sort(str.begin(), str.end());
	int n = str.length();
	for(int i = 1; i < n; i++) {
		if(str[i - 1] == str[i]) {
			return false;
		}
	}
	return true;
	
	// Method - 3 Optimal Solution
	/*
		TC: O(N)
		SC: O(1)
	*/
	int n = str.length();
	if(n > 128){
		return false;
	}
	bool arr[128] = {false};
	for(int i = 0; i < n; i++){
		char ch = str[i];
		if(arr[ch]){
			return false;
		}
		arr[ch] = true;
	}
	return true;
	
	// Method 4 - Optimizing the space even further
	/*
		TC: O(N)
		SC: O(1)
	*/
	int count = 0, n = str.length();
	for(int i = 0; i < n; i++){
		int temp = str[i] - 'a';
		if((count & (1 << temp)) > 0){
			return false;
		}
		count |= (1 << temp);
	}
	return true;
}

int main(){
	std::string str;
	std::cin >> str;
	if(checkUniqueString(str)){
		std::cout << "The String contains all the unique characters." << std::endl;
	}
	else{
		std::cout << "The String does not contain all the unique characters." << std::endl;
	}
	return 0;
}