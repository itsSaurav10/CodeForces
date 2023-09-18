#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int x_cor=0,y_cor=0;
		bool flag=false;
		for(int i=0;i<n;i++){
			if(s[i]=='L'){
				x_cor--;
			}
			else if(s[i]=='R'){
				x_cor++;
			}
			else if(s[i]=='U'){
				y_cor++;
			}
			else{
				y_cor--;
			}
			if(x_cor==1 and y_cor==1){
				flag=true;
				break;
			}
		}
		if(flag){
			cout<<"Yes"<<"\n";
		}
		else{
			cout<<"No"<<"\n";
		}
	}
	return 0;
}
