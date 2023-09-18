#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <numeric>

int main(){
	std::vector<int> vec(10);
	// iota is used to populate an array(vector precisisely)
	std::iota(std::begin(vec), std::end(vec), 1);
	for(int i = 0; i < vec.size(); i++){
		if(vec[i] % 2 == 0){
			std::cout << vec[i] << " is an even number." << std::endl;
		}
	}
	return 0;
}
