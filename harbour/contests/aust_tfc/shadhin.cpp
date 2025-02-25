#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pie 2*(acos(0.0))
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define pb push_back
#define endl "\n"
#define lcm(a,b) (a*b)/(__gcd<ll>(a,b))
#define mod 1000000007
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define ALLAHU_AKBAR ios::sync_with_stdio(false); cin.tie(nullptr);

void sir2()
{
    ll r,c;  cin>>r>>c;
    
    if(r%2==0)
    {
        if(c%2==0 && r>=c)
        {
            for(ll i=0; i<r; i++)
            {
                for(ll j=0; j<c; j++)
                {
                    if(i%2==0)
                    {
                        if(j%2==0) cout<<'(';
                        else cout<<')';
                    }
                    else
                    {
                        if(j%2==0) cout<<'(';
                        else cout<<')';
                    }
                }
                cout<<endl;
            }
            //cout<<endl;
            return;
        }
        else if(c%2==0 && r<c){
            for(ll i=0; i<r; i++)
            {
                for(ll j=0; j<c; j++)
                {
                    if(r%2==0) cout<<'(';
                    else if(r%2) cout<<')';
                }
                cout<<endl;
            }
            //cout<<endl;
            return;
        }
        else    // c odd
        {
            for(ll i=0; i<r; i++)
            {
                for(ll j=0; j<c; j++)
                {
                    if(i%2==0)cout<<'(';
                    
                    else cout<<')';
                }
                cout<<endl;
            }
            //cout<<endl;
            return;
        }
    }
    else
    {
        if(c%2==0)
        {
            for(ll i=0; i<r; i++)
            {
                for(ll j=0; j<c; j++)
                {
                    if(i%2==0)
                    {
                        if(j%2==0) cout<<'(';
                        else cout<<')';
                    }
                    else if(i%2==1)
                    {
                        if(j%2==0) cout<<'(';
                        else cout<<')';
                    }
                }
                cout<<endl;
            }//cout<<endl;
            return;

            }
            else{
                for(ll i=0; i<r; i++)
                {
                    for(ll j=0; j<c; j++)
                    {
                        if(i%2) cout<<')';
                        else if(i%2==0) cout<<'(';
                    }cout<<endl;
                }
                //cout<<endl;
                return;
        }
    }
}
void sir()
{
    ll n; cin>>n;
    
    char v[3][3];
    vector<string>tem;
    for(ll i=0; i<3; i++)
    {
        string x;
        cin>>x;
        tem.pb(x);
    }
    for(ll i=0; i<3; i++)
    {
        for(ll j=0; j<3; j++)
        {
        
            v[i][j]=tem[i][j];
        }
    }
    // for(ll i=0; i<3; i++)
    // {
    //     for(ll j=0; j<3;j++) cout<<v[i][j];
    //     cout<<endl;
    // }
    vector<string>rot;
    while(n--)
    {
        string s; cin>>s;
        rot.pb(s);
    }
    //cout<<rot[0]<<" "<<rot[1];
    for(ll i=0;i<n; i++) 
    {
        cout<<rot[i]<<" ";
    }
    for(ll i=0; i<n; i++)
    {
        string r = rot[i];

        if(r[0]=='1')
        {
            ll i=0, j=0;
            char a= v[i][j], b = v[i][j+1], c = v[i+1][j+1], d = v[i][j+1];
            if(r[1]=='C')
            {
                v[i][j] = d, v[i][j+1] = a, v[i+1][j+1] = b, v[i][j+1]=c;
            }
            else{
                v[i][j] = b, v[i][j+1] = c, v[i+1][j+1] = d, v[i][j+1]=a;
            }
        }
        else if(r[0]=='2')
        {
            ll i=0, j=1;
            char a= v[i][j], b = v[i][j+1], c = v[i+1][j+1], d = v[i][j+1];
            if(r[1]=='C')
            {
                v[i][j] = d, v[i][j+1] = a, v[i+1][j+1] = b, v[i][j+1]=c;
            }
            else{
                v[i][j] = b, v[i][j+1] = c, v[i+1][j+1] = d, v[i][j+1]=a;
            }
        }
        else if(r[0]==3)
        {
            ll i=1, j=0;
            char a= v[i][j], b = v[i][j+1], c = v[i+1][j+1], d = v[i][j+1];
            if(r[1]=='C')
            {
                v[i][j] = d, v[i][j+1] = a, v[i+1][j+1] = b, v[i][j+1]=c;
            }
            else{
                v[i][j] = b, v[i][j+1] = c, v[i+1][j+1] = d, v[i][j+1]=a;
            }
        }
        else{
            ll i=1, j=1;
            char a= v[i][j], b = v[i][j+1], c = v[i+1][j+1], d = v[i][j+1];
            if(r[1]=='C')
            {
                v[i][j] = d, v[i][j+1] = a, v[i+1][j+1] = b, v[i][j+1]=c;
            }
            else{
                v[i][j] = b, v[i][j+1] = c, v[i+1][j+1] = d, v[i][j+1]=a;
            }
        }

    }
    for(ll i=0; i<3; i++)
    {
        for(ll j=0; j<3;j++)
        {
            cout<<v[i][j];
        }
        cout<<endl;
    }

}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}