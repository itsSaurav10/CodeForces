#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        bool flag;
        
        if(n==1){
        	cout<<"YES"<<endl;
        	return 0;
		}
        
        for(int i=1;i<n;i++){
            if(a[i-1]<a[i]){
            	flag=true;
            }
            else{
                flag=false;
                break;
            }
        }
        if(flag==true)
        	std::cout << "Yes" << std::endl;
        else if(flag==false)
        	std::cout << "No" << std::endl;
    }
    return 0;
}
