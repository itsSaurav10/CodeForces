#include<iostream>
#include<bits/stdc++.h>

#define si set<int>
#define endl "\n"
#define pi pair<int, int>
#define um map<int ,int>
#define vvi vector<vector<int> >
#define vi vector<int>
#define pb push_back
#define eb emplace_back
#define ll long long
#define lli long long int
#define vl vector<ll>
#define all(arr) arr.begin(), arr.end()
#define mp make_pair
#define v_pair vector<pair<int, int>>
#define rep(i, a, n) for (int i = a;i < n;i++)
#define repe(i, a, n) for (int i = a;i <= n;i++)

using namespace std;
 
int hf(string &s)
{
    if (count(s.begin(), s.end(), '0') == 0)
        return s.size() * 1LL * s.size();
    s += s;
 
    int n = s.size(), ans = 0, p = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            continue;
        int j = 0;
        while (i + j < n && s[i + j] == '1')
            j++;
        p = max(p, min(j, n));
        i += j - 1;
    }
 
    ans = p;
    int x = (p - 1) / 2;
    ans = max(ans, (p - x) * (x + 1));
    x++;
    ans = max(ans, (p - x) * (x + 1));
    return ans;
}
int main()
{ 
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << hf(s) << endl;
    }
}
