#include<bits/stdc++.h>
using namespace std;
#define MAX 500
int multiply(int temp, int answer[], int answer_size){
	int carry=0;
	for(int i=0;i<answer_size;i++){
		int product=answer[i]*temp+carry;
		answer[i]=product%10;
		carry=product/10;
	}
	while(carry){
		answer[answer_size]=carry%10;
		carry=carry/10;
		answer_size++;
	}
	return answer_size;
}

void factorial(int n){
	int answer[MAX];
	answer[0]=1;
	int answer_size=1;
	for(int i=2;i<=n;i++){
		answer_size=multiply(i, answer, answer_size);
	}
	cout<<"Factorial is: "<<endl;
	for(int i=answer_size;i>=0;i--){
		cout<<answer[i];
	}
}

int main(){
	factorial(100);
	return 0;
}
