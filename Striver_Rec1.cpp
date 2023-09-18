#include<iostream>
using namespace std;
int count=0;
void fun(string name){
	if(count==5)
		return;
	cout<<name<<endl;
	count++;
	fun(name);
}

int main(){
	fun("Sherlock Holmes");
	return 0;
}
