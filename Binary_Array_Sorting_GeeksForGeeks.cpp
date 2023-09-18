#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    void binSort(int A[], int N)
    {
        int left = 0, right = N - 1;
        while(left < right){
            if(A[left] == 1){
                swap(A[left], A[right]);
                right--;
            }
            else{
                left++;
            }
        }
    }
};

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    int A[N]; 
	    for(int i = 0; i  < N; i++)
	      cin>>A[i];
	    Solution obj;
	    obj.binSort(A,N);
	    
	    for(int x:A)
	    cout<<x<<" ";
	      
	    cout<<endl;
	}
	return 0;
}