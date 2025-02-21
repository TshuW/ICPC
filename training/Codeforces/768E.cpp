// written at 10:39 on 21 Feb 2017 
#include <bits/stdc++.h>

#define IOS std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
// #define __DEBUG__
#ifdef __DEBUG__
    #define DEBUG(...) printf(__VA_ARGS__)
#else
    #define DEBUG(...)
#endif
#define filename ""
#define setfile() freopen(filename".in", "r", stdin); freopen(filename".ans", "w", stdout);
#define resetfile() freopen("/dev/tty", "r", stdin); freopen("/dev/tty", "w", stdout); system("more " filename".ans");
#define rep(i, j, k) for (int i = j; i < k; ++i)
#define irep(i, j, k) for (int i = j - 1; i >= k; --i)

using namespace std;

template <typename T>
inline T sqr(T a) { return a * a;};

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int > Pii;

const double pi = acos(-1.0);
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;
const int MAX_N = 1e6 + 10;
const int MAX_M = 70;

int N, S[MAX_N], sg[MAX_M];

int main(int argc, char const *argv[])
{
    scanf("%d", &N);
    rep (i, 0, N) scanf("%d", S + i);
    int s = 0, t = 0;
    while (s < MAX_M) {
        for (int k = 0; k < t + 1 && s < MAX_M; ++k) sg[s++] = t;
        ++t;
    }
    int x = 0;
    rep(i, 0, N) x ^= sg[S[i]];
    if (x != 0) printf("NO\n");
    else printf("YES\n");
    return 0;
}