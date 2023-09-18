#include<iostream>
using namespace std;
int n;
int count;
void fun(int n){
	if(count==0)
		return;
	cout<<count<<endl;
	count--;
	fun(n);
}

int main(){
	
	cin>>n;
	count=n;
	fun(n);
	return 0;
}
