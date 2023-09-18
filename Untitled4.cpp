#include<iostream>
#include<bits/stdc++.h>

#define si set<int>
#define endl "\n"
#define pi pair<int, int>
#define um unordered_map<int ,int>
#define vvi vector<vector<int> >
#define vi vector<int>
#define pb push_back
#define eb emplace_back
#define ll long long
#define lli long long int
#define x sort(arr.begin(), arr.end())
#define rev reverse(arr.begin(), arr.end())
#define mp make_pair
#define v_pair vector<pair<int, int>>
#define rep(n) for (int i=0;i<n;i++)
#define irep(n) for (int j=0;j<n;j++)

using namespace std;

signed main(){ 
  ios::sync_with_stdio(0); 
   cin.tie(0); 
   cout.tie(0); 
   cout<<fixed; 
   cout<<setprecision(10); 
   int t; 
   cin>>t; 
   while(t--){ 
     int n; 
     cin>>n; 
     int c = 1; 
     map<int,int> m; 
     for(int i = 0;i<n;i++){ 
        int s; 
        cin>>s; 
        for(int j =0;j<s;j++){ 
            int a; 
            cin>>a; 
            m[a] = c; 
        } 
        c++; 
     } 
     vector<int> v(n,0); 
     for(auto i : m){ 
        if(i.second <= n){ 
            v[i.second-1] = i.first; 
        } 
     } 
     int b =1; 
     for(int i =0;i<n;i++){ 
        if(v[i] == 0){ 
          b = 0; 
        } 
     } 
     if(b == 0){ 
        cout<<-1<<endl; 
     } 
     else{ 
     for(int i =0;i<n;i++){ 
        cout<<v[i]<<" "; 
     } 
     cout<<endl; 
     } 
   } 
return 0; 
}

