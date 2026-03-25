#include <iostream>
#include <cstdlib>
using namespace std;
int l = 1;
void traceback(long long i, long long j, long long** s, int* out)// ?????????????????С????????????
{
    if (i == j)
    {
        out[l++] = i + 1;
    }
    else
    {
        out[l++] = -1;
        traceback(i, s[i][j], s, out);
        traceback(s[i][j] + 1, j, s, out);
        out[l++] = -2;
    }

}
void solve(int n, int p[], int out[])
{
    if (p == NULL || out == NULL || n <= 2 || n > 500)
        return;

    long long** m = new long long* [n];
    long long** s = new long long* [n];
    long long i, j;
    
    for (i = 0; i < n; i++)
    {
        m[i] = new long long[n];
        s[i] = new long long[n];
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            m[i][j] = 0;
            s[i][j] = 0;
        }
    }

    long long r, k, t;
    for (r = 2; r <= n; r++)
    {
        for (i = 0; i < n - r + 1; i++)
        {
            j = i + r - 1;
            m[i][j] = m[i + 1][j] + p[i] * p[j + 1] * p[i + 1];
            s[i][j] = i;
            for (k = i + 1; k < j; k++)
            {
                t = m[i][k] + m[k + 1][j] + p[i] * p[k + 1] * p[j + 1];
                if (t < m[i][j])
                {
                    m[i][j] = t;
                    s[i][j] = k;
                }
            }
        }
    }
    out[0] = m[0][n - 1] % 1000000007;
    traceback(0, n - 1, s, out);


    for (j = 0; j < n; j++)
    {
        delete[]m[j];
        delete[]s[j];

    }
    delete[]m;
    delete[]s;
}
