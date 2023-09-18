#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout << "Hello\n";
	if(argc != 1){
		cout << "You entered " << argc<< " arguments\n";
	}
	for(int i = 0; i < argc; i++){
		cout << argv[i] << "\n";
	}
	return 0;
}
