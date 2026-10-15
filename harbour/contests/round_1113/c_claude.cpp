#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int m = 2 * n;

        vector<int> a(m + 2, 0);
        for (int i = 1; i <= m; i++)
            scanf("%d", &a[i]);

        vector<int> nxt(m + 3), prv(m + 3);
        for (int i = 0; i <= m + 1; i++)
        {
            nxt[i] = i + 1;
            prv[i] = i - 1;
        }

        vector<int> firstOcc(n + 2, 0), secondOcc(n + 2, 0);
        for (int i = 1; i <= m; i++)
        {
            int x = a[i];
            if (!firstOcc[x])
                firstOcc[x] = i;
            else
                secondOcc[x] = i;
        }

        vector<int> L(n + 2), R(n + 2);
        for (int x = 1; x <= n; x++)
        {
            L[x] = firstOcc[x];
            R[x] = secondOcc[x];
        }

        vector<int> fen(m + 3, 0);
        auto upd = [&](int i, int v)
        { for(;i<=m;i+=i&(-i)) fen[i]+=v; };
        auto qry = [&](int i)
        { int s=0; for(;i>0;i-=i&(-i)) s+=fen[i]; return s; };
        for (int i = 1; i <= m; i++)
            upd(i, 1);

        auto aliveCount = [&](int l, int r) -> int
        {
            if (l > r)
                return 0;
            return qry(r) - qry(l - 1);
        };

        priority_queue<pair<int, int>> pq;
        vector<char> done(n + 2, 0);
        vector<char> removed(m + 3, 0);

        for (int x = 1; x <= n; x++)
        {
            int len = aliveCount(L[x], R[x]);
            pq.push({len, x});
        }

        long long score = 0;
        int remaining = n;

        auto isAlive = [&](int p) -> bool
        {
            return !removed[p];
        };

        while (remaining > 0)
        {
            auto top = pq.top();
            int len = top.first, x = top.second;
            pq.pop();
            if (done[x])
                continue;
            int curLen = aliveCount(L[x], R[x]);
            if (curLen != len)
            {
                pq.push({curLen, x});
                continue;
            }

            score += (long long)curLen * curLen;

            int l = L[x], r = R[x];
            int cur = l;
            unordered_set<int> touched;

            while (true)
            {
                int c = cur;
                int p = prv[c], nx = nxt[c];
                nxt[p] = nx;
                prv[nx] = p;
                if (!removed[c])
                {
                    removed[c] = 1;
                    upd(c, -1);
                }

                int v = a[c];
                if (v != x && !done[v])
                {
                    touched.insert(v);
                }
                if (c == r)
                    break;
                cur = nx;
            }
            done[x] = 1;
            remaining--;

            for (int v : touched)
            {
                if (done[v])
                    continue;
                bool aliveL = isAlive(L[v]);
                bool aliveR = isAlive(R[v]);
                if (!aliveL && !aliveR)
                {
                    done[v] = 1;
                    remaining--;
                }
                else
                {
                    int newLen = aliveCount(L[v], R[v]);
                    pq.push({newLen, v});
                }
            }
        }

        printf("%lld\n", score);
    }
}