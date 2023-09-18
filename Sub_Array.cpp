#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > subarray(int arr[], int n){
    vector<vector<int> >answer;
    vector<int>temp;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                temp.push_back(arr[k]);
            }
            cout<<endl;
        }
    }
    answer.push_back(temp);
    for(int i=0;i<answer.size();i++){
    	for(int j=0;j<answer[i].size();j++){
    		cout<<answer[i][j]<<" "<<endl;
		}
		cout<<endl;
	}
    return answer;
}

int helper_fun(int arr[], int n){
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        subarray(arr,n);
    }
    return 0;
}
