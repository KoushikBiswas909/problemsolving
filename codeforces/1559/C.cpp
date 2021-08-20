#include <bits/stdc++.h>
#define rep(i, x, y) for (register int i = (x); i <= (y); i++)
#define down(i, x, y) for (register int i = (x); i >= (y); i--)
const int maxn = 1e4 + 5;

int a[maxn];

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

int main(int argc, char const *argv[])
{
    int t = read();
    while (t--)
    {
        int n = read();
        rep(i, 1, n) a[i] = read();
        if (!a[n])
        {
            rep(i, 1, n + 1) printf("%d ", i);
            puts("");
            continue;
        }
        else if (a[1])
        {
            printf("%d ", n + 1);
            rep(i, 1, n) printf("%d ", i);
            puts("");
            continue;
        }
        else
        {
            int pos = -1;
            rep(i, 1, n) if (!a[i] && a[i + 1])
            {
                pos = i;
                break;
            }
            if (pos != -1)
            {
                rep(i, 1, pos)
                    printf("%d ", i);
                printf("%d ", n + 1);
                rep(i, pos + 1, n)
                    printf("%d ", i);
                puts("");
                continue;
            }
        }
        puts("-1");
    }
    return 0;
}