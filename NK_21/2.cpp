#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <cstdio>
#define ll long long
#define fo(i,a,b) for (i=a; i<=b; i++)
#define foo(i,a,b) for (i=a; i>=b; i--)
using namespace std;
 
const int N=505;
int t, n, m, i, j;
ll a[N][N], f[N][N];
 
int main()
{
    scanf("%d",&t);
    while (t)
    {
        t--, scanf("%d%d",&n,&m);
        fo(i,1,n) fo(j,1,m) scanf("%lld",&a[i][j]);
        foo(i,n,1) foo(j,m,1)
        {
            if (i==n && j==m) f[i][j]=0; else
            if (i==n) f[i][j]=f[i][j+1]; else
            if (j==m) f[i][j]=f[i+1][j]; else
            if ((i+j)%2==0)
                f[i][j]=min(f[i][j+1],f[i+1][j]);
            else
                f[i][j]=max(f[i][j+1],f[i+1][j]);
            if ((i+j)%2==0) f[i][j]+=a[i][j]; else f[i][j]-=a[i][j];
        }
        printf("%lld\n",f[1][1]);
    }
}
