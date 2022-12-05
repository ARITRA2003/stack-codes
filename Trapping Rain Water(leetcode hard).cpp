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
/*
void answer()
{  
  LL n;
  cin>>n;
  vector<LL> v(n),pre1(n),pre2(n);
  cin>>v[0];
  pre1[0]=v[0];
  for(LL i=1;i<n;++i){
    cin>>v[i];
    pre1[i]=max(pre1[i-1],v[i]);
  }
  pre2[n-1]=v[n-1];
  for(LL i=n-2;i>=0;--i){
    pre2[i]=max(pre2[i+1],v[i]);
  }
  LL sum=0;
  for(LL i=1;i<n-1;++i){
    if(v[i]==pre1[i] || v[i]==pre2[i]) continue;
    else sum+=(min(pre1[i],pre2[i])-v[i]);
  }
  cout<<sum<<"\n";
}*/
// Most optimal solutio using 2 pointers approach
void answer()
{  
  LL n;
  cin>>n;
  vector<LL> v(n);
  for(LL i=0;i<n;++i) cin>>v[i];
   LL sum=0,lm=-1,rm=-1;//leftmax,rightmax
  for(LL i=0,j=n-1;i<=j;){//i=j(2 0 2)
    if(v[i]<=v[j]){
       if(v[i]>=lm) lm=v[i];
       else sum+=(lm-v[i]); 
       i++;
      }
      else if(v[j]<=v[i]){
     if(v[j]>=rm) rm=v[j];
     else sum+=(rm-v[j]);
    j--;
   }
  }
  cout<<sum<<"\n";
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