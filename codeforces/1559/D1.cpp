#include <bits/stdc++.h>
#define rep(i, x, y) for (register int i = (x); i <= (y); i++)
#define down(i, x, y) for (register int i = (x); i >= (y); i--)
#define pii pair<int, int>
using namespace std;
const int maxn = 1005;

int t, n, m1, m2, ans, cnt1, cnt2;
int fa1[maxn], fa2[maxn];
vector<pii> vec;

inline int read()
{
    int x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9')
    {
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9')
    {
        x = x * 10 + ch - '0';
        ch = getchar();
    }
    return x * f;
}

void init()
{
    ans = cnt1 = cnt2 = 0;
    rep(i, 0, n) fa1[i] = fa2[i] = i;
}

inline int find1(int x) { return x == fa1[x] ? x : fa1[x] = find1(fa1[x]); }

inline int find2(int x) { return x == fa2[x] ? x : fa2[x] = find2(fa2[x]); }

void merge1(int x, int y)
{
    int fx = find1(x), fy = find1(y);
    if (fx == fy)
        return;
    fa1[fx] = fy;
    ++cnt1;
}

void merge2(int x, int y)
{
    int fx = find2(x), fy = find2(y);
    if (fx == fy)
        return;
    fa2[fx] = fy;
    ++cnt2;
}

int main(int argc, char const *argv[])
{
    n = read(), m1 = read(), m2 = read();
    init();
    int x, y;
    rep(i, 1, m1)
    {
        x = read(), y = read();
        merge1(x, y);
    }
    rep(i, 1, m2)
    {
        x = read(), y = read();
        merge2(x, y);
    }
    rep(i, 1, n)
    {
        if (cnt1 == n - 1 || cnt2 == n - 1)
            break;
        rep(j, 1, n)
        {
            int fx1 = find1(i), fy1 = find1(j);
            int fx2 = find2(i), fy2 = find2(j);
            if ((fx1 != fy1) && (fx2 != fy2))
            {
                ++ans;
                merge1(i, j), merge2(i, j);
                vec.push_back(make_pair(i, j));
            }
        }
    }
    printf("%d\n", ans);
    int nn = vec.size() - 1;
    rep(i, 0, nn) printf("%d %d\n", vec[i].first, vec[i].second);
    return 0;
}