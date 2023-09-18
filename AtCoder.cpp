#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        switch(x){
            case 1:
                  int a,b;
                  cin>>a>>b;
                  arr[a]=b;
                  break;
            case 2:
                  int c;
                  std::cout << arr[c-1] << std::endl;
                  break;
        }
    }
    return 0;
}
