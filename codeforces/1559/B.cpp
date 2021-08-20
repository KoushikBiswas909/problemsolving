#include <bits/stdc++.h>
#define rep(i, x, y) for (register int i = (x); i <= (y); i++)
#define down(i, x, y) for (register int i = (x); i >= (y); i--)

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

//B is 1 , R is -1.
int main(int argc, char const *argv[])
{
    int t = read();
    while (t--)
    {
        std::queue<int> q;
        int n = read();
        char s[105];
        int vis[105];
        memset(vis, 0, sizeof(vis));
        scanf("%s", s + 1);
        rep(i, 1, n)
        {
            if (s[i] != '?')
            {
                vis[i] = (s[i] == 'B' ? 1 : -1);
                q.push(i);
            }
        }
        while (!q.empty())
        {
            int pos = q.front();
            q.pop();
            if (vis[pos] == 1)
            {
                if (!vis[pos + 1] && pos + 1 <= n)
                {
                    vis[pos + 1] = -1;
                    q.push(pos + 1);
                }
                if (!vis[pos - 1] && pos - 1 > 0)
                {
                    vis[pos - 1] = -1;
                    q.push(pos - 1);
                }
            }
            else if (vis[pos] == -1)
            {
                if (!vis[pos + 1] && pos + 1 <= n)
                {
                    vis[pos + 1] = 1;
                    q.push(pos + 1);
                }
                if (!vis[pos - 1] && pos - 1 > 0)
                {
                    vis[pos - 1] = 1;
                    q.push(pos - 1);
                }
            }
        }
        int a = 1, b = -1;
        rep(i, 1, n) if (!vis[i]) vis[i] = a, std::swap(a, b);
        rep(i, 1, n)
        {
            if (vis[i] == 1)
                putchar('B');
            else if (vis[i] == -1)
                putchar('R');
        }
        puts("");
    }
    return 0;
}