#include <bits/stdc++.h>
using namespace std;
vector<long long int>v;

void fun(int a, int b){
    int i, j;
	if (a <= 2) {
		a = 2;
		if (b >= 2) {
			v.push_back(a);
			a++;
		}
	}
	if (a % 2 == 0)
        a++;
	for (i = a; i <= b; i = i + 2) {
		bool flag = 1;
		for (j = 2; j * j <= i; ++j) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}
		if (flag == 1){
		    if(i==1)
			    continue;
		    else
			    v.push_back(i);
		}
	}
// 	for(auto it:v){
// 	    cout<<it<<" ";
// 	}

		int n;
	    cin>>n;
	    //fun(1, n);
	    int num1, num2;
	    for(int i=0;i<v.size();i++){
	        if(n%v[i]==0){
	            num1=v[i];
	            n=n/v[i];
	        }
	    }
	    for(int i=0;i<v.size();i++){
	        if(n%v[i]==0){
	            num2=v[i];
	            n=n/v[i];
	        }
	    }
	    if(num1 * num1 * num2 == n){
	        cout<< num1 <<" "<<num2<<endl;
	    }
	    else if(num1 * num2 * num2 == n){
	        cout<<num2 <<" "<<num1<<endl;
	    }

}


int main()
{
	int t;
	cin>>t;
	while(t--){
	    
	}
	return 0;
}
