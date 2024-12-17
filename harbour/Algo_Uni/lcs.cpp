#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int lcs(string s1, string s2)
{
    int n = s1.size();
    int m = s2.size();
    int mtrx[n + 1][m + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
            {
                mtrx[i][j] = 0;
            }
          
            else if (s1[i - 1] == s2[j - 1])
            {
                mtrx[i][j] = mtrx[i - 1][j - 1] + 1; // it means diagonal,if it matches then diagonal+1
            }
            else
            {
                mtrx[i][j] = max(mtrx[i][j - 1], mtrx[i - 1][j]); // 1st er ta left r porer ta top
            }
        }
    }
    int i = n;
    int j = m;
    string lcs_st = "";
    while (i > 0 && j > 0)
    { 
        if (s1[i - 1] == s2[j - 1])
        { // ekhne shudu i na diye i-1
            lcs_st = lcs_st + s1[i - 1];
            i--;
            j--; 
        }
        else if (mtrx[i][j - 1] >= mtrx[i - 1][j])
        {          // eql holey left a r grtr holey top a
            i = i; // eta na likhle o hobey
            j--;
        }
        else
        {
            i--; // left r top sme hole else a jabey cz eikhne cnditn hochchey equal or choto
        }
    }
    reverse(lcs_st.begin(), lcs_st.end());
    cout << lcs_st << endl;

    return mtrx[n][m];
}

int main()
{
    string st1 = "hello";
    string st2 = "codeforces";

    int ans = lcs(st1, st2);
    cout << ans << endl;

    return 0;
}