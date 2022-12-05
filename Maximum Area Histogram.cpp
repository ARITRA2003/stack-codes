#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;
typedef unsigned long long int ULL;
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
void _print(LL t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(long double t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(unsigned long long t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
void answer()
{  
  LL n,maxi=-1,ans;
  cin>>n;
  vector<LL> right;
    stack<LL> s;
    for(LL i=n-1;i>=0;--i){
    if(s.empty()) right.push_back(n);
    else if(v[s.top()]<v[i]) right.push_back(s.top());
    else {
       while(!s.empty() && v[s.top()]>=v[i]){
        s.pop();
       }
       if(s.empty()) right.push_back(n);
       else right.push_back(s.top());
    }
    s.push(i);
  }
  while(!s.empty()){
    s.pop();
  }
    for(LL i=0;i<n;++i){
    if(s.empty()) ans=-1;
    else if(v[s.top()]<v[i]) ans=s.top();
    else {
       while(!s.empty() && v[s.top()]>=v[i]){
        s.pop();
       }
       if(s.empty()) ans=-1;
       else ans=s.top();
    }
    s.push(i);
    maxi=max(maxi,(v[i]*(right[n-1-i]-ans-1)));
  }
  return maxi;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    LL ARITRASEN=1;
    cin>>ARITRASEN;
    while(ARITRASEN--)
    {
     answer();
    /*if(answer()) cout<<"YES\n";
    else cout<<"NO\n";*/
    }
    return 0;
}