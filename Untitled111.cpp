/* Online C++ Compiler and Editor */
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

long long maximumSum(int n, vector<int> &A) {
        // code here
        sort(A.begin(), A.end());
        long long answer = 0;
        for(int i = 0;i < n;i++){
            answer = answer + ((i + 1) * A[i]);
        }
        return answer;
    }

int main()
{
   int n;
   cin>>n;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   cout << maximumSum(n, arr);
   return 0;
}
