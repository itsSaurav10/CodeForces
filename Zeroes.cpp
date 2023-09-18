#include<bits/stdc++.h>
using namespace std;
int main(){
	int num, width;
	
	cout<<"Enter number "<<endl;
	cin>>num;
	
	cout<<"Enter width: "<<endl;
	cin>>width;
	
	double rev[width];
	for (int i = 0; i < width; ++i)
	    rev[i] = 0;
	
	double cnt = width - 1;
	int reverse = 0;
	double reminder;
	while(num != 0)
	{
	    reminder = num % 10;
	//    rev = rev * 10 + reminder;
	    rev[cnt] = remainder;
	    --cnt;
	    num = num / 10;
	}
	
	cout << "Reverse: ";
	for (int i = 0; i < width; ++i)
	    cout << rev[i];
	cout << endl;
}
