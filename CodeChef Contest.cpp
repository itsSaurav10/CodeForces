#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	set<int>s;
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    while(b%2==0){
            s.insert(2);
            b=b/2;
        }
        for(int i=3;i<=sqrt(b);i++){
            while(b%i==0){
                s.insert(i);
                b=b/i;
            }
        }
        if(b>2){
            s.insert(b);
        }
        int count=0;
        set<int>::iterator itr;
		for (itr = s.begin();itr != s.end(); itr++){
		    cout << *itr << " ";
            if(a%itr==0){
                count++;
            }
        }
        if(count==s.size()){
            std::cout << "YES" << std::endl;
        }
        else{
            std::cout << "NO" << std::endl;
        }
	}
	return 0;
}

