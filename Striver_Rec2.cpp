#include<iostream>
using namespace std;
int count=1;
void fun(int n){
	if(count==n+1)
		return;
	cout<<count<<endl;
	count++;
	fun(n);
}

int main(){
	fun(5);
	return 0;
}
