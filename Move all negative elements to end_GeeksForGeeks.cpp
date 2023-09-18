#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        vector<int> positive, negative;
        for(int i = 0; i < n; i++){
            if(arr[i] > 0){
                positive.push_back(arr[i]);
            }
            else{
                negative.push_back(arr[i]);
            }
        }
        vector<int> answer;
        for(int i = 0; i < positive.size(); i++){
            answer.push_back(positive[i]);
        }
        for(int i = 0; i < negative.size(); i++){
            answer.push_back(negative[i]);
        }
        for(int i = 0; i < n; i++){
            arr[i] = answer[i];
        }
    }
};

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}