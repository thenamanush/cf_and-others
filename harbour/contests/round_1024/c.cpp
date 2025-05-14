/*
 *   Copyright (c) 2025 Emon Thakur
 *   All rights reserved.
 */
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
using minheap = priority_queue<long long, vector<long long>, greater<long long>>;
typedef tree<int, null_type, greater_equal<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key

#define ll long long
#define ld long double
#define MOD 1000000007
#define pie 2*(acos(0.0))
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define pb push_back
#define endl '\n'
#define lcm(a,b) (a*b)/(__gcd<ll>(a,b))
#define logb(base,val) log2l(val) / log2l(base)
#define print(v) for(auto e:v) cout<<e<<" "; cout<<endl;
#define printp(v) for(auto e:v) cout<<e.first<<" "<<e.second<<endl;
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define life_is_a_race ios::sync_with_stdio(false); cin.tie(nullptr);
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

void pbdserase(pbds &t, int v)
{
    //normal erase function doesnt work in ordered multiset but this works
    int rank = t.order_of_key(v);
    auto it = t.find_by_order(rank);
    t.erase(it);
}
int x,n;
int a[1001][1001];


void put(int lim,int i,int j,int si,int sj,bool ok)
{
    if(x<0) return;
    if(i==si && j==sj && ok) return;
    ok = true;
    a[i][j] = x--;
    if(i==lim)
    {
        if(j+lim == n-1) put(lim,i+1,j,si,sj,ok);
        else put(lim,i,j+1,si,sj,ok);
    }
    else if(i==n-lim-1)
    {
        if(j-lim==0) put(lim,i-1,j,si,sj,ok);
        else put(lim,i,j-1,si,sj,ok);
    }
    else
    {
        if(j==lim) put(lim,i-1,j,si,sj,ok);
        else put(lim,i+1,j,si,sj,ok);
    }
}
void solve(int tc)
{
    //cout<<"Case "<<tc<<": ";
    //check N <= 2 cases 
    cin >> n;
    x = n*n -1 ;
    for(int i=0;i<(n+1)/2;i++)
    {
        put(i,i,i,i,i,false);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++) cout<<a[i][j]<<' '; cout<<endl;
    }
}
int main()
{
    life_is_a_race
    int t=1; 
    cin>>t;
    for(int i=1;i<=t;i++) solve(i);
}
